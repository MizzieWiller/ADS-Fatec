# Resumo: Teste de Mesa

## 1. Conceito e Objetivo
* O Teste de Mesa é um método utilizado para acompanhar a execução de um algoritmo passo a passo, instrução por instrução.
* Seu objetivo principal é localizar erros e confirmar se a lógica estruturada no algoritmo está correta.

## 2. Estrutura e Regras de Preenchimento
* O teste é realizado por meio de uma tabela, onde cada linha registra o número da instrução executada e o conteúdo armazenado nas variáveis.
* **Entrada de dados (Leitura):** Nas linhas onde uma variável recebe um valor externo (lida), o valor deve ser colocado entre colchetes `[ ]`.
* **Saída de dados (Escrita):** Nas linhas onde o conteúdo de uma variável é exibido para o usuário (escrito), o valor deve ser colocado entre chaves `{ }`.
* É possível adicionar uma última coluna na tabela para descrever ou explicar a ação que está ocorrendo na instrução.

---

## 3. Exemplo Prático 1: Conversão de Temperatura
* **Problema:** Receber a temperatura em graus Celsius e convertê-la para Fahrenheit através da fórmula $F=(1.8*Celsius)+32$.

**Algoritmo:**
```portugol
Programa "Temperatura"
var
   celsius, fahrenheit: real
inicio
1. escreval ("Informe a temperatura em graus celsius")
2. leia(celsius)
3. fahrenheit <- (1.8 * celsius) + 32
4. escreval("Temperatura em graus fahrenheit:", fahrenheit)
fim
```

**Tabela do Teste de Mesa:**

| Linha | celsius | fahrenheit |
| :---: | :--- | :--- |
| 1 | | |
| 2 | [30] | |
| 3 | 30 | 86 |
| 4 | 30 | {86} |


---

## 4. Exemplo Prático 2: Prestação em Atraso
* **Problema:** Efetuar o cálculo do valor de uma prestação atrasada utilizando a fórmula $prestacao=valor+(valor*(taxa/100)*tempo)$.

**Algoritmo:**
```portugol
Programa CALCULA_PREST
var
   prest, valor, taxa: real
   tempo: inteiro
início
1. escreva ("Digite o valor da prestação")
2. leia (valor)
3. escreva ("Digite a taxa")
4. leia (taxa)
5. escreva ("Digite o tempo")
6. leia (tempo)
7. prest <- valor + (valor * (taxa / 100) * tempo)
8. escreva (prest)
fim
```

**Tabela do Teste de Mesa:**

| linha | valor | taxa | tempo | prestacao |
| :---: | :--- | :--- | :--- | :--- |
| 2 | [100] | | | |
| 4 | 100 | [10] | | |
| 6 | 100 | 10 | [3] | |
| 7 | 100 | 10 | 3 | 130 |
| 8 | 100 | 10 | 3 | {130} |
