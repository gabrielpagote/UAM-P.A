#include <stdio.h>
#include <math.h>
// lista 5 exercicio 3

int main()
{
    float x, y, z;
    printf("\nInsira o comprimento da escada e a altura onde ficara o quadro: \n");
    scanf("%f%f", &z, &x);
    if(x>z)
    {
        printf("\nValor invalido!\n");
    }
    else{
        y = pow(z,2.0)-pow(x,2.0);
        y = sqrt(y);
        printf("\nDistancia: %0.2f\n", y);
    }
    return 0;
}