#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf ("Escreva um numero\n");
    scanf ("%d", &numero);
    
    while (numero >= 0){
        
        if (numero <= 3){
            printf ("1");
            return 0;
        }
        
        if (numero % 2 == 0){
            numero = numero -1;
            printf ("%d, ", numero);
        }
        else {
            numero = numero -2;
            printf ("%d, ", numero);
        }
    }
    

    return 0;
}