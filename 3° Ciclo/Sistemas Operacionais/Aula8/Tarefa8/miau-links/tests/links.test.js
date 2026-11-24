import { test } from "node:test";
import assert from "node:assert/strict";
import {
  ALPHABET,
  CODE_LENGTH,
  MAX_URL_LENGTH,
  generateCode,
  validateUrl,
  normalizeAlias,
} from "../lib/links.js";

test("generateCode gera o tamanho certo e só usa o alfabeto permitido", () => {
  const code = generateCode();
  assert.equal(code.length, CODE_LENGTH);
  for (const char of code) assert.ok(ALPHABET.includes(char));
});

test("generateCode é determinístico com um random fixo", () => {
  assert.equal(generateCode(4, () => 0), ALPHABET[0].repeat(4));
});

test("validateUrl aceita http e https", () => {
  assert.deepEqual(validateUrl("https://exemplo.com/gatos"), {
    ok: true,
    url: "https://exemplo.com/gatos",
  });
  assert.equal(validateUrl("http://exemplo.com").ok, true);
});

test("validateUrl adiciona https:// quando falta o protocolo", () => {
  assert.equal(validateUrl("exemplo.com").url, "https://exemplo.com/");
});

test("validateUrl recusa protocolos perigosos", () => {
  assert.equal(validateUrl("javascript:alert(1)").ok, false);
  assert.equal(validateUrl("ftp://exemplo.com").ok, false);
  assert.equal(validateUrl("data:text/html,<h1>oi</h1>").ok, false);
});

test("validateUrl recusa vazio, lixo e hosts sem ponto", () => {
  assert.equal(validateUrl("").ok, false);
  assert.equal(validateUrl("   ").ok, false);
  assert.equal(validateUrl(null).ok, false);
  assert.equal(validateUrl("http://localhost").ok, false);
  assert.equal(validateUrl("https://").ok, false);
});

test("validateUrl recusa links longos demais", () => {
  const longUrl = `https://exemplo.com/${"a".repeat(MAX_URL_LENGTH)}`;
  assert.equal(validateUrl(longUrl).ok, false);
});

test("normalizeAlias aceita vazio como 'sem apelido'", () => {
  assert.deepEqual(normalizeAlias(""), { ok: true, alias: null });
  assert.deepEqual(normalizeAlias(undefined), { ok: true, alias: null });
});

test("normalizeAlias normaliza para minúsculas e valida o formato", () => {
  assert.deepEqual(normalizeAlias("  Gato-Preto "), { ok: true, alias: "gato-preto" });
  assert.equal(normalizeAlias("ab").ok, false);
  assert.equal(normalizeAlias("-gato").ok, false);
  assert.equal(normalizeAlias("gato preto").ok, false);
  assert.equal(normalizeAlias("a".repeat(25)).ok, false);
});

test("normalizeAlias recusa apelidos reservados", () => {
  assert.equal(normalizeAlias("api").ok, false);
  assert.equal(normalizeAlias("admin").ok, false);
});
