#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int resto, numero, divisor = 5;

    printf("digite um numero: ");
    scanf("%d", &numero);

    resto = numero % divisor;

    printf("%d sobra %d divido por %d", numero, resto, divisor);

    return 0;
}
