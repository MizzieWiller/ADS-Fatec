#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Produto {
    int codigo;
    string nome;
    double valor;
    int estoque;
};

struct ItemVenda {
    int codigoProduto;
    int quantidade;
};

class SistemaVendas {
private:
    vector<Produto> produtos;
    vector<ItemVenda> carrinho;

    int encontrarProduto(int codigo) const {
        for (size_t i = 0; i < produtos.size(); i++) {
            if (produtos[i].codigo == codigo) {
                return i;
            }
        }
        return -1;
    }

public:
    void cadastrarProdutos() {
        int n;
        cout << "Quantos produtos deseja cadastrar? ";
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            Produto p;
            cout << "\nCodigo: "; 
            cin >> p.codigo;
            
            cout << "Nome: "; 
            cin.ignore();
            getline(cin, p.nome);
            
            cout << "Valor (R$): "; 
            cin >> p.valor;
            
            cout << "Estoque: "; 
            cin >> p.estoque;
            
            produtos.push_back(p);
        }
    }

    void exibirProdutos() const {
        cout << "\nCodigo\tProduto\t\tValor\tEstoque\n";
        for (size_t i = 0; i < produtos.size(); i++) {
            cout << produtos[i].codigo << "\t" 
                 << produtos[i].nome << "\t\t" 
                 << produtos[i].valor << "\t" 
                 << produtos[i].estoque << "\n";
        }
    }

    void buscarProduto() const {
        int codigoBuscado;
        cout << "\nDigite o codigo do produto: ";
        cin >> codigoBuscado;
        
        int indice = encontrarProduto(codigoBuscado);
        
        if (indice != -1) {
            cout << produtos[indice].codigo << " | " 
                 << produtos[indice].nome << " | R$ " 
                 << produtos[indice].valor << " | Estoque: " 
                 << produtos[indice].estoque << "\n";
        } else {
            cout << "Codigo nao cadastrado!\n";
        }
    }

    void realizarVendas() {
        char continuar;
        
        do {
            int codigoCompra;
            cout << "\nCodigo do produto para compra: ";
            cin >> codigoCompra;
            
            int indice = encontrarProduto(codigoCompra);
            
            if (indice != -1) {
                int qtdDesejada;
                cout << "Quantidade: ";
                cin >> qtdDesejada;
                
                if (qtdDesejada <= produtos[indice].estoque) {
                    produtos[indice].estoque -= qtdDesejada;
                    
                    ItemVenda novoItem = {codigoCompra, qtdDesejada};
                    carrinho.push_back(novoItem);
                    cout << "Produto adicionado ao carrinho!\n";
                } else {
                    cout << "A quantidade nao existe em estoque.\n";
                }
            } else {
                cout << "Produto nao encontrado!\n";
            }
            
            cout << "\nDeseja inserir mais produtos? (S/N): ";
            cin >> continuar;
            
        } while (continuar == 's' || continuar == 'S');
    }

    void exibirResumoCompra() const {
        if (carrinho.empty()) return;

        double totalCompra = 0;
        
        cout << "\nProduto\t\tQtd\tSubTotal\n";
        
        for (size_t i = 0; i < carrinho.size(); i++) {
            int idxProduto = encontrarProduto(carrinho[i].codigoProduto);
            
            if (idxProduto != -1) {
                double subTotal = carrinho[i].quantidade * produtos[idxProduto].valor;
                totalCompra += subTotal;
                
                cout << produtos[idxProduto].nome << "\t\t" 
                     << carrinho[i].quantidade << "\t" 
                     << subTotal << "\n";
            }
        }
        cout << "Total da compra: " << totalCompra << " R$\n";
    }
};