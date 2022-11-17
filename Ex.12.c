#include <stdio.h>
#include <stdlib.h>

int main()
{
    
  int numero, soma, contador;
  printf("Escreva um numero inteiro: \n");
  scanf("%d",&numero);

  soma = 1;
  contador = 1;
  
  for (contador=2 ; contador <= (numero/ 2.0 +1) ; contador++ ) {
    if ( numero % contador == 0 ) {
      printf("%d ",contador);
      soma = soma + contador;
    }
  }
  
  printf("\nA soma dos divisores eh  %d",soma);
  
  return 0;
}