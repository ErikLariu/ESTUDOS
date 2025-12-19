#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float total, precoProduto;

    printf("digite o primeiro produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("digite o segundo produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("digite o terceiro produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("total: R$%.2f", total);

    return 0;
}
