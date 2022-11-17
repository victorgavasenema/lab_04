#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;
    printf ("Escreva um numero inteiro positivo ");
    scanf ("%d", &numero);
    
    if(numero > 0){
        for (resultado = 0; resultado != numero; resultado = resultado + 1){
            printf ("%d ", resultado);
        }
    }
    
    else {
        printf ("valor invalido");
        return 0;
    }
    
    printf ("%d ", numero);
    return 0;
}