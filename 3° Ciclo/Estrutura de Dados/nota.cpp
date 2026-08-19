#include <iostream>
using namespace std;
int main()
{
	int nota;
	
	cout << "\n Digite sua Nota: (1-10)";
	cin >> nota;
	
	if (nota >= 1 && nota <= 10) {
		if (nota >= 6) {
			cout << "\n Tá aprovado parceiro!" << endl;				
		} else {
			cout << "\n Tá reprovado rapa hahahaha!" << endl; 
		}
	}
	
	return 0;
 } 
