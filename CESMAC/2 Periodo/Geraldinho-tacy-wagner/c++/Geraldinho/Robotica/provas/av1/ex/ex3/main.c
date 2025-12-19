#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h> /* Biblioteca da função sqrt() */

int main()
{
    setlocale(LC_ALL, "portuguese");


    double valor1, valor2, soma, raiz, raiz_valor1, raiz_valor2, raiz_soma_raiz, seno_diferenca, modulo_primeiro;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    soma = valor1 + valor2;

    raiz = sqrt(soma); /* sqrt() - calculo da raiz */

    raiz_valor1 = sqrt(valor1);
    raiz_valor2 = sqrt(valor2);

    raiz_soma_raiz = sqrt(raiz_valor1 + raiz_valor2);

    seno_diferenca = sin(fabs(valor1 - valor2));  /* sin() - seno , fabs - valor absoluto (não negativo) */

    modulo_primeiro = fabs(valor1);

    printf("%.1f + %.1f = %.1f \n", valor1, valor2, soma);
    printf("Raiz quadrada das somas: %.4f \n", raiz);
    printf("Raiz quadrada do primeiro valor: %.4f \n", raiz_valor1);
    printf("Raiz quadrada do segundo valor: %.4f \n", raiz_valor2);
    printf("Raiz da soma das raizes e: %.4f \n", raiz_soma_raiz);
    printf("Seno da diferenca entre os valores: %.4f \n", seno_diferenca);
    printf("Modilo do primeiro numero:", modulo_primeiro);

    return 0;
}

