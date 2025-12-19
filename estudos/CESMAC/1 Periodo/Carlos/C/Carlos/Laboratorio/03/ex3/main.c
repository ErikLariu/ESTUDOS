#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float a, b, resultado;

    printf("digite o numero a ser dividido: ");
    scanf("%f", &a);
    printf("digite o dividendo: ");
    scanf("%f", &b);

    resultado = a /b;

    printf("resultado: %f", resultado);

    return 0;
}
