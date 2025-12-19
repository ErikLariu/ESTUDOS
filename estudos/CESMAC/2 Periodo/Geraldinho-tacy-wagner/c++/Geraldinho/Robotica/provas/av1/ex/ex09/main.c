#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double c, taxa, juros_compostos;
    int meses;

    printf("Digite o valor inicial: ");
    scanf("%lf", &c);

    printf("Digite a taxa de juros mensal em %%: ");
    scanf("%lf", &taxa);

    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100.0; //
    juros_compostos = c;

    printf("\n--- Montante mês a mês ---\n");
    for (int t = 1; t <= meses; t++) {
        juros_compostos *= (1 + taxa); //
        printf("Mês %2d: R$ %.2lf\n", t, juros_compostos);
    }

    return 0;
}
