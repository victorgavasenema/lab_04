#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int quantidade;
    int cem, cinquenta, vinte, dez, cinco, dois, um;
    
    cem = 0;
    cinquenta = 0;
    vinte = 0;
    dez = 0;
    cinco = 0;
    dois = 0;
    um = 0;
    
    printf("Digite o valor de saque: \n");
    scanf("%d",&quantidade);
    if(quantidade >= 100){
        do{
            cem = cem + 1;
            quantidade = quantidade - 100;
        }while(quantidade >= 100);
    }
    if(quantidade >= 50){
        do{
            cinquenta = cinquenta + 1;
            quantidade = quantidade - 50;
        }while(quantidade >= 50);
    }
    if(quantidade >= 20){
        do{
            vinte = vinte + 1;
            quantidade = quantidade - 20;
        }while(quantidade >= 20);
    }
    if(quantidade >= 10){
        do{
            dez = dez + 1;
            quantidade = quantidade - 10;
        }while(quantidade >= 10);
    }
    if(quantidade >= 5){
        do{
            cinco = cinco + 1;
            quantidade = quantidade - 5;
        }while(quantidade >= 5);
    }
    if(quantidade >= 2){
        do{
            dois = dois + 1;
            quantidade = quantidade - 2;
        }while(quantidade >= 2);
    }
    if(quantidade >= 1){
        do{
            um = um + 1;
            quantidade = quantidade - 1;
        }while(quantidade >= 1);
    }
    
    printf("Notas do saque: \n");
    printf("%d 100 reais\n",cem);
    printf("%d 50 reais\n",cinquenta);
    printf("%d 20 reais\n",vinte);
    printf("%d 10 reais\n",dez);
    printf("%d 5 reais\n",cinco);
    printf("%d 2 reais\n",dois);
    printf("%d 1 real\n",um);
    
    return 0;
}