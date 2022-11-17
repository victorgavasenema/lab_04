#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int contador, lancamentos, x, y;
    printf("Digite o numero de vezes que os dados serao lancados: \n");
    scanf("%d",&lancamentos);
    srand(time(NULL));

    for(contador = 0; contador < lancamentos; contador++){
        do{
        x = rand() % 7;
        y = rand() % 7;
        }
        
        while(x == 0 || y == 0);
        if(x == y){
            printf("%d = %d\n",y,x);
        }
        
        else{
            if(x < y){
                printf("%d > %d\n",y,x);
            }
            else{
                printf("%d < %d\n",y,x);
            }
        }
    }
    system("pause");
    return 0;
}