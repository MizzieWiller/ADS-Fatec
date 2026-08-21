#include <iostream>
#include <string>
#include <cmath> //não é necesaria nesse pois são "contas" simples
using namespace std;
int main()
{
	double A, B, C;
	string tipoTriangulo; //vai guardar a resposta na memoria (mais necessaria se tivesse outra parte do code que usasse o resultado)	
	
	cout << "\n Insira o valor do lado A";
	cin >> A;
	cout << "\n Insira o valor do lado B";
	cin >> B;
	cout << "\n Insira o valor do lado C";
	cin >> C;

	cout << (A == B && B == C ? "\n Equilatero" : ( A != B && A != C && B != C ? "\n Escaleno" : "\n Isosceles" )) << endl;
	
	return 0;	
		
}