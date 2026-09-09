#include <stdio.h> \\ biblioteca
#include <stdlib.h> \\ biblioteca

int main()
{
	float p1, p2, atv, media;
	printf ("\n Informe a nota da p1:");
	scanf ("%f", &p1);
	printf ("\n Informe a nota da p2:");
	scanf ("%f", &p2);
	printf ("\n Informe a pontuação das atividades:");
	scanf ("%f", &atv);
	
	media = p1 * 0.35 + p2 * 0.35 + atv;
	
	printf ("\n A media eh: %.2f", media);
	
	if (media >= 6){
		printf ("\n Voce foi aprovado com media: %.2f", media);
	} else {
		printf ("\n Voce foi reprovado!")
	}
	else {
		if (p1 > p2);
		printf ("\n Informe novamente a nota da P1:")
		scanf ("%f", &p1);
	} else {
		printf ("\n Informe novamente a nota da P2:")
		scanf ("%f", &p2);
	} 
	
	media = p1 * 0.35 + p2 * 0.35 + atv;
	
		printf ("\n A nova media foi de: %.2f", media);	
	
	system ("pause");
	return 0; 
}
