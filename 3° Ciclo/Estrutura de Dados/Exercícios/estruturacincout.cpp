#include <iostream> 
#include <cstdlib> // Para o uso do system()

using namespace std;

int posicao, continua;    

struct TbFicha  
{
  int codigo;
  char nome[40];
  char bairro[40];
  char cidade[60];     
  char telefone[10];
};

// acima defini uma tipo estrutura chamada TbCliente
struct TbFicha ficha[10];
// criei uma matriz de estrutura, assim em cada posicao alimento os 4 atributos

void insereCliente()
{
    cout << "Informe um codigo para o cliente: ";
    cin >> ficha[posicao].codigo;
    
    // Limpa o '\n' deixado pelo 'cin' para que o getline funcione corretamente
    cin.ignore(); 
    
    cout << "Informe o nome do cliente: ";
    cin.getline(ficha[posicao].nome, 40);
    
    cout << "Informe o bairro do cliente: ";
    cin >> ficha[posicao].bairro;
    
    cout << "Informe a cidade do cliente: ";
    cin >> ficha[posicao].cidade;
    
    cout << "Informe o telefone: ";
    cin >> ficha[posicao].telefone;
}

void exibeCliente()
{
  cout << "Na posicao digitada estao as informacoes: \n";
  cout << "Codigo " << ficha[posicao].codigo << "\n";
  cout << "Nome " << ficha[posicao].nome << "\n";
  cout << "Bairro " << ficha[posicao].bairro << "\n";
  cout << "Cidade " << ficha[posicao].cidade << "\n";
  cout << "O Telefone eh: " << ficha[posicao].telefone << "\n";
}

int main() 
{
  // char nome[10]; // Variável não utilizada no original
  do
  {
    cout << "Informe uma posicao para guardar o registro: ";
    cin >> posicao;       
    
    insereCliente();
    
    cout << "Informe 1 para continuar: ";
    cin >> continua;    
    system("cls");    
  }
  while (continua == 1);   
  
  system("cls");
  cout << "Informe a posicao para busca \n";
  cin >> posicao;       
  exibeCliente();
  system("pause");
  
  return 0;
}
