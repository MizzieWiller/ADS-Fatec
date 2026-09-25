#include <iostream>

// variavéis

int totalLugares = 36;
int lugaresReservados = 4;
float valorPassagem = 16.00;
float valorMinimo = 12;

    /*
    int totalLugares;
    int lugaresReservados;
    float valorPassagem;
    float valorMinimo;

    std::cout << "Digite o numero total de luagares disponiveis: ";
    std::cin >> totalLugares;
    std::cout << "Digite o numero de lugares reservados à pessoas com prioridade (idosos, enquadrados por lei)";
    std::cin >> lugaresReservados;
    std::cout << "Digite o valor da passagem: ";
    std::cin >> valorPassagem;
    std::cout << "Valor minimo de passagens vendidas para partida: ";
    std::cin >> valorMinimo;
    */

    // decalrando a matriz para o onibus
int onibus[9][4];

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 4; j++){            
        } onibus[i][j] = 0;
    }

    int linhaEscolhida;
    int colunaEscolhida;

    std::cout << "--- Compra da Passagem ---"
    std::cout << "Escolha uma fileira (0 a 8): ";
    std::cin >> linhaEscolhida;
    std::cout << "Escolha uma poltrona (0 a 3): ";
    std::cin >> colunaEscolhida;

    onibus[linhaEscolhida][colunaEscolhida] = 1;


    
    

