#include <stdio.h>
  
   int main() {
    
    char nome[20];
    int idade;
    float altura;

     
    printf("Digite seu nome:");
     scanf("%s", &nome);
    printf("Seu nome é: %s \n", nome);
     printf("Digite sua idade:");
      scanf("%d", &idade);
      printf("Sua idade é: %d \n", idade);
      printf("Informe sua altura:");
      scanf("%f", &altura);
    printf("Sua altura é: %.2f \n", altura);

    return 0;

   





   }