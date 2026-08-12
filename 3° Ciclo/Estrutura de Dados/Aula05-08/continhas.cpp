#include <iostream>
using namespace std;
int main()
{

	double A, B, soma, subtracao, divisao, multi;
	
	cout << "\n informe o valor de A:";
	cin >> A;
	cout << "\n informe o valor de B:";
	cin >> B;
	
	soma = A + B;
	subtracao = A -B;
	multi = A * B;
	divisao = A/B;
	
	cout << "\n a soma deu um total de:" << soma;
	cout << "\n a subtracao deu um total de:" << subtracao;
	cout << "\n a multiplicacao deu um total de:" << multi;
	cout << "\n a divisao deu um total de:" << divisao;

}
