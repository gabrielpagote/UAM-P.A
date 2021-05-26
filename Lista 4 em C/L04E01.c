#include <stdio.h>
//exercicio 1 - lista 4

int main()
{
    float n1, n2, n3, ma;
    printf("\nInsira as 3 notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    ma = (n1+n2+n3)/3.0;
    if(ma<=2)
    {
        printf("\nA media eh: %0.2f\n", ma);
        printf("\nReprovado.\n");
    }
    else
        if(ma<=6)
        {
            printf("\nA media eh: %0.2f\n", ma);
            printf("\nExame\n");
        }
        else if(ma>=7)
            {
                printf("\nA media eh: %0.2f\n", ma);
                printf("\nAprovado.\n");
            }
    return 0;
}