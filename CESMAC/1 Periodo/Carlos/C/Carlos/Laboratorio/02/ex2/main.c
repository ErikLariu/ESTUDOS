#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[50];
    int idade;
    float altura;
    char raca[20];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite sua raça: ");
    scanf("%s", &raca);

    printf("seu nome: %s \n", nome);
    printf("sua idade: %d \n", idade);
    printf("sua altura: %.2f \n", altura);
    printf("seu raça: %s \n", raca);

    return 0;
}
