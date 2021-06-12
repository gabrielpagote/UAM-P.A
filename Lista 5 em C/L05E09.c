#include <stdio.h>
#include <math.h>
//lista 5 exercicio 9

int main()
{
    float a, b, c, d, x1, x2;
    printf("\nInsira os coeficientes da equacao de 2 grau.: \n");
    scanf("%f%f%f", &a, &b, &c);
    if(a!=0){
        d = pow(b,2.0)-4.0*a*c;
        if(d==0.0){
            printf("\nUma raiz\n");
            x1=-b/(2.0*a);
            printf("\nRaiz: %f\n",x1);
        }
        if(d<0.0){
            printf("\nNao existe raiz real\n");
        }
        else if(d>0.0){
            printf("\nDuas raizes reais\n");
            x1 = (-b+ sqrtf(d))/(2.0*a);
            x2 = (-b- sqrtf(d))/(2.0*a);
            printf("\nraozes: %f, %f\n", x1, x2);
        }
    } else{
        printf("\nOs valores nao formam uma equacao do 2 grau\n");
    }
    return 0;
}