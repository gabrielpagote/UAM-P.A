#include <stdio.h>
// exercício 5 - lista 2
int main()
{
	float sal, perc, au, nsal; //declaração de variaveis
	printf("\nInsira o salario e o percentual de aumento respectivamente\n");
	scanf("%f%f", &sal, &perc);
	au = sal*(perc/100.0);
	nsal = sal+au;
	printf("\nAumento: %0.2f\t novo salario: %0.2f\n", au, nsal);
	return 0;
	
}
