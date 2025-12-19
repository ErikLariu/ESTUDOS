#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float raio, pi, perimetro, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    pi = 3.14;

    perimetro = 2 * pi * raio;

    area = pi * (raio * raio);

    printf("Perimetro: %.2f", perimetro);
    printf("Perimetro: %.2f", area);

    return 0;
}
