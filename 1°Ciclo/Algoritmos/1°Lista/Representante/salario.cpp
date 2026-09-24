#include <iostream>

int main()
{

    double salario, salarioReajuste;

    std::cout << "Digite o seu salario: "; 
    std::cin >> salario;

    if (salario < 1500) {
        salarioReajuste = salario + (salario * 0.15);
    } else if (salario < 3000){
            salarioReajuste = salario + (salario * 0.10);
        } else {
            salarioReajuste = salario + (salario * 0.05);
        }

    std::cout << "O reajuste foi de: " << salarioReajuste;

    return 0;

}