#include <iostream>
#include <iomanip> //bibioteca pra formatar as saídas
using namespace std;
int main()
{
    double salario, imposto;

    cout << "\n Digite o valor do salário:";
    cin >> salario;

    cout << fixed << setprecision(2); //comando pra configurar o terminal pra sempre duas casas decimais

    if (salario <= 20000) {
        imposto = 0.0;
        cout << "\n Você está isento do imposto de renda." << endl;
    } else if (salario > 20000 && salario <= 50000) {
        imposto = salario * 0.10;
        cout << "\n Você deve pagar 10% de imposto de renda. " << endl;
        cout << "\n Valor do imposto: R$" << imposto << endl; 
    } else {
        imposto = salario * 0.20;
        cout << "\n Você deve pagar 20% de imposto de renda" << endl;
        cout << "\n Valor do imposto: R$" << imposto << endl;
    }

    return 0;
}