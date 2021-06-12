#include <stdio.h>
#include <math.h>
//lista 5 exercício 2


int main()
{
    float medangulo, altparede, medescada, radiano, pi;
    printf("\nInsira a medida do angulo e a altura da parede\n");
    scanf("%f%f", &medangulo, &altparede);
    pi= acos(-1.0);
    radiano=medangulo*pi/180.0;
    medescada = altparede/ sin(radiano);
    printf("\nTamanho da escada: %0.2f", medescada);
    return 0;
}
