# Resumo: Estruturas de Decisão ou Seleção

## 1. Introdução
As estruturas de seleção são utilizadas na programação quando há a necessidade de verificar condições para decidir se uma instrução (ou sequência de instruções) deve ser executada. Elas avaliam uma condição (uma obrigação imposta/aceita) para tomar uma decisão. O resultado dessa avaliação é sempre um valor lógico: Verdadeiro ou Falso.

---

## 2. Operadores Relacionais
São utilizados para estabelecer uma relação de comparação entre valores ou expressões.

| Operação | Notação Algorítmica (Pseudocódigo) | Operador em C++ |
| :--- | :---: | :---: |
| Igual a | `=` | `==` |
| Diferente de | `<>` | `!=` |
| Maior que | `>` | `>` |
| Menor que | `<` | `<` |
| Maior ou igual a | `>=` | `>=` |
| Menor ou igual a | `<=` | `<=` |

---

## 3. Estrutura de Seleção Simples
Executa um bloco de instruções apenas se a condição for verdadeira. Se for falsa, o programa simplesmente ignora o bloco e segue o fluxo normal.

**Pseudocódigo:**
```text
se (condição) então
    instruções executadas após condição ser verdadeira
fimse
```

**Em C++:**
```cpp
if (condição) {
    // bloco verdadeiro;
}
```

---

## 4. Estrutura de Seleção Composta
Prevê dois caminhos alternativos. Um bloco de instruções é executado se a condição for verdadeira, e um outro bloco é executado caso a condição seja falsa.

**Pseudocódigo:**
```text
se (condição) entao
    instruções executadas após condição ser verdadeira
senao
    instruções executadas após a condição ser falsa
fimse
```

**Em C++:**
```cpp
if (condição) {
    // bloco verdadeiro;
} else {
    // bloco falso;
}
```

---

## 5. Representação em Diagrama de Blocos (Fluxograma)
Nos diagramas de bloco, as estruturas de decisão são representadas pelo símbolo de losango (Decisão). 
* As linhas de fluxo que saem do losango são sinalizadas com rótulos **S** (Sim/Verdadeiro) e **N** (Não/Falso), indicando claramente o caminho que o algoritmo seguirá dependendo do resultado lógico.
