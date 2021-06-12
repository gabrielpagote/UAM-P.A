#include <stdio.h>
// exercicio 7 - lista 4

int main() {
    float preco, venda, novopreco;
    printf("\nInsira o preco atual e a venda mensal, respectivamente: \n");
    scanf("%f%f", &preco, &venda);

    if (venda < 500.0 || preco < 30.0) {
        novopreco = preco+10.0/100.0*preco;
        printf("Novo preco: %.2f", novopreco);

    } else if (venda > 1200.0 || preco >= 80.0) {
        novopreco = preco-20.0/100.0*preco;
        printf("Novo preco: %.2f", novopreco);

    }
    if ((venda >= 1200.0 && venda < 1200.0) || (preco >= 30.0 && preco < 80.0)) {
        novopreco = preco+15.0/100.0*preco;
        printf("Novo preco: %.2f", novopreco);
        return 0;
    }
}