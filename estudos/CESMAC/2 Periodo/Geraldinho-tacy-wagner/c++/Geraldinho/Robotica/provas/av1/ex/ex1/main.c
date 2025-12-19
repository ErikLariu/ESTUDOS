#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int operacao;

    float metros, decimetros, centimetros, milimetros;

    printf("Opções: \n");
    printf("1 - Metros para Centimetros\n");
    printf("2 - Metros para Decimetros\n");
    printf("3 - Metros para Milimetros\n");
    printf("4 - Decimetros para Metros\n");
    printf("5 - Decimetros para Centimetros\n");
    printf("6 - Decimetros para Milimetros\n");
    printf("7 - Centimetros para Metros\n");
    printf("8 - Centimetros para Decimetros\n");
    printf("9 - Centimetros para Milimetros\n");
    printf("10 - Milimetros para Metros\n");
    printf("11 - Milimetros para Decimetros\n");
    printf("12 - Milimetros para Centimetros\n");

    printf("Digite a operação: ");
    scanf("%d", &operacao);

    switch (operacao) {

        /* Metros */

        case 1:
            printf("Digite o valor em Metros: ");
            scanf("%f", &metros);
            printf("Valor convertido de Metros para Centimetros: %.2f", metros * 100);
        break;
        case 2:
            printf("Digite o valor em Metros: ");
            scanf("%f", &metros);
            printf("Valor convertido de Metros para Decimetros: %.2f", metros * 10);
        break;
        case 3:
            printf("Digite o valor em Metros: ");
            scanf("%f", &metros);
            printf("Valor convertido de Metros para Milimetros: %.2f", metros * 1000);
        break;

        /* Decimetros */

        case 4:
            printf("Digite o valor em Decimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Decimetros para Centimetros: %.2f", decimetros / 10);
        break;
        case 5:
            printf("Digite o valor em Decimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Decimetros para Metros: %.2f", decimetros * 10);
        break;
        case 6:
            printf("Digite o valor em Decimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Decimetros para Milimetros: %.2f", decimetros * 100);
        break;

        /* centimetros */

        case 7:
            printf("Digite o valor em Centimetros: ");
            scanf("%f", &centimetros);
            printf("Valor convertido de Centimetros para Decimetros: %.2f", centimetros / 100);
        break;
        case 8:
            printf("Digite o valor em Centimetros: ");
            scanf("%f", &centimetros);
            printf("Valor convertido de Centimetros para Metros: %.2f", centimetros / 10);
        break;
        case 9:
            printf("Digite o valor em Centimetros: ");
            scanf("%f", &centimetros);
            printf("Valor convertido de Centimetros para Milimetros: %.2f", centimetros * 10);
        break;

        /* Milimetros */

        case 10:
            printf("Digite o valor em Milimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Milimetros para Centimetros: %.2f", milimetros / 1000);
        break;
        case 11:
            printf("Digite o valor em Milimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Milimetros para Decimetros: %.2f", milimetros / 100);
        break;
        case 12:
            printf("Digite o valor em Milimetros: ");
            scanf("%f", &decimetros);
            printf("Valor convertido de Milimetros para Metros: %.2f", milimetros / 10);
        break;
        default:
            printf("Valor incorreto");
        break;

    }

    return 0;
}

