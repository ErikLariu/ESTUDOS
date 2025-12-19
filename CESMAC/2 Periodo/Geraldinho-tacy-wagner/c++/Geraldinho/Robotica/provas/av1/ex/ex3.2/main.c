#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h> /* Biblioteca da função sqrt() */


int main()
{
    setlocale(LC_ALL, "portuguese");

    float valor1, valor2, soma, raiz_soma_quadrados, seno_diferente;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;

    raiz_soma_quadrados = sqrt(pow(valor1, 2) + pow(valor2, 2));

    seno_diferente = sin(valor1 - valor2);

    printf("%.1f + %.1f = %.1f \n", valor1, valor2, soma);
    printf("Produto do primeiro pelo segundo: %.1f \n", valor1 * valor2);
    printf("Quadrado do primeiro: %.1f \n", valor1 * valor1);
    printf("Raiz quadrada da soma dos quadrados: %.2f \n", raiz_soma_quadrados);
    printf("seno da diferença do primeiro pelo segundo: %.2f \n", seno_diferente);
    printf("Modulo: %d", abs(valor1));

    return 0;
}
