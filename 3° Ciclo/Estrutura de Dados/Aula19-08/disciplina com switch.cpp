#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	locale::global(locale("Portuguese"));
	
	int disciplina;
	
	cout << "\n Digite um número que representa tua disciplina parça";
	cin >> disciplina;
	
	switch (disciplina) {
		case 1:
			cout << "\n Visão Computacional" << endl;
			break;
		case 2:
			cout << "\n Redes Neurais" << endl;
			break;
		case 3:
			cout << "\n Engenharia de Software" << endl;
			break;
		case 4:
			cout << "\n Front-End" << endl;
			break;
		case 5:
			cout << "\n Back-End" << endl;
			break;
		case 6:
			cout << "\n Banco de Dados" << endl;
			break;
		case 7:
			cout << "\n Qualidade de Dados" << endl;
			break;
		case 8:
			cout << "\n Inteligência Artificial" << endl;
			break;
		case 9:
			cout << "\n Realidade Aumentada" << endl;
			break;
		default:
			cout << "\n Não tem essa disciplina mentiroso :O " << endl;
	}
	
	return 0;
	
}
