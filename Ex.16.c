#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int op, n1, n2;
    float resultado;

    do{
        do{
          printf ("Calculadora\n");
          printf ("1. Adicao\n");
          printf ("2. Subtracao\n");
          printf ("3. Multiplicacao\n");
          printf ("4. Divisao\n");
          printf ("5. Sair\n");
 
    scanf("%d", &op);
    
    switch(op){
        case 1:
        printf("Coloque os numeros para serem adicionados: ");
        scanf ("%d%d", &n1, &n2);
        resultado = n1 + n2;
        printf ("Resultado: %.2f\n", resultado);
        break;
        
        case 2:
        printf("Coloque os numeros para serem subtraidos: ");
        scanf ("%d%d", &n1, &n2);
        resultado = n1 - n2;
        printf ("Resultado: %.2f\n", resultado);
        break;

        case 3:
        printf("Coloque os numeros para serem multiplicados: ");
        scanf ("%d%d", &n1, &n2);
        resultado = n1 * n2;
        printf ("Resultado: %.2f\n", resultado);
        break;
        
        case 4:
        printf("Coloque os numeros para serem divididos: ");
        scanf ("%d%d", &n1, &n2);
        resultado = n1 / n2;
        printf ("Resultado: %.2f\n", resultado);
        break;
        
       case 5:
        system ("pause");
        return 0;
        }

        if (op < 1 || op > 5){
        printf ("Opcao invalida");
        }
    
        } while (op < 1 || op > 5);
    } while (op != 5);

    system ("pause");
    return 0;
}