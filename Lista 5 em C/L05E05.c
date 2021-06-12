#include <stdio.h>
#include <math.h>
//lista 5 exercicio 5

int main()
{
    float convite, espetaculo, custo_final;
    printf("\nInsira o custo do espetaculo e o valor do convite, respectviamente.:\n");
    scanf("%f%f", &espetaculo, &convite);
    custo_final = espetaculo/convite;
    custo_final = ceil(custo_final);
    printf("\nDeve-se vender pelo menos %0.2f, convites.\n", custo_final);
    return 0;
}