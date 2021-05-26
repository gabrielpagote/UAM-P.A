#include <stdio.h>
//exercicio 6 - lista 4

int main() {
    float sal, nsal, bon, aux;
    printf("\nInsira o salario inicial: \n");
    scanf("%f", &sal);
    if (sal <= 600.0)
    {
        aux = 150.0;
    }
    else
        if (sal >= 601.0)
        {
            aux = 100.0;
        }

    if(sal<500.0)
    {
        bon = sal*(5.0/100.0);
        nsal = bon+aux+sal;
        printf("\nO novo salario eh: %0.2f\n", nsal);
    }
    else
        if(sal>=500 && sal<=1200.0)
        {
            bon = sal*(12.0/100.0);
            nsal = sal+bon+aux;
            printf("\nO novo salario eh: %0.2f\n", nsal);
        }
        if(sal>1200.0)
        {
            nsal = sal+aux;
            printf("\nO novo salario eh: %0.2f\n", nsal);
        }

    return 0;
}