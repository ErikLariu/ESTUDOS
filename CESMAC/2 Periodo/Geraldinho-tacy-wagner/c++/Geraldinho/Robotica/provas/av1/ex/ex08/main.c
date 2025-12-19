#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    int a = valor1, b = valor2;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    printf("O Mdc de %d e %d é: %d \n", valor1, valor2, a);

    return 0;
}
