#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int linhas, i, j, z = 1;
    printf("Digite um numero para quantidade de linhas: \n");
    scanf("%d",&linhas);
    
    if(linhas >= 0){
        for(i = 1; i <= linhas; i++){
            for(j = 1; j <= i; j++){
                printf("%d ",z);
                z = z + 1;
            }
            printf("\n");
        }
    }
    
    else{
        printf("Valor invalido");
    } 
    
    return 0;
}