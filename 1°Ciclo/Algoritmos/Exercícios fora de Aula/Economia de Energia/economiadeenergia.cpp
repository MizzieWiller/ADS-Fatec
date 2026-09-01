#include <stdio.h>
#include <stdbli.h>
#include <locale.h> // só pra lembrar.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float jan, fev, mar, totalAtual, mediaAtual, totalComEconomia, mediaComEconomia;

	printf("\n Digite o consumo de Janeiro (kWh): ");
   	scanf("%f", &jan);
   	printf("\n Digite o consumo de Fevereiro (kWh): ");
   	scanf("%f", &fev);
   	printf("\n Digite o consumo de Março (kWh): ");
   	scanf("%f", &mar);

   	totalAtual <- jan + fev + mar;
   	mediaAtual <- totalAtual / 3;
   	totalComEconomia <- (totalAtual * 20/100);
   	mediaComEconomia <- (mediaAtual * 20/100);

   	printf("Consumo Total: %.2f\n", totalAtual);
   	printf("Consumo Médio: %.2f\n", mediaAtual);

   	printf("--- CONSUMO COM 20% DE ECONOMIA ---");
   	printf("Novo Consumo Total: %.2f\n", totalComEconomia);
   	printf("Novo Consumo Médio: %.2f\n", mediaComEconomia);
	
}
