import { getStore } from "@netlify/blobs";

const notFoundPage = `<!doctype html>
<html lang="pt-BR">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>Link não encontrado · Miau Links</title>
  <style>
    body { margin: 0; min-height: 100vh; display: grid; place-items: center; background: #d8b184;
           font-family: system-ui, sans-serif; color: #2b2118; text-align: center; padding: 1rem; }
    h1 { font-size: 2rem; margin: .5rem 0; }
    a { color: #12605f; font-weight: 700; }
  </style>
</head>
<body>
  <main>
    <p style="font-size:4rem;margin:0" aria-hidden="true">🙀</p>
    <h1>Esse link não existe</h1>
    <p>O gatinho procurou na caixa toda e não achou. Confira o código ou crie um novo.</p>
    <p><a href="/">Encurtar um link</a></p>
  </main>
</body>
</html>`;

export default async (req, context) => {
  const code = String(context.params?.code ?? "").toLowerCase();
  const record = code ? await getStore("links").get(code, { type: "json" }) : null;

  if (!record?.url) {
    return new Response(notFoundPage, {
      status: 404,
      headers: { "Content-Type": "text/html; charset=utf-8" },
    });
  }

  return new Response(null, {
    status: 302,
    headers: { Location: record.url, "Cache-Control": "no-store" },
  });
};

export const config = { path: "/c/:code" };
