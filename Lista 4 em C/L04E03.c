#include <stdio.h>
// exercicio 3 - lista 4

int main () {
    float n1, n2, n3;
    printf("\nInsira tres numeros: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    if (n1<n2 && n1<n3)
    {
        if(n2<n3)
        {
            printf("\n%0.2f\n%0.2f\n%0.2f\n", n1, n2, n3);
        }
        else
            printf("\n%0.2f\n%0.2f\n%0.2f\n", n1, n3, n2);
    }
    if(n2<n1 && n2<n3)
    {
        if(n1<n3)
        {
            printf("\n%0.2f\n%0.2f\n%0.2f\n", n2, n1, n3);
        }
        else
            printf("\n0%.2f\n0%.2f\n0%.2f\n", n2, n3, n1);
    }
    if(n3<n1 && n3<n2)
    {
        if(n1<n2)
        {
            printf("\n%0.2f\n%0.2f\n%0.2f\n", n3, n1, n2);
        }
        else
            printf("\n%0.2f\n%0.2f\n%0.2f\n", n3, n2, n1);
    }
    return 0;
}