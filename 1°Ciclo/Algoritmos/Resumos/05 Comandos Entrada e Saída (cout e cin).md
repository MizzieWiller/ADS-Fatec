# Resumo: Comandos de Entrada e Saída (cin e cout)

## 1. Bibliotecas e Configurações Iniciais em C++
Para utilizar os comandos `cin` e `cout`, é necessário configurar o cabeçalho do programa com as seguintes diretivas:
* `#include`: Diretiva que serve para incluir os arquivos necessários ao funcionamento do código.
* `<iostream>`: Biblioteca que declara objetos responsáveis por controlar a leitura e a gravação nos fluxos padrão.
* `using namespace std;`: Um `namespace` permite a definição de estruturas, classes, funções e constantes vinculadas a ele. O `std` é o espaço de nomes padrão da linguagem C++.

---

## 2. Comando de Saída: `cout`
* O `cout` é utilizado para exibir informações na tela.
* Os argumentos passados para o `cout` podem ser uma variável, uma expressão ou uma *string* (uma série de caracteres delimitada por aspas).
* **Operadores e Complementos:**
  * `<<` (Operador de inserção): Significa que bytes estão sendo enviados a um objeto de fluxo de saída.
  * `endl`: Valor que representa a mudança (quebra) de linha.

* **Exemplo de uso básico:**
```cpp
cout << "Boa tarde!" << endl;
```

* **Exemplo com variáveis:**
```cpp
int pera = 3;
float peso = 2.5;
cout << "As " << pera << " peras " << "pesam " << peso << " quilos " << endl;
```

---

## 3. Comando de Entrada: `cin`
* O `cin` é utilizado para ler dados fornecidos pelo usuário via teclado e armazená-los em variáveis.
* **Operador:**
  * `>>` (Operador de extração): Significa que bytes estão sendo obtidos de um objeto de fluxo de entrada.

* **Exemplo de uso básico:**
```cpp
int idade;
cout << "Informe sua idade: ";
cin >> idade;
```

### Leitura de Múltiplas Variáveis
* O comando `cin` permite ler múltiplas variáveis em uma única instrução (ex: `cin >> dia >> mes >> ano;`).
* Os valores inseridos pelo usuário podem ser separados por espaços em branco, tabulação ou mudança de linha (ENTER).
* Os espaços em branco digitados são ignorados pelo comando `cin`.

* **Exemplo de múltiplas variáveis:**
```cpp
int dia, mes, ano;
cout << "Entre com a data do seu aniversario (dd mm aa): ";
cin >> dia >> mes >> ano;
cout << "Voce nasceu em " << dia << "/" << mes << "/" << ano << endl;
```
