import { getStore } from "@netlify/blobs";
import { validateUrl, normalizeAlias, generateCode } from "../../lib/links.js";

const json = (data, status = 200, headers = {}) =>
  new Response(JSON.stringify(data), {
    status,
    headers: { "Content-Type": "application/json; charset=utf-8", ...headers },
  });

export default async (req) => {
  if (req.method !== "POST") {
    return json({ error: "Use o método POST." }, 405, { Allow: "POST" });
  }

  let body;
  try {
    body = await req.json();
  } catch {
    return json({ error: "Envie um JSON válido." }, 400);
  }

  const urlCheck = validateUrl(body?.url);
  if (!urlCheck.ok) return json({ error: urlCheck.error }, 400);

  const aliasCheck = normalizeAlias(body?.alias);
  if (!aliasCheck.ok) return json({ error: aliasCheck.error }, 400);

  const store = getStore("links");
  let code = aliasCheck.alias;

  if (code) {
    if (await store.get(code)) {
      return json({ error: "Esse apelido já está em uso. Escolha outro." }, 409);
    }
  } else {
    for (let tries = 0; tries < 5; tries++) {
      const candidate = generateCode();
      if (!(await store.get(candidate))) {
        code = candidate;
        break;
      }
    }
    if (!code) {
      return json({ error: "Não foi possível gerar um código. Tente de novo." }, 503);
    }
  }

  await store.setJSON(code, { url: urlCheck.url, createdAt: new Date().toISOString() });

  const origin = new URL(req.url).origin;
  return json({ code, url: urlCheck.url, shortUrl: `${origin}/c/${code}` }, 201);
};

export const config = { path: "/api/shorten" };
