#include <iostream>
using namespace std;
int main()
{
    int numero;

    cout << "\n Informe o numero:";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "\n O número" << numero "é par." endl;
    } else {
        cout << "\n o número" << numero "é impar." endl;
    }

    return 0;
    
}