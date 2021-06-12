#include <stdio.h>
// exercicio 8s - lista 4

int main () {
    float x, y, z;
    printf("\nInsira tres numeros para descobrir se formam ou nao um triangulo. \n");
    scanf("%f%f%f", &x, &y, &z);
    if(x<y+z && y<x+z && z<x+y)
    {
        if(x==y && y==z)
        {
            printf("\nO triangulo eh equilatero\n");

        }else if(x==y || y==z || z==x)
        {
            printf("\nO triangulo eh isosceles\n");

        } else if(x!=y && y!=z && x!=z)
        {
            printf("\nO triangulo eh escaleno\n");
        }
    }
    else
        printf("\nNao eh um triangulo.\n");
    return 0;
}