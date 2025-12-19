#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float precoProduto, precoMulta;

    printf("digite o valor do produto: ");
    scanf("%f", &precoProduto);

    precoMulta = precoProduto * 14 / 100;

    printf("Multa de: %.2f", precoMulta);

    return 0;
}
