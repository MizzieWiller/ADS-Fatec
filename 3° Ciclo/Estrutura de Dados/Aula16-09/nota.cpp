#include <stdio.h>
#include <stdlib>

int fSoma(int num1, int num2){
   return (num1 + num2) + 10;
}

int fMult(int res_soma, int num3){
    return (res_soma + num3) * 3;
}

int fCubo(res_mult){
    return res_mult * res_mult * res_mult;
}

int main(){
    
    int num1, num2, num3;

    printf("Informe o primeiro numero");
    scanf("%d", &num1);
    printf("Informe o segundo numero");
    scanf("%d", &num2);
    printf("Informe o terceiro numero");
    scanf("%d", &num3);

    int res_soma = fSoma(num1, num2);
    int res_mult = fMult(res_soma, num3);
    int res_cubo = fCubo(res_mult);

    print("Resulltado final: %d", res_cubo);

    return 0;
}
