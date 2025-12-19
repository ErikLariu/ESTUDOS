#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int operacao;

    float celsius, fahrenheit;

    printf("Opções: \n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");

    printf("Digite a operação: ");
    scanf("%d", &operacao);


    switch (operacao) {
        case 1:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &celsius);
            printf("Valor convertido de Celsius para Fahrenheit: %.2f", (celsius * 1.8) + 32);
        break;
        case 2:
            printf("Digite o valor em Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("Valor convertido de Fahrenheit para Celsius: %.2f", (fahrenheit - 32) * 5/9);
        break;
        default:
            printf("Valor incorreto");
        break;
    }

    return 0;
}
