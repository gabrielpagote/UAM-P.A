#include <stdio.h>
#include <math.h>
//exercicio 2 lista 3

int main ()
{
	float n, q, c, r2, r3;
	printf("Insira um numero real maior que 0: ");
	scanf("%f", &n);
	q = pow(n, 2.0);
	c = pow(n, 3.0);
	r2 = sqrt(n);
	r3= cbrt(n);
	printf("\nQuadrado: %f\nCubo: %f\nRaiz: %f\nRaiz cubica: %f\n", q, c, r2, r3);
	return 0;
}

