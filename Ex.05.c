#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, soma, n;
    soma = 0;

    for (contador = 0; contador <= 9; contador++){
        printf ("Escreva um numero:\n");
        scanf ("%d", &n);
        soma = soma + n;
    }
     printf ("A soma dos valore eh: %d\n", soma);
    return 0;
}