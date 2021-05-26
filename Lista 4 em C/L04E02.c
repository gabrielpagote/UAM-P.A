#include <stdio.h>
//exercicio 2 - lista 4

int main() {
    float n1, n2;
    printf("\nInsira dois numeros: \n");
    scanf("%f%f", &n1, &n2);
    if(n1==n2)
    {
        printf("\nOs numeros sao iguais. \n");
    }
    else
        if(n1>n2)
        {
            printf("\nO maior numero eh: %f",n1);
        }
        else
            printf("\nO maior numero eh: %f", n2);
    return 0;
}