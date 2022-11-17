#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    for (x = 0; x <= 100000; x = x +  1000){
        printf ("%d\n", x);
    }
    return 0;
}