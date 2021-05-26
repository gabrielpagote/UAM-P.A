#include <stdio.h>
#include <math.h>
// exercicio 5 - lista 4

int main()
{
    int op;
    float n1, n2, soma, raiz, nr;
    printf("\nMenu de opcoes: \n\n1. Somar dois numeros.\n2. Mostrar raiz quadrada de um numero.\n");
    scanf("%d", &op);
    if(op>2)
    {
        printf("\nVoce digitou uma opcao invalida. \n");
        return 0;
    }
        if(op == 1)
        {
            printf("\nInsira dois numeros: \n");
            scanf("%f%f", &n1, &n2);
            soma = n1+n2;
            printf("\nA soma dos dois numeros eh: %0.2f\n", soma);
            return 0;
        }
        else
        if(op == 2)
        {
            printf("\nInsira um numero para mostrar sua raiz quadrada: \n");
            scanf("%f", &nr);
            raiz = sqrtf(nr);
            printf("\nA raiz quadrada eh: %0.2f\n", raiz);
            return 0;
        }
}