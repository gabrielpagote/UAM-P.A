#include <stdio.h>
// exercicio 4 - lista 4

int main()
{
    int n1;
    printf("\nInsira um numero inteiro: \n");
    scanf("%d", &n1);
    if(n1 %2 == 0)
    {
        printf("\nEh par! \n");
    }
    else
    printf("\nEh impar! \n");

    return 0;
}