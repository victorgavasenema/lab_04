#include <stdio.h>
#include <stdlib.h>

int main (){

    int anos;
    float sal, novo;
    
    sal = 2000;
    sal = sal * 1.015;
    for(anos = 1997; anos <= 2022; anos++){
        novo = sal * 2;
        sal = novo;
    }
    printf("O novo salario eh: %.2fR$\n", novo);

    return 0;
}