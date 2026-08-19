#include <iostream>
//#include <locale.h>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "Portuguese");
	
	int diaSemana;
	
	cout << "\n Digite o número do dia da Semana (1-7): ";
	cin >> diaSemana;
	
	switch (diaSemana) {
		case 1:
			cout << "\ Domingo" << endl;
			break;
		case 2:
			cout << "\n Segunda-Feira" << endl;
			break;
		case 3:
			cout << "\n Terça-Feira" << endl;
			break;
		case 4:
			cout << "\n Quarta-Feira" << endl;
			break;		
		case 5:
			cout << "\nQuinta-Feira" << endl;
			break;
		case 6:
			cout << "\n Sexta-Feira" << endl;
			break;
		case 7:
			cout << "\n Sábado" << endl;
			break;
		default:
			cout << "\n Dia Inválido!" << endl;			
	}
	
	return 0;
		
}
