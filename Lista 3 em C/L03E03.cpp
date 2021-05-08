#include <stdio.h>
#include <math.h>
// exercicio 1 - lista 3
int main()
{
	float num1, num2, nf1, nf2;
	printf("\nInsira dois numeros maiores que zero, respectivamente: \n");
	scanf("%f%f", &num1, &num2);
	nf1 = pow(num1, num2);
	nf2 = pow(num2, num1);
	printf("\nPrimeiro numero elevado ao segundo= %0.2f\n" "\nSegundo numero elevado ao primeiro= %0.2f\n", nf1, nf2);
	return 0;
}
