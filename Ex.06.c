#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, soma, n;
    float media;
    soma = 0;

    for (contador = 0; contador <= 9; contador++){
        printf ("Escreva um numero:\n");
        scanf ("%d", &n);
        soma = soma + n;
    }
    media = soma/10;
    printf ("O resultado: %.2f\n", media);
    return 0;
}