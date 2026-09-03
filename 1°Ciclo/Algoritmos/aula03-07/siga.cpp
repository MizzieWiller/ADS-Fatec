#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float media;

    printf("Informe a média final ");
    scanf("%f", &media);
    if(media >= 6)

    printf("Você foi aprovado");
}
