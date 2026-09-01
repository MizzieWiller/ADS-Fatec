# Resumo: Algoritmos e Lógica de Programação

## 1. Visão Geral e Objetivos
* O material apresenta os conceitos fundamentais sobre lógica, algoritmos e suas formas de representação.
* **Objetivos principais:**
  * Introdução ao conceito de lógica.
  * Definição e aplicação de algoritmos.
  * Apresentação dos três principais tipos de representação: **Descrição Narrativa**, **Pseudocódigo** e **Diagrama de Bloco**.
  * Demonstração de exemplos práticos e exercícios.

---

## 2. Conceito de Lógica
* **Lógica:** É a forma de organizar os pensamentos e demonstrar raciocínio de maneira correta.
* Para pensar, falar ou escrever corretamente, é necessário colocar as ideias em ordem lógica.
* **Definição formal:** Ciência que estuda as leis e os critérios de validade que regem o pensamento e a demonstração (princípios formais do raciocínio).

---

## 3. Conceito de Algoritmo
* **Origem da palavra:** Deriva dos termos em latim *Algorismos* ou *Algorithmos*.
* **Definições:**
  * Sequência lógica de passos que levam à solução de um dado problema.
  * Sequência de passos ordenada visando atingir um objetivo bem definido.
  * Conjunto de regras formais, sequenciais e bem definidas para solucionar um problema e transformá-lo em um programa executável por computador.
* **Exemplos do cotidiano:**
  * Trocar um pneu.
  * Preparar uma receita culinária.
  * Sacar dinheiro no caixa eletrônico.
  * Somar três números.
  * Calcular a conta de energia elétrica.

---

## 4. Etapas do Processamento em Computadores
O desenvolvimento de um algoritmo divide-se em **três fases fundamentais**:

1. **Entrada:** Recebimento dos dados necessários para realizar a tarefa.
2. **Processamento:** Manipulação e cálculos realizados sobre os dados de entrada para gerar o resultado.
3. **Saída:** Exibição dos resultados obtidos para o usuário.

> **Exemplo Prático: Calcular a média de dois números**
> * **Problema:** Obter dois números, calcular a média e exibir o resultado.
> * **Entrada:** Dois números.
> * **Processamento:** Cálculo da média aritmética.
> * **Saída:** O valor da média obtida.

---

## 5. Etapas para Construção de um Algoritmo
Para resolver problemas com algoritmos, deve-se seguir o passo a passo:
1. Ler atentamente o problema a ser resolvido.
2. Identificar e definir os dados de **entrada**.
3. Definir o **processamento** (cálculos e regras).
4. Definir os dados de **saída**.
5. Construir o algoritmo.
6. Testar o algoritmo utilizando simulações (teste de mesa).

---

## 6. Desafio Prático: Torre de Hanói
* **Problema:** Mover 3 discos de tamanhos diferentes dispostos na haste `a` para a haste `b`, utilizando a haste `c` como suporte, respeitando a regra de que um disco maior nunca pode ficar sobre um menor.
* **Resolução apresentada:**
  1. Mover disco 1 para a haste `b`
  2. Mover disco 2 para a haste `c`
  3. Mover disco 1 para a haste `c`
  4. Mover disco 3 para a haste `b`
  5. Mover disco 1 para a haste `a`
  6. Mover disco 2 para a haste `b`
  7. Mover disco 1 para a haste `b`

---

## 7. Tipos de Representação de Algoritmos

### A. Descrição Narrativa
* Expressa o algoritmo diretamente em **linguagem natural** (português falado).
* **Exemplo (Trocar uma Lâmpada):** Pegar a lâmpada nova -> Pegar a escada -> Posicionar a escada -> Subir a escada -> Retirar a lâmpada queimada -> Colocar a lâmpada nova -> Descer da escada -> Testar no interruptor -> Guardar a escada -> Descartar a lâmpada velha.

---

### B. Pseudocódigo (Portugol / Português Estruturado / LPP)
* Linguagem intermediária entre a linguagem natural e uma linguagem de programação.
* Utiliza estruturas fixas com palavras-chave.
* **Palavras Reservadas Principais:**
  * `inicio`: Marca o começo do bloco do programa.
  * `escreva`: Exibe mensagens ou resultados na tela.
  * `leia`: Captura a entrada de dados digitados.
  * `fim`: Finaliza o bloco do programa.

* **Exemplo (Soma de dois números em Pseudocódigo):**
```portugol
Programa SOMA_NUMEROS
var
   x, n1, n2: inteiro
inicio
   escreva ("Digite o primeiro número")
   leia (n1)
   escreva ("Digite o segundo número")
   leia (n2)
   x <- n1 + n2
   escreva ("Resultado da soma: ", x)
fim
```

---

### C. Diagrama de Bloco (Fluxograma)
* Representação **gráfica** que utiliza formas geométricas padronizadas para indicar ações e fluxo de decisões.
* **Vantagens:** Estabelece a sequência visual clara e foca diretamente nas ações.
* **Regras:** Símbolos identificados por rótulos, conectados por setas indicando o fluxo (orientação principal: de cima para baixo).

| Símbolo Graphic / Nome | Significado | Descrição |
| :--- | :--- | :--- |
| **Terminal** (*Terminator*) | Início / Fim | Indica o ponto inicial e final do fluxo. |
| **Entrada Manual** (*Manual Input*) | Entrada de Dados | Representa a digitação de dados pelo usuário (ex: teclado). |
| **Processamento** (*Process*) | Operação / Cálculo | Representa a execução de cálculos e atribuição de valores. |
| **Exibição** (*Display*) | Saída de Dados | Exibição gráfica dos resultados na tela/monitor. |
| **Linha de Fluxo** (*Line*) | Conexão | Seta que indica a direção e o fluxo das operações. |

---

## 8. Programas de Computador e Próximos Passos
* **Programas de Computador:** São algoritmos traduzidos/codificados em uma linguagem de programação específica (como Java, Python, C#, VB, etc.).
* **Atividade / Pesquisa final:**
  * *Questão proposta:* "O que é uma variável em Linguagem de Programação?"