#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char palavras[3][50];
    int i;

    for (i = 0; i < 3; i++){
        printf("Digite a palavra: ", i + 1);
        scanf("%s", &palavras[i]);
    }

    for (i = 2; i >= 0; i--){
        printf("Palavra: %s \n", palavras[i]);
    }

    return 0;
}
