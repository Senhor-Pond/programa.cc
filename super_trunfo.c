#include <stdio.h>

  int main(){

      char estado[10], cidade[20], cod_carta[5]; 
      float area_cidade, pib;
      int pontos_turisticos, população;  

   printf("CADASTRAR CARTA 1\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado);
    
    printf("Código da Carta: ");
    scanf("%s", &cod_carta);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &população);

    printf("Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Carta 1:\n");
    printf("Estado:%s \n", estado);
    printf("Código da Carta:%s \n", cod_carta);
    printf("Nome da Cidade:%s \n", cidade);
    printf("População:%d \n", população);
    printf("Área da Cidade:%f \n", area_cidade);
    printf("PIB:%f \n", pib);
    printf("Número de Pontos Turísticos:%d \n", pontos_turisticos);





  }