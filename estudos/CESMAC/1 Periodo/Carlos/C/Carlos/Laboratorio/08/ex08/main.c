#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int acertos = 0;
    float respota;

    printf("Quanto é 56 - 17? \n");
    scanf("%f", &respota);
    if (respota == 39) {
        ++acertos;
    }
    printf("Quanto é 34x12 \n");
    scanf("%f", &respota);
    if (respota == 408) {
        ++acertos;
    }
    printf("Quanto é 123 - 48? \n");
    scanf("%f", &respota);
    if (respota == 171) {
        ++acertos;
    }

    printf("acertos: %d", acertos);

    return 0;
}
