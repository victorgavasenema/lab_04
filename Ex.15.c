#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int numero, quadrado, cubo;
    float raiz;
    
    do{
        printf("Digite um numero: \n");
        scanf("%d",&numero);
        
        if(numero > 0){
            quadrado = numero * numero;
            cubo = numero * numero * numero;
            raiz = sqrt(numero);
            printf("Quadrado: %d\n", quadrado);
            printf("Cubo: %d\n", cubo);
            printf("Raiz quadrada: %f\n", raiz);
        }
    }
    while(numero <= 0);
    
    return 0;
}