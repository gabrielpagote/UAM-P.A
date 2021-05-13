#include <stdio.h>
// exercicio 6 - lista 3
int main ()
{
	float prefab, perclucro, percimp, lucro, imp, pf;
	printf("\nDigite o preco e fabrica, o percentual de lucro e o percentual de imposto, respectivamente: \n");
	scanf("%f%f%f", &prefab, &perclucro, &percimp);
	lucro = (perclucro/100.0)*prefab;
	imp = prefab*(percimp/100.0);
	pf = prefab+imp+lucro;
	printf("\Lucro: %0.2f\n" "\nImpostos: %0.2f\n" "\nPreco final: %0.2f\n", lucro, imp, pf);
	return 0;
}

