#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float total = 0, precoProduto;
    int parcelas;

    printf("digite o valor do primeiro produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("digite o valor do segundo produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("digite o valor do terceiro produto: ");
    scanf("%f", &precoProduto);
    total += precoProduto;

    printf("quantas parcelas?: ");
    scanf("%d", &parcelas);

    printf("%d parcelas de %f", parcelas, total/parcelas);

    return 0;
}
