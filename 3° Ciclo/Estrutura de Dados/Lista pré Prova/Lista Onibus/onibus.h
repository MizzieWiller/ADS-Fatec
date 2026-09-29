#pragma once
#include <iostream>
#include <vector>

using namespace std;

// Função para exibir a ocupação (opção 2)
void exibirOcupacao(const vector<vector<int>>& matriz, int fileiras, int colunas, int lugares, int ocupados, float valorPassagem) {
    cout << "\n===== OCUPACAO =====\n";
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            int numeroLugar = i * colunas + j;
            if (numeroLugar < lugares) {
                cout << matriz[i][j] << " ";
            }
        }
        cout << "\n";
    }

    int desocupados = lugares - ocupados;
    float percentual = ((float)ocupados / lugares) * 100;
    float total = ocupados * valorPassagem;

    cout << "\nNumero de lugares ocupados: " << ocupados << "\n";
    cout << "Numero de lugares desocupados: " << desocupados << "\n";
    
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << "Percentual de ocupacao: " << percentual << "%\n";
    
    cout.precision(2);
    cout << "Valor total vendido em passagens: " << total << " reais\n";
    cout.unsetf(ios::fixed);
}

// Função para vender passagem (opção 1)
void venderPassagem(vector<vector<int>>& matriz, int fileiras, int colunas, int lugares, int& ocupados, float valorPassagem) {
    int fileira, poltrona;

    cout << "\nDigite a fileira: ";
    cin >> fileira;

    cout << "Digite a poltrona: ";
    cin >> poltrona;

    if (fileira < 1 || fileira > fileiras || poltrona < 1 || poltrona > colunas) {
        cout << "Lugar invalido!\n";
    } 
    else if (matriz[fileira - 1][poltrona - 1] == 8) {
        cout << "Lugar indisponivel! Ele ja esta ocupado.\n";
    } 
    else {
        matriz[fileira - 1][poltrona - 1] = 8;
        ocupados++; // Altera diretamente na memória por causa do & (referência)
        
        cout << "Passagem vendida com sucesso!\n";
        
        // Aproveitamos a função que já existe para imprimir o painel
        exibirOcupacao(matriz, fileiras, colunas, lugares, ocupados, valorPassagem);
    }
}

// Função para verificar se o ônibus pode partir (opção 3)
void verificarPartida(int ocupados, float minimoPassagens) {
    cout << "\nPassagens vendidas: " << ocupados << "\n";
    
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << "Minimo necessario: " << minimoPassagens << "\n";

    if (ocupados >= minimoPassagens) {
        cout << "O onibus pode partir!\n";
    } 
    else {
        cout << "O onibus ainda nao pode partir.\n";
        cout << "Faltam " << (minimoPassagens - ocupados) << " passagens.\n";
    }
    cout.unsetf(ios::fixed);
}