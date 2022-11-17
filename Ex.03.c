#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, contador;
    contador = 0;

    for (x = 11; contador <= 10; contador++){
        x = x -1;
        printf ("%d \n", x);
    }
    return 0;
}