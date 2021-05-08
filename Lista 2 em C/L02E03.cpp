#include <stdio.h>
//questao 3 - lista 2
int main ()
{
	float n1, n2, n3, p1, p2, p3, mp;
	printf("\nInsira as notas:\n");
	scanf("%f%f%f", &n1, &n1, &n3);
	printf("\nInsira os pesos: \n");
	scanf("%f%f%f", &p1, &p2, &p3);
	mp = (n1+n2+n3)/(p1+p2+p3);
	printf("\nA media = %.2f\n",mp);
	return 0;
}
