#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura do produto
struct TbProduto {
    int codproduto;
    string nome;
    float valor;
    int qtd;
};

// Função que recebe a referência de um produto específico para preenchê-lo
void finsere(TbProduto &p) {
    cout << "Informe o codigo do produto: ";
    cin >> p.codproduto;
    
    // Limpa o buffer do teclado antes de ler a string
    cin.ignore(); 
    
    cout << "Informe o nome do produto: ";
    getline(cin, p.nome);
    
    cout << "Informe o valor do produto (R$): ";
    cin >> p.valor;
    
    cout << "Informe a quantidade em estoque: ";
    cin >> p.qtd;
}

// Função que recebe um produto como leitura (constante) para exibi-lo
void fexibe(const TbProduto &p) {
    cout << "\n--- Detalhes do Produto ---\n";
    cout << "Codigo: " << p.codproduto << "\n";
    cout << "Nome: " << p.nome << "\n";
    cout << "Valor: R$ " << p.valor << "\n";
    cout << "Estoque: " << p.qtd << " unidades\n";
    cout << "---------------------------\n";
}

int main() {
    // Declaração do vetor de produtos localmente (melhor prática do que global)
    TbProduto estoque[10];
    int opcao, posicao;

    do {
        cout << "\n=== SISTEMA DE ESTOQUE ===\n";
        cout << "1 - Inserir Produto\n";
        cout << "2 - Exibir Produto\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Informe a posicao do vetor (0 a 9) para salvar: ";
                cin >> posicao;
                
                if (posicao >= 0 && posicao < 10) {
                    // Passa apenas o produto daquela posição para a função
                    finsere(estoque[posicao]);
                    cout << "Produto cadastrado com sucesso!\n";
                } else {
                    cout << "Erro: Posicao invalida. Escolha entre 0 e 9.\n";
                }
                break;
                
            case 2:
                cout << "Informe a posicao do vetor (0 a 9) para buscar: ";
                cin >> posicao;
                
                if (posicao >= 0 && posicao < 10) {
                    fexibe(estoque[posicao]);
                } else {
                    cout << "Erro: Posicao invalida.\n";
                }
                break;
                
            case 0:
                cout << "Encerrando o sistema...\n";
                break;
                
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
