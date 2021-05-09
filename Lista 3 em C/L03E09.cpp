#include <stdio.h>
// exercicio 9 - lista 3

int main()
{
	float peso, qtdia, qtfut;
	printf("\nInsira o peso do saco de racao e quantidade fornecida para os gatos diariamente, em gramas, respectivamente: \n");
	scanf("%f%f", &peso, &qtdia);
	qtfut = peso-(qtdia*5.0);
	printf("\nQuantidade de racao restante daqui a 5 dias: %0.2f\n", qtfut);
	return 0;
}

