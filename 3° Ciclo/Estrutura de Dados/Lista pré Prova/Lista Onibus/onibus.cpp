#include <iostream>
#include <vector>
#include "onibus.h" 

using namespace std;

int main() {
    int lugares, prioridade;
    float valorPassagem, minimoPassagens;

    cout << "Quantidade total de lugares: ";
    cin >> lugares;

    cout << "Quantidade de lugares para prioridade: ";
    cin >> prioridade;

    cout << "Valor da passagem: ";
    cin >> valorPassagem;

    cout << "Quantidade minima de passagens para o onibus partir: ";
    cin >> minimoPassagens;

    int colunas = 4;
    int fileiras = (lugares + colunas - 1) / colunas;

    vector<vector<int>> matriz(fileiras, vector<int>(colunas, 0));

    int ocupados = 0;
    int opcao;

    do {
        cout << "\n===== CONTROLE DO ONIBUS =====\n";
        cout << "1 - Vender passagem\n";
        cout << "2 - Exibir ocupacao\n";
        cout << "3 - Verificar partida\n";
        cout << "0 - Encerrar\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            venderPassagem(matriz, fileiras, colunas, lugares, ocupados, valorPassagem);
        } 
        else if (opcao == 2) {
            exibirOcupacao(matriz, fileiras, colunas, lugares, ocupados, valorPassagem);
        } 
        else if (opcao == 3) {
            verificarPartida(ocupados, minimoPassagens);
        } 
        else if (opcao != 0) {
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    cout << "\nSistema encerrado.\n";
    return 0;
}