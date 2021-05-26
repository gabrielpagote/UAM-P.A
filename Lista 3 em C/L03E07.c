#include <stdio.h>

//exercicio 7 - lista 3

int main()
{
	float hstrab, hrtrab, salmin, salrec, salbrut, imp;
	printf("\nInsira a quantidade de horas trabalhadas e o valor do salario minimo, respectivamente: \n");
	scanf("%f%f", &hstrab, &salmin);
	hrtrab = (salmin/2);
	salbrut = hstrab*hrtrab;
	imp = (3/100.0)*salbrut;
	salrec = salbrut-imp;
	printf("\nSalario a receber= %0.2f\n", salrec);
	return 0;
}
