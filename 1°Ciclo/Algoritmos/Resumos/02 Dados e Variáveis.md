# Resumo: Tipos de Dados e Variáveis

## 1. Visão Geral e Objetivos
* Este material explora os conceitos fundamentais sobre armazenamento de dados na memória.
* **Objetivos principais:**
  * Tipos de dados básicos e suas representações em C++.
  * Definição e uso de Variáveis e Constantes.
  * Operadores aritméticos e suas prioridades.
  * Exercícios de fixação e boas práticas.

---

## 2. Tipos de Dados Primitivos
Os tipos de dados são categorias que definem a natureza da informação a ser armazenada. São divididos em três grupos principais: **Numéricos**, **Texto (Literal)** e **Lógicos**.

### A. Dados Numéricos
* **Inteiros:** Números sem componentes decimais ou fracionários (positivos ou negativos). Pertencem aos conjuntos $N$ (Naturais) e $Z$ (Inteiros).
  * *Exemplos:* Idade, Quantidade, Número de filhos, CPF, CEP.
* **Reais:** Números que possuem componentes decimais ou fracionários (positivos ou negativos).
  * *Exemplos:* Salário, Impostos, Preço de Venda, Nota, Média.

### B. Dados de Texto (Literal / Caractere)
* Também conhecidos como alfanuméricos ou cadeias (*strings*).
* Representados por letras (A a Z), números (0 a 9) e símbolos especiais.
* Usados frequentemente em mensagens de orientação para o usuário.
* *Exemplos de Literais:* Nome, Endereço, Cidade, E-mail, "Digite o primeiro valor".
* *Caractere:* Armazena um único caractere.

### C. Dados Lógicos (Booleanos)
* Representam estados binários: **Verdadeiro** (1) ou **Falso** (0).
* *Exemplos de representação:* `.F.`, `.Falso.`, `.V.`, `.Verdadeiro.`, `.S.` (Sim), `.N.` (Não).

---

## 3. Tipos de Dados: Pseudocódigo vs. C++ (Resumo)

| Pseudocódigo | Linguagem C++ |
| :--- | :--- |
| `inteiro` | `int` |
| `real` | `float` |
| `literal` | `char` |
| `logico` | `bool` |

---

## 4. Variáveis
* **Definição:** São espaços de memória alocados para armazenar informações temporárias durante a execução do programa.
* **Declaração:** Toda variável deve ser declarada (definir nome e tipo) antes do uso. Várias variáveis do mesmo tipo podem ser declaradas na mesma linha, separadas por vírgula.
  * *Exemplo:* `N1, N2, N3: inteiro`

### Regras de Nomenclatura para Variáveis:
1. O primeiro caractere deve ser obrigatoriamente uma **letra**.
2. Não pode haver espaços em branco. Para nomes compostos, usa-se o sublinhado (`_`). *Exemplo: `nome_cliente`*.
3. Não utilizar palavras reservadas do sistema (ex: `leia`, `escreva`, `inicio`).
4. Não utilizar caracteres especiais, símbolos (como `?`, `/`, `:`, `#`, `@`) ou acentos.

*Exemplo de Declaração:*
```portugol
var
   nome, endereco : literal
   idade: inteiro
   salario: real
   tem_filhos : logico
```

---

## 5. Constantes
* **Definição:** São valores fixos, estáveis e invariáveis ao longo da execução do programa.
* *Exemplos:* O valor de $\pi$ (3.14159265) ou um valor fixado no código como `valor = 5.25`.

---

## 6. Expressões e Operadores

### A. O que são?
* **Expressão:** Combinação de variáveis, constantes e operadores que resulta em um valor final (Ex: $9 + 5$).
* **Operadores:** Elementos funcionais que atuam sobre os valores (operandos) produzindo um resultado.

### B. Classificação dos Operadores
* **Unários:** Atuam sobre apenas um operando (Ex: inversão de sinal numérico).
* **Binários:** Atuam sobre dois operandos (Ex: cálculos matemáticos clássicos).

### C. Operadores Aritméticos
Organizados por ordem de **prioridade matemática** (para alterar a prioridade, usa-se os parênteses `()`):

| Operador | Descrição | Tipo |
| :---: | :--- | :--- |
| `+` | Manutenção de sinal | Unário |
| `-` | Inversão de sinal | Unário |
| `<-` ou `=` | Atribuição | Binário |
| `**` ou `^` | Exponenciação | Binário |
| `(1/n)` | Radiciação | Binário |
| `/` | Divisão | Binário |
| `*` | Multiplicação | Binário |
| `+` | Adição | Binário |
| `-` | Subtração | Binário |

### D. Operador de Atribuição
* Usado para armazenar um valor em uma variável.
* Em **Pseudocódigo:** É representada pela seta `<-` (Ex: `nome <- "Maria"` ou `Resultado <- (N1 + N2)/2`).
* Em **C++:** É representado pelo sinal de igual `=` .

---

## 7. Exercício Prático
* **Problema:** Realizar a multiplicação de dois números inteiros, atribuir o resultado a `R` e exibir o valor.

**Solução em Pseudocódigo:**
```portugol
algoritmo "MULTIPLICA"
Var
   n1, n2, R: inteiro
inicio
   escreval ("Digite o primeiro valor")
   leia (n1)
   escreval ("Digite o segundo valor")
   leia (n2)
   R <- n1 * n2
   escreval ("Resultado", R)
Fim
```
