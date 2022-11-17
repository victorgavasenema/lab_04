#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, x;

    numero = 0;

    for (x = 1 ; x <= 100 ; x++){
        numero = numero + 1;
       printf("%d ", numero);
    }
    
    printf("\n");
    x = 1;
    numero = 0;
    
    while (x <= 100){
            x++;
        numero = numero + 1;
    printf("%d ", numero);
    }

    printf("\n");
    x=1;
    numero = 0;
    
    do {
        x++;
        numero = numero + 1;
        printf("%d ", numero);
    } while (x <= 100);


    return 0;
}