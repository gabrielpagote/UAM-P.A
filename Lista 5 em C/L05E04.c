#include <stdio.h>
#include <math.h>
//lista 5 exercicio 4

int main()
{
    float n, f, a;
    int i;
    printf("\nInsira um numero do conjunto de numeros reais\n");
    scanf("%f", &n);
    i=n/1;
    f=n-i;
    a= ceil(n);
    printf("\nA parte inteira desse numero: %d\n", i);
    printf("\nA parte fracionaria desse numero %f\n", f);
    printf("\nNumero arredondado para cima %f\n",a);
    return 0;
}