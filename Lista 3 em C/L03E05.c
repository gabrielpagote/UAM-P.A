#include <stdio.h>
// exercicio 5 - lista 3

int main()
{
	int anas, aat, iat, afut;
	printf("\nDigite o ano de seu nascimento: \n");
	scanf("%d", &anas);
	printf("\nDigite o ano em que estamos hoje: \n");
	scanf("%d", &aat);
	iat = aat-anas;
	afut = 2050-anas;
	printf("\nSua idade atual: %d\n" "\nSua idade em 2050 sera: %d\n", iat, afut);
	return 0;
}
