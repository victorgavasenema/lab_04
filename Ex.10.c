#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador, soma;
    numero = 0;
    soma = 0;
    
    for (contador = 1 ; contador <= 50 ; contador++){
        printf ("%d, ", soma);
        numero = numero + 2;
        soma = numero + soma;
        }
    
    return 0;
}