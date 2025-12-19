#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[20] = "maria";
    int idade = 30;
    float altura = 1.7;
    char raca[20] = "pardo";
    char genero = 'F';

    printf("nome: %s \n", nome);
    printf("idade: %d \n", idade);
    printf("altura: %.2f \n", altura);
    printf("raça: %s \n", raca);
    printf("genero: %c \n", genero);

    return 0;
}
