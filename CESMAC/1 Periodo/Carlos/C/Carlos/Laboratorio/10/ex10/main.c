#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float total, notas;

    printf("digite sua primeira nota: ");
    scanf("%f", &notas);
    total += notas;

    printf("digite sua segunda nota: ");
    scanf("%f", &notas);
    total += notas;

    if (total/2 >= 7){
        printf("Aprovado");
    }
    else if (total/2 >= 4) {
        printf("Recuperação");
    }
    else {
        printf("Reprovado");
    }

    return 0;
}
