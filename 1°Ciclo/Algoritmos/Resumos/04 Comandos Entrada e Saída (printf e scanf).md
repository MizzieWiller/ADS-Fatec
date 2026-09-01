# Resumo: Comandos de Entrada e Saída (printf e scanf)

## 1. Conceitos Fundamentais
* **Programa:** Conjunto de instruções que dizem ao computador o que deve ser feito.
* **Código-fonte:** Conjunto de palavras e símbolos ordenados que contêm instruções em uma linguagem de programação (alto nível).
* **Compilação:** Processo de transformar o código-fonte (alto nível) em linguagem de máquina (programa executável).
* **Instruções Primitivas:** Comandos básicos que efetuam tarefas essenciais, como a entrada e saída de dados e a movimentação dos mesmos na memória.
* **Sintaxe:** A forma exata como os comandos devem ser escritos para que possam ser compreendidos pelo tradutor (compilador).

---

## 2. Estrutura de Controle
* Todo programa segue um fluxo básico de controle: **Entrada $\rightarrow$ Processamento $\rightarrow$ Saída**.
* **Estrutura padrão de um Pseudocódigo:**
  1. Programa (Nome do programa)
  2. Declaração de variáveis (nomes e tipos de dados)
  3. Início
  4. Entrada de dados
  5. Bloco de comandos (processamento)
  6. Saída de dados
  7. Fim

---

## 3. Comandos de Saída (Output)
* São responsáveis por emitir resultados ou mensagens para o usuário através do monitor de vídeo ou impressora.
* **Representações:**
  * **Pseudocódigo:** utiliza-se o comando `escreva`.
  * **C++:** utiliza-se o comando `printf`.

### Especificadores de formato no `printf` (C++)
Para exibir o valor de variáveis, usam-se formatadores específicos:
* `%d`: Exibe um número inteiro.
* `%f`: Exibe um valor de ponto flutuante (decimal/real).
* `%s`: Formata o argumento como um texto (*String*).
* `\n`: Comando utilizado para pular uma linha.

---

## 4. Comandos de Entrada (Input)
* É o comando que permite ao usuário digitar dados, geralmente feito por meio do teclado.
* **Representações:**
  * **Pseudocódigo:** utiliza-se o comando `leia`.
  * **C++:** utiliza-se o comando `scanf`.
* *Exemplo de uso em C++:* `scanf("%d", &n);` (lê um número inteiro e armazena na variável `n`).

---

## 5. Estrutura Básica de um Arquivo em C++
Para que as funções de entrada e saída funcionem corretamente em C++, a estrutura do código exige alguns elementos fundamentais:

* `#include`: Diretiva que serve para incluir arquivos necessários ao funcionamento do código.
* `<stdio.h>`: Cabeçalho padrão da linguagem (*standard input output header*), responsável pelas funções básicas de entrada e saída.
* `<stdlib.h>`: Cabeçalho da biblioteca de propósito geral, com funções para alocação de memória, conversões e controle de processos.
* `int main()`: Função principal que serve como o ponto de partida obrigatório para a execução do programa.
