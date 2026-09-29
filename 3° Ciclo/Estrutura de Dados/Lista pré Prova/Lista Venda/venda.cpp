#include <iostream>
#include "venda.h"

using namespace std;

int main() {
    SistemaVendas loja;
    int opcao;

    loja.cadastrarProdutos();

    do {
        cout << "\n1 - Exibir produtos\n";
        cout << "2 - Buscar produto\n";
        cout << "3 - Realizar compra\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            loja.exibirProdutos();
        } 
        else if (opcao == 2) {
            loja.buscarProduto();
        } 
        else if (opcao == 3) {
            loja.realizarVendas();
            loja.exibirResumoCompra();
            break; 
        }

    } while (opcao != 0);

    return 0;
}