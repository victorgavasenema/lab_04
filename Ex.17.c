#include <stdio.h>
#include <stdlib.h>

int main (){

    int tempo = 0;
    float Chico, Ze;
    Chico = 1.5;
    Ze = 1.1;

    do{
        Chico = Chico + 0.02;
        Ze = Ze + 0.03;
        tempo ++;
    }while(Chico >= Ze);

    printf("Ze ultrapassou a altura de Chico em %d anos\n",tempo);
    system("pause");
    
    return 0;
}