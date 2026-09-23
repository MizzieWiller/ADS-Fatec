#include <stdio.h>

int c[50] = {99, 45, 41};
int e[50] = {10, 9, 5};
char n[50][30] = {"Arroz", "Feijao", "Cerveja"};
float v[50] = {12.50, 7.90, 4.90};
int n_prod = 3;

int vi[50], vq[50], n_vend = 0;

void inserir() {
    int novos;
    printf("Quantos novos produtos queres adicionar? (Digita 0 se quiseres saltar): "); 
    scanf("%d", &novos);
    
    for(int i = n_prod; i < n_prod + novos; i++) {
        printf("Cod Nome Valor Estoque: ");
        scanf("%d %s %f %d", &c[i], n[i], &v[i], &e[i]);
    }
    n_prod += novos;
}

void exibir() {
    printf("\nCod | Nome | Valor | Estoque\n");
    for(int i = 0; i < n_prod; i++)
        printf("%d | %s | %.2f | %d\n", c[i], n[i], v[i], e[i]);
}

void consultar() {
    int cod;
    printf("\nConsultar Cod: "); scanf("%d", &cod);
    for(int i = 0; i < n_prod; i++) {
        if(c[i] == cod) {
            printf("Achou: %s | %.2f | %d\n", n[i], v[i], e[i]);
            return;
        }
    }
    printf("Nao cadastrado.\n");
}

void comprar() {
    char cont;
    do {
        int cod, qtd, i;
        printf("\nComprar Cod: "); scanf("%d", &cod);
        
        for(i = 0; i < n_prod; i++) {
            if(c[i] == cod) {
                printf("Qtd: "); scanf("%d", &qtd);
                if(qtd <= e[i]) {
                    vi[n_vend] = i; 
                    vq[n_vend++] = qtd; 
                    e[i] -= qtd;
                    printf("Adicionado!\n");
                } else printf("Sem estoque.\n");
                break;
            }
        }
        if(i == n_prod) printf("Produto nao encontrado.\n");
        
        printf("Comprar mais? (s/n): "); scanf(" %c", &cont);
    } while(cont == 's');

    float total = 0;
    printf("\nRESUMO\nNome | Qtd | SubTotal\n");
    for(int j = 0; j < n_vend; j++) {
        float sub = vq[j] * v[vi[j]];
        printf("%s | %d | %.2f\n", n[vi[j]], vq[j], sub);
        total += sub;
    }
    printf("Total: %.2f R$\n", total);
}

int main() {
    inserir();
    exibir();
    consultar();
    comprar();
    return 0;
}