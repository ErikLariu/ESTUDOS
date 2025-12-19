#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[5], i;

    for (i = 0; i < 5; i++){
        printf("Digite a variavel: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("vetores: \n");

    for (i = 4; i >= 0; i--) {
        printf("Vetor: %d \n", vetor[i]);
    }

    return 0;
}
