#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int numero, x;
    x=0;

    for(numero = 1; numero < 1000; numero++){
        if(numero % 3 == 0 || numero % 5 == 0){
            x = x + numero;
        }
    }

    printf("Resultado: %d\n",x);

    return 0;
}