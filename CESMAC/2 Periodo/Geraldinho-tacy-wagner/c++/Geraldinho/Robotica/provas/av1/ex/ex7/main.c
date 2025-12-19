#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, mutiplicidade, divisor = 2;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Não é possivel decompor");
    }

    while (numero > 1) {
            mutiplicidade = 0;
        while (numero % divisor == 0) {
            mutiplicidade++;
            numero /= divisor;
        }
        if (mutiplicidade > 0) {
            printf("fator: %d, Mutiplicidade: %d \n", divisor, mutiplicidade);
        }
    }

    return 0;
}
