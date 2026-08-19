#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double A, B, C;
	
	cout << "\n Insira o valor do lado A";
	cin >> A;
	cout << "\n Insira o valor do lado B";
	cin >> B;
	cout << "\n Insira o valor do lado C";
	cin >> C;

	cout << (A == B && B == C ? "Equilatero" : ( A != B && A != C && B != C ? "Escaleno" : "Isosceles" )) << endl;
	
	return 0;	
		
}

