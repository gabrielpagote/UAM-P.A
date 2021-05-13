#include <stdio.h>
#include <math.h>
//exercicio 1 - lista 3

int main()
{
	float raio, ac, pi;
	printf("\nPara calcular a area do circulo, insira o valor da area: \n");
	scanf("%f", &raio);
	pi = 3.1415;
	ac = pi*pow(raio,2);
	printf("\nArea do circulo = %0.2f", ac);
	return 0;
}


