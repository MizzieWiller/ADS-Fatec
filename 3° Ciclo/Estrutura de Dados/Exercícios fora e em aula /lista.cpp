#include <stdio.h>

int codigos[50] = {99, 45, 41};
int estoques[50] = {10, 9, 5};
char nomes[50][30] = {"Arroz", "Feijao", "Cerveja"};
float precos[50] = {12.50, 7.90, 4.90};
int total_produtos = 3;

int carrinho_indices[50], carrinho_quantidades[50], total_itens_carrinho = 0;

void inserir() {
    int quantidade_novos;
    printf("Quantos novos produtos deseja adicionar? (Digite 0 para pular): "); 
    scanf("%d", &quantidade_novos);
    
    for(int i = total_produtos; i < total_produtos + quantidade_novos; i++) {
        printf("Cod Nome Valor Estoque: ");
        scanf("%d %s %f %d", &codigos[i], nomes[i], &precos[i], &estoques[i]);
    }
    total_produtos += quantidade_novos;
}

void exibir() {
    printf("\nCod | Nome | Valor | Estoque\n");
    for(int i = 0; i < total_produtos; i++)
        printf("%d | %s | %.2f | %d\n", codigos[i], nomes[i], precos[i], estoques[i]);
}

void consultar() {
    int codigo_busca;
    printf("\nConsultar Cod: "); scanf("%d", &codigo_busca);
    for(int i = 0; i < total_produtos; i++) {
        if(codigos[i] == codigo_busca) {
            printf("Achou: %s | %.2f | %d\n", nomes[i], precos[i], estoques[i]);
            return;
        }
    }
    printf("Nao cadastrado.\n");
}

void comprar() {
    char continuar_comprando;
    do {
        int codigo_produto, quantidade_desejada, i;
        printf("\nComprar Cod: "); scanf("%d", &codigo_produto);
        
        for(i = 0; i < total_produtos; i++) {
            if(codigos[i] == codigo_produto) {
                printf("Qtd: "); scanf("%d", &quantidade_desejada);
                if(quantidade_desejada <= estoques[i]) {
                    carrinho_indices[total_itens_carrinho] = i; 
                    carrinho_quantidades[total_itens_carrinho] = quantidade_desejada;
                    total_itens_carrinho++;
                    estoques[i] -= quantidade_desejada;
                    printf("Adicionado!\n");
                } else printf("Sem estoque.\n");
                break;
            }
        }
        if(i == total_produtos) printf("Produto nao encontrado.\n");
        
        printf("Comprar mais? (s/n): "); scanf(" %c", &continuar_comprando);
    } while(continuar_comprando == 's');

    float valor_total = 0;
    printf("\nRESUMO\nNome | Qtd | SubTotal\n");
    for(int j = 0; j < total_itens_carrinho; j++) {
        int indice_produto = carrinho_indices[j];
        int quantidade = carrinho_quantidades[j];
        float subtotal = quantidade * precos[indice_produto];
        
        printf("%s | %d | %.2f\n", nomes[indice_produto], quantidade, subtotal);
        valor_total += subtotal;
    }
    printf("Total: R$ %.2f\n", valor_total);
}

int main() {
    inserir();
    exibir();
    consultar();
    comprar();
    return 0;
}