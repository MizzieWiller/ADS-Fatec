#include <iostream>
#include <string> // biblioteca para ler caracteres que possuam espaços.
using namespace std;
int main()
{
	
	string descricao;
	int quantidade;
	float valorReais, taxaEuro, totalReais, totalEuros;
	
	cout << "\n Digite a descrição do Produto" << endl;
	getline(cin, descricao); //Lê a frase inteira, mesmo que haja espaço.
	cout << "\n Digite a quantidade:" << endl;
	cin >> quantidade;
	cout << "\n Digite o valor em Reais" << endl;
	cin >> valorReais;
	cout << "\n Digite o valor da Taxa do Euro:" << endl;
	cin >> taxaEuro;
	
	totalReais = quantidade * valorReais;
	totalEuros = totalReais / taxaEuro;
	
	cout << "\n Produto: " << descricao << endl;
	cout << "\n Total em Reais: R$ " << totalReais << endl;
	cout << "\n Total em Euros: EUR " << totalEuros << endl;

return 0;	
		
}	
