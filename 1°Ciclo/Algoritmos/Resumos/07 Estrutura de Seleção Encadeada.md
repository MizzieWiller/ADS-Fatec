# Resumo: Estruturas de Seleção Encadeada

Este repositório contém o resumo do material de estudo sobre **Estruturas de Seleção Encadeada** (ou aninhadas), abordando conceitos teóricos, sintaxe em pseudocódigo e C++, além de exemplos práticos de lógica de programação.

---

## 📋 Sumário
1. [Conceito](#1-conceito-de-estrutura-de-seleção-encadeada)
2. [Exemplo 1: Cálculo de Média Escolar](#2-exemplo-prático-cálculo-de-média-escolar)
3. [Exemplo 2: Classificação de Número](#3-exemplo-prático-classificação-de-número)
4. [Múltiplos, Divisores e Operadores de Resto](#4-múltiplos-divisores-e-operadores-de-resto)

---

## 1. Conceito de Estrutura de Seleção Encadeada

Uma **estrutura de seleção encadeada** consiste em uma sequência de testes condicionais encadeados. Os blocos de instruções são executados ou ignorados dependendo do resultado de múltiplas condições avaliadas em cascata (uma após a outra, caso a anterior seja falsa).

### Sintaxe Básica em Pseudocódigo
```text
se (condição_1) entao
   conjunto de instruções para condição 1 verdadeira
senao
   se (condição_2) entao
      conjunto de instruções para condição 2 verdadeira
   senao
      conjunto de instruções condição 1 e 2 falsa
   fimse
fimse
```

### Sintaxe Básica em C++
```cpp
if (condicao1) {
    // bloco verdadeiro 1
} else if (condicao2) {
    // bloco verdadeiro 2
} else {
    // bloco falso
}
```

---

## 2. Exemplo Prático: Cálculo de Média Escolar

O problema consiste em ler duas notas, calcular a média aritmética e exibir uma mensagem conforme a faixa de valores:
- **Aprovado:** Média $\ge 7$
- **Reprovado:** Média $\le 3$
- **Exame:** Média estritamente acima de 3 e abaixo de 7

### Implementação em Pseudocódigo
```text
algoritmo "Calcula_Media"
var
   nota1, nota2, media: real
inicio
   escreval("Digite a primeira nota")
   leia(nota1)
   escreval("Digite a segunda nota")
   leia(nota2)
   
   media <- (nota1 + nota2) / 2
   
   se (media >= 7) entao
      escreval("Aprovado ", media)
   senao
      se (media <= 3) entao
         escreval("Reprovado ", media)
      senao
         escreval("Exame", media)
      fimse
   fimse
fim
```

### Implementação em C++
```cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    float media;
    printf("Informe a media\n");
    scanf("%f", &media);
    
    if (media >= 7) {
        printf("Aprovado");
    } else if (media <= 3) {
        printf("Reprovado");
    } else {
        printf("Exame");
    }
    return 0;
}
```

---

## 3. Exemplo Prático: Classificação de Número

Ler um número inteiro e exibir se ele é **Maior do que 20**, **Igual a 20** ou **Menor que 20**.

### Implementação em Pseudocódigo
```text
algoritmo "Decisao_Encadeada"
var
   num: inteiro
inicio
   escreval("Digite um número")
   leia(num)
   
   se (num > 20) entao
      escreval("Maior que 20")
   senao
      se (num < 20) entao
         escreval("Menor que 20")
      senao
         escreval("Igual a 20")
      fimse
   fimse
fim
```

### Implementação em C++
```cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Informe um número\n");
    scanf("%d", &num);
    
    if (num > 20) {
        printf("Maior que 20");
    } else if (num < 20) {
        printf("Menor que 20");
    } else {
        printf("Igual a 20");
    }
    return 0;
}
```

---

## 4. Múltiplos, Divisores e Operadores de Resto

- **Múltiplos:** Resultados obtidos a partir da multiplicação de dois números naturais.
- **Divisores:** Números que dividem outros gerando um resultado de divisão exato (resto igual a zero).

Para verificar divisibilidade na programação, utiliza-se o operador de **resto da divisão**:
- **Pseudocódigo:** `mod` (Ex: `n mod 5 = 0`)
- **C++:** `%` (Ex: `num % 5 == 0`)

### Exemplo: Verificar se um número é divisível por 5 (C++)
```cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Informe um número\n");
    scanf("%d", &num);
    
    if (num % 5 == 0) {
        printf("Número divisível por 5");
    } else {
        printf("Número não é divisível por 5");
    }
    return 0;
}
```
