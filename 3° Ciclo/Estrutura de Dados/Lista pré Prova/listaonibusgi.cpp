#include <stdio.h>

int main() {

    int lugares, prioridade;
    float valorPassagem, minimoPassagens;

    // Entrada dos dados iniciais
    printf("Quantidade total de lugares: ");
    scanf("%d", &lugares);

    printf("Quantidade de lugares para prioridade: ");
    scanf("%d", &prioridade);

    printf("Valor da passagem: ");
    scanf("%f", &valorPassagem);

    printf("Quantidade minima de passagens para o onibus partir: ");
    scanf("%f", &minimoPassagens);

    /*
       O exemplo do enunciado possui 4 poltronas por fileira.
       Portanto, calculamos a quantidade de fileiras.
    */
    int colunas = 4;
    int fileiras = (lugares + colunas - 1) / colunas;

    int matriz[fileiras][colunas];

    // Inicializa todos os lugares como disponíveis
    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }

    int ocupados = 0;
    int opcao;

    do {

        printf("\n===== CONTROLE DO ONIBUS =====\n");
        printf("1 - Vender passagem\n");
        printf("2 - Exibir ocupacao\n");
        printf("3 - Verificar partida\n");
        printf("0 - Encerrar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            int fileira, poltrona;

            printf("\nDigite a fileira: ");
            scanf("%d", &fileira);

            printf("Digite a poltrona: ");
            scanf("%d", &poltrona);

            // Verifica se a posição existe
            if (fileira < 1 || fileira > fileiras ||
                poltrona < 1 || poltrona > colunas) {

                printf("Lugar invalido!\n");

            } 
            else if (matriz[fileira - 1][poltrona - 1] == 8) {

                printf("Lugar indisponivel! Ele ja esta ocupado.\n");

            } 
            else {

                matriz[fileira - 1][poltrona - 1] = 8;
                ocupados++;

                printf("Passagem vendida com sucesso!\n");

                // Exibe a matriz atualizada
                printf("\nOcupacao atual:\n");

                for (int i = 0; i < fileiras; i++) {
                    for (int j = 0; j < colunas; j++) {

                        /*
                           Evita mostrar lugares que ultrapassam
                           a quantidade total informada.
                        */
                        int numeroLugar = i * colunas + j;

                        if (numeroLugar < lugares) {
                            printf("%d ", matriz[i][j]);
                        }
                    }

                    printf("\n");
                }

                int desocupados = lugares - ocupados;
                float percentual = ((float)ocupados / lugares) * 100;
                float total = ocupados * valorPassagem;

                printf("\nNumero de lugares ocupados: %d\n", ocupados);
                printf("Numero de lugares desocupados: %d\n", desocupados);
                printf("Percentual de ocupacao: %.0f%%\n", percentual);
                printf("Valor total vendido em passagens: %.2f reais\n",
                       total);
            }

        } 
        else if (opcao == 2) {

            printf("\n===== OCUPACAO =====\n");

            for (int i = 0; i < fileiras; i++) {
                for (int j = 0; j < colunas; j++) {

                    int numeroLugar = i * colunas + j;

                    if (numeroLugar < lugares) {
                        printf("%d ", matriz[i][j]);
                    }
                }

                printf("\n");
            }

            int desocupados = lugares - ocupados;
            float percentual = ((float)ocupados / lugares) * 100;
            float total = ocupados * valorPassagem;

            printf("\nNumero de lugares ocupados: %d\n", ocupados);
            printf("Numero de lugares desocupados: %d\n", desocupados);
            printf("Percentual de ocupacao: %.0f%%\n", percentual);
            printf("Valor total vendido em passagens: %.2f reais\n",
                   total);

        } 
        else if (opcao == 3) {

            printf("\nPassagens vendidas: %d\n", ocupados);
            printf("Minimo necessario: %.0f\n", minimoPassagens);

            if (ocupados >= minimoPassagens) {
                printf("O onibus pode partir!\n");
            } 
            else {
                printf("O onibus ainda nao pode partir.\n");
                printf("Faltam %.0f passagens.\n",
                       minimoPassagens - ocupados);
            }

        } 
        else if (opcao != 0) {

            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nSistema encerrado.\n");

    return 0;
}