#include <stdio.h>
//lista 5 exercicio 8

int main()
{
    float altura, peso, classificacao;
    printf("\nInsira a altura da pessoa e o peso da mesma, respectivamente.: \n");
    scanf("%f%f", &altura, &peso);
    if(altura<1.2)
    {
        if(peso<60)
        {
            printf("\nClassificacao: A\n");
        }
        else if(peso>=60 && peso<90)
              {
            printf("\nClassificacao: D\n");
              }
            else
                printf("\nClassificacao: G\n");
        }

    else if(altura<1.7)
          {
            if(peso<60)
            {
            printf("\nClassificacao: B\n");
            }
        else if(peso>=60 && peso<90)
              {
            printf("\nClassificacao: E\n");
        } else
            printf("\nClassificacao: H\n");


    }
    else
        if(peso<60){
            printf("\nClassificacao: C\n");
        }
        else if(peso>=60 && peso<90){
            printf("\nClassificacao: F\n");
        }
        else
            printf("\nClassificacao: I\n");

    return 0;
}