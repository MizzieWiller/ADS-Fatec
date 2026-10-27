#include <iostream> 
#include <cstdlib>

using namespace std;

int posicao, continua;    

struct TbFicha  
{
  int codigo;
  char nome[40];
  char bairro[40];
  char cidade[60];     
  char telefone[15]; // Aumentado ligeiramente para acomodar formatações
  char cpf[15];      // Novo campo para CPF (ex: 123.456.789-00)
  char rg[15];       // Novo campo para RG (ex: 12.345.678-9)
};

struct TbFicha ficha[10];

void insereCliente()
{
    cout << "Informe um codigo para o cliente: ";
    cin >> ficha[posicao].codigo;
    
    // Limpa o '\n' deixado pelo 'cin' para que os próximos getline funcionem
    cin.ignore(); 
    
    cout << "Informe o nome do cliente: ";
    cin.getline(ficha[posicao].nome, 40);
    
    cout << "Informe o bairro do cliente: ";
    cin.getline(ficha[posicao].bairro, 40);
    
    cout << "Informe a cidade do cliente: ";
    cin.getline(ficha[posicao].cidade, 60);
    
    cout << "Informe o telefone: ";
    cin.getline(ficha[posicao].telefone, 15);
    
    cout << "Informe o CPF: ";
    cin.getline(ficha[posicao].cpf, 15);
    
    cout << "Informe o RG: ";
    cin.getline(ficha[posicao].rg, 15);
}

void exibeCliente()
{
  cout << "\n--- Informacoes do registo na posicao " << posicao << " ---\n";
  cout << "Codigo: " << ficha[posicao].codigo << "\n";
  cout << "Nome: " << ficha[posicao].nome << "\n";
  cout << "Bairro: " << ficha[posicao].bairro << "\n";
  cout << "Cidade: " << ficha[posicao].cidade << "\n";
  cout << "Telefone: " << ficha[posicao].telefone << "\n";
  cout << "CPF: " << ficha[posicao].cpf << "\n";
  cout << "RG: " << ficha[posicao].rg << "\n";
  cout << "------------------------------------------\n";
}

int main() 
{
  do
  {
    cout << "Informe uma posicao (0 a 9) para guardar o registo: ";
    cin >> posicao;       
    
    // Validação para evitar gravar fora dos limites do vetor
    if (posicao >= 0 && posicao < 10) {
        insereCliente();
    } else {
        cout << "Posicao invalida! Por favor, utilize um valor entre 0 e 9.\n";
    }
    
    cout << "Informe 1 para continuar ou 0 para sair: ";
    cin >> continua;    
    
    system("cls");    
  }
  while (continua == 1);   
  
  system("cls");
  cout << "Informe a posicao para busca (0 a 9): \n";
  cin >> posicao;       
  
  if (posicao >= 0 && posicao < 10) {
      exibeCliente();
  } else {
      cout << "Posicao invalida!\n";
  }
  
  system("pause");
  
  return 0;
}
