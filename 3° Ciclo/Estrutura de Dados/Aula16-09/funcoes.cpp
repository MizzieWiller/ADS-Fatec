#include <stdio.h>
#include <stdlib.h>

int fSoma(int n){
    return n + 50;
}

int fCalc(int num){
    int total = num + 20;
    return total;
}

int fMultiplica(int p1, int p2, int p3){
    return (p1 * p2) * p3;
}

int main()
{
    int num = 30;
    int ResultadoFuncao;
    ResultadoFuncao = fCalc(num);
    printf("%i", ResultadoFuncao);
    ResultadoFuncao = fSoma(ResultadoFuncao + 30);
    printf("%i", ResultadoFuncao);
    printf("%i", fMultiplica(ResultadoFuncao, 2, 2));
    system("pause");
    return 0;
}
