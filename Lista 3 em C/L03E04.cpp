#include <stdio.h>
#include <math.h>
// exercicio 4 - lista 3
int main ()
{
	float num, mpol, mjar, mmil;
	printf("\nInsira um numero em pes: \n");
	scanf("%f", &num);
	mpol = num*12.0;
	mjar = num/3.0;
	mmil = mjar*1760;
	printf("\nPolegadas: %0.2f\n" "\nJardas: %0.2f\n" "\nMilhas: %0.2f\n", mpol, mjar, mmil);
	return 0;
}
