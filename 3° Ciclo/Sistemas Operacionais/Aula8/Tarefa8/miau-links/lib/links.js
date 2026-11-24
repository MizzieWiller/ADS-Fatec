// Regras puras do encurtador (sem rede, sem banco): fáceis de testar.

export const ALPHABET = "abcdefghjkmnpqrstuvwxyz23456789"; // sem i, l, o, 0, 1 (evita confusão)
export const CODE_LENGTH = 6;
export const MAX_URL_LENGTH = 2048;
export const RESERVED_ALIASES = ["api", "c", "admin", "index", "miau"];

const ALIAS_RE = /^[a-z0-9][a-z0-9-]{1,22}[a-z0-9]$/; // 3 a 24 caracteres

/** Gera um código aleatório. `random` pode ser trocado nos testes. */
export function generateCode(length = CODE_LENGTH, random = Math.random) {
  let code = "";
  for (let i = 0; i < length; i++) {
    code += ALPHABET[Math.floor(random() * ALPHABET.length)];
  }
  return code;
}

/** Valida e normaliza a URL de destino. Só aceita http e https. */
export function validateUrl(input) {
  if (typeof input !== "string" || input.trim() === "") {
    return { ok: false, error: "Cole um link para encurtar." };
  }

  let text = input.trim();
  if (!/^[a-z][a-z0-9+.-]*:\/\//i.test(text)) {
    text = `https://${text}`; // "exemplo.com" vira "https://exemplo.com"
  }

  if (text.length > MAX_URL_LENGTH) {
    return { ok: false, error: `O link é muito longo (máximo ${MAX_URL_LENGTH} caracteres).` };
  }

  let url;
  try {
    url = new URL(text);
  } catch {
    return { ok: false, error: "Esse link não parece válido." };
  }

  if (url.protocol !== "http:" && url.protocol !== "https:") {
    return { ok: false, error: "Só aceitamos links http:// ou https://." };
  }
  if (!url.hostname.includes(".")) {
    return { ok: false, error: "Esse link não parece ter um endereço válido." };
  }

  return { ok: true, url: url.href };
}

/** Valida o apelido opcional. Retorna alias = null quando não foi informado. */
export function normalizeAlias(input) {
  if (input === undefined || input === null || String(input).trim() === "") {
    return { ok: true, alias: null };
  }

  const alias = String(input).trim().toLowerCase();

  if (!ALIAS_RE.test(alias)) {
    return {
      ok: false,
      error: "O apelido deve ter de 3 a 24 caracteres: letras, números e hífen.",
    };
  }
  if (RESERVED_ALIASES.includes(alias)) {
    return { ok: false, error: "Esse apelido é reservado. Escolha outro." };
  }

  return { ok: true, alias };
}
