#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    (numero % 2 == 1 ? ++numero : --numero );

    printf("valor final: %d", numero);

    return 0;
}
