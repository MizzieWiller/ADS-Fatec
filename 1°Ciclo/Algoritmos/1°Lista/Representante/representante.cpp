#include <iostream>
#include <string>

int main(){
    int votos1 = 0, votos2 = 0;
    std::string candidato1, candidato2;
    
    std::cout << "Digite o nome do primeiro candidato: ";
    std::cin >> candidato1;

    std::cout << "Digite o nome do segundo candidato: ";
    std::cin >> candidato2;

    std::cout << "Digite a quantidade de votos do primeiro candidato: ";
    std::cin >> votos1;

    std::cout << "Digite a quantidade de votos do segundo candidato: ";
    std::cin >> votos2;

    if (votos1 > votos2){
        std::cout << "Quem ganhou foi " << candidato1;
    } else {
        std::cout << "Quem ganhou foi " << candidato2;
  	}

    return 0;
}