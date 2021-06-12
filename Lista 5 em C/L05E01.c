#include <stdio.h>
// exercicio 1 - lista 5

int main ()
{
    float alturamax, altura, qntdegraus;
    printf("\nInsira a altura da escada e a altura desejada em metros, respectivamente: \n");
    scanf("%f%f", &alturamax, &altura);
    qntdegraus = alturamax-altura;
    if(qntdegraus <= 0.0)
    {
        printf("Voce ja chegou ao topo!!");
    }
    else
    {
        printf("\nQuantidade necessaria: %0.2f\n", qntdegraus);
        return 0;
    }
}