#include <iostream>
#include <string>

int main(){

    std::string nome;
    double horasAcessadas, horasPermitidas;

    std::cout << "Digite o seu nome:";
    std::cin >> nome;
    std::cout << "Digite o numero de horas acessadas:";
    std::cin >> horasAcessadas;
    std::cout << "Digite o numero de horas permitidas:";
    std::cin >> horasPermitidas;

    if (horasAcessadas > horasPermitidas){
        std::cout << "Você ultrapassou o limite permitido.";
    } else if (horasAcessadas < horasPermitidas){
        std::cout << "Você está abaixo do limite.";
    } else {
        std::cout << "Você está no limite.";
    }

}