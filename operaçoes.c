#include <stdio.h>
 
    int main() {
        /*
        soma (+)
        subtraçao (-)
        multiplicaçao (*)
        divisao (/)

        */

        int numero1, numero2;
        int soma, subtraçao, multiplicaçao, divisao; 

        printf("Digite o primeiro número: \n");
        scanf("%d", &numero1);

        printf("Digite o segundo número: \n");
        scanf("%d", &numero2);


        //operação soma
        soma = numero1 + numero2;

        //operação subtração
         subtraçao = numero1 - numero2;

        //operação multiplicação
         multiplicaçao = numero1 * numero2;

        //operação divisão
        divisao = numero1 / numero2

    printf("Resultado da soma é: %d\n", soma);
    printf("Resultado da subtraçao é: %d\n", subtraçao);            
    printf("Resultado da multipliaçao é: %d\n", multiplicaçao);    
    printf("Resultado da divisao é: %d\n", divisao);

    }
