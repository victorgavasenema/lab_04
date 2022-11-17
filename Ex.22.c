#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mn()
{
    int contador1, contador2, x, y, z, n1, n2, n3;  

    n1 = 0;
    contador1 = 999;

    for (x = contador1 * contador1; x > n1; x = contador1 * contador1){
        for (contador2 = contador1; x > n1; x = contador1 * contador2){
            z = 0;
            for (y = x; y > 0; y /= 10){
                z = z * 10 + y % 10;
            }
            if (x == z){
                    n1 = x;
                    n2 = contador1;
                    n3 = contador2;
            }
            contador2--;
        }
        contador1--;
    }
    printf(": %d,  por %d vezes %d\n", n1, n2, n3);
    
    return 0;
}