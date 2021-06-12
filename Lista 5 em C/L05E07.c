#include <stdio.h>
//lista 5 - exercicio 7

int main ()
{
    int cod_estado;
    float peso_ton, cod_carga, peso_quilo, imposto, preco, valor_total;
    printf("\nInsira o codigo do estado, o peso em tonelada e o codigo da carga, respectivamente.:\n");
    scanf("%d%f%f", &cod_estado, &peso_ton, &cod_carga);
    peso_quilo = peso_ton*100.0;
    printf("\nPeso em quilos: %0.2f\n", peso_quilo);
    if(cod_carga>=0.0 && cod_carga<=20.0){
        preco = 100.0*peso_quilo;
    }
    if(cod_carga>=21.0 && cod_carga<=30.0){
        preco = 250.0*peso_quilo;
    }
    if(cod_carga>31.0 && cod_carga<=40.0){
        preco = 340.0*peso_quilo;
    }
    if(cod_carga<0.0 || cod_carga>40.0){
        printf("\nCodigo invalido\n");
    }
    printf("\nPreco R$ %0.2f\n", preco);
    switch (cod_estado) {
        case 1:
            imposto = 35.0/100.0*preco;
            break;
        case 2:
            imposto = 25.0/100.0*preco;
            break;
        case 3:
            imposto = 15.0/100.0*preco;
            break;
        case 4:
            imposto = 50.0/100.0*preco;
            break;
        case 5:
            imposto = 0.0;
            break;
        default:
            printf("\nCodigo invalido! \n");
        }

    printf("\nImposto: R$ %0.2f\n", imposto);
    valor_total = preco+imposto;
    printf("\nValor total: R$ %0.2f\n", valor_total);
    return 0;
    }
