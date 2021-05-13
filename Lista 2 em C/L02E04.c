#include <stdio.h>
//questao 4 - lista 2
int main ()
{
	float sal, nsal;
	printf("\nInsira o salario: \n");
	scanf("%f", &sal);
	nsal = ((sal*0.25)+sal);
	printf("\nNovo salario = %.2f\n", nsal);
	return 0;
}
