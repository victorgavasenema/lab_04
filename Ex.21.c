#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador1, contador2, n1, n2, x, y;
   
    x = 0;
    y = 0;
    
    do{
    printf("Digite dois numeros inteiros maiores que zero: \n");
    scanf("%d %d",&n1,&n2);

    }while(n1 < 0 || n2 < 0);

    for(contador1 = n1; contador1 <= n2; contador1++){
        x = 0;
        for(contador2 = 1; contador2 <= contador1; contador2++){
            if(contador1 % contador2 == 0){
                x = x + 1;
            }
        }
        if(x == 2){
            y = y + 1;
        }
    }
    printf("Quantidade primos entre %d e %d, contado os digitados eh: %d\n",n1, n2, x);

    return 0;
}