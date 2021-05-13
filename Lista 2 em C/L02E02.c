#include <stdio.h>
//questao 2 - lista 2
int main ()
{
	float n1, n2, n3, ma;
	printf("\nInsira as notas:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	ma = (n1+n2+n3)/3.0;
	printf("\nA media = %.2f\n",ma); //Exibir apenas 2 numeros depois da virgula, no float
	return 0;
}

