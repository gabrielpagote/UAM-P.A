#include <stdio.h>
// exercicio 7 - lista 2

int main ()
{
	float dep, taxa, rend, total;
	printf("\nEscreva o valor do deposito e da taxa, respectivamente: \n");
	scanf("\n%f%f", &dep, &taxa);
	rend = (taxa*dep)/100.0;
	total = dep+rend;
	printf("\nRendimento= %0.2f\n \nTotal apos rendimento= %0.2f\n", rend, total);
		return 0;
}
