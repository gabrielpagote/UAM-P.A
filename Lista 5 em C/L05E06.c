#include <stdio.h>
//lista 5 exercicio 6

int main()
{
    float salario_base, tempo_servico, imposto, gratificacao, salario_liq;
    printf("\nInsira o salario base e o tempo de servico de um funcionario, respectivamente. \n");
    scanf("%f%f", &salario_base, &tempo_servico);
    if(salario_base<200.0)
    {
        imposto = 0;
    }
    else if(salario_base<=450.0){
        imposto = salario_base*3.0/100.0;
    }

    else{
        imposto = salario_base*12/100;
    }
    printf("\nImposto = %0.2f\n", imposto);

    if(salario_base>500.0)
    {
        if(tempo_servico<=3.0)
        {
            gratificacao = 23.0;
        }
        else if(tempo_servico<6.0){
            gratificacao = 35.0;
        }
        else{
            gratificacao = 33.0;
        }
    }
    printf("\nGratificacao = %0.2f\n", gratificacao);
    salario_liq = salario_base+gratificacao-imposto;
    printf("\nSalario liquido = %0.2f\n", salario_liq);

    if(salario_liq<=350.0)
    {
        printf("classificaco: A");
    }
    else if(salario_liq<600.0){
        printf("\n classificaco: B");
    } else{
        printf("\nclassificaco: C");
    }
    return 0;
}