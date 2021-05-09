#include <stdio.h>
//exercicio 8 - lista 3

int main()
{
	float dep, cb, opebanc;
	int cheque;
	printf("\nInsira o valor do deposito: \n");
	scanf("%f", &dep);
	printf("\nInsira a quantidade de cheques que voce ira emitir: \n");
	scanf("%d", &cheque);
	opebanc = (0,38/100.0)*cheque;
	cb = dep-opebanc;
	printf("\nO saldo atual da conta: %0.2f\n", cb);
	return 0;
	
}
