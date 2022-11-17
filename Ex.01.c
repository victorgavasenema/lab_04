#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, numero;
    
    printf ("Escreva um numero:\n");
    scanf ("%d", &numero);
    
    if (numero > 0){
        for (contador = 1; contador <= 3; contador++){
            numero = numero * 3;
            printf ("%d, \n", numero);
            
        }
    }
    
    else {
        printf ("numero invalido", numero);
    }

return 0;
}