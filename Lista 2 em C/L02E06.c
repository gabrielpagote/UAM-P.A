#include <stdio.h>
//exercicio 6 - lista 2

int main()
{
	float sal, nsal;
	printf("\nInsira o salario:\n");
	scanf("%f", &sal);
	nsal = sal+sal*(5.0/100.0)-sal*(7.0/100.0);
	printf("\nSalario = %0.2f\n", nsal);
	return 0;
}
