#include <stdio.h>

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    int carta1, carta2;
    char estado1[3], estado2[3];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Área para entrada de dados
    // 1ª Carta

    printf("Digite o número da carta: \n");
    scanf("%d", &carta1);

    printf("Digite a letra inicial do seu estado de A a H: \n");
    scanf("%s", estado1);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Área para entrada de dados
    // 2ª Carta

    printf("\n");
    printf("Digite o número da carta: \n");
    scanf("%d", &carta2);

    printf("Digite a letra inicial do seu estado de A a H: \n");
    scanf("%s", estado2);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Área para execução das operações
    // 1ª Carta

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Área para execução das operações
    // 2ª Carta

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Área para calcular o Super Poder
    // 1ª Carta

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)numero_de_pontos_turisticos1 + 1/densidade_populacional1 + pib_per_capita1;

    // Área para calcular o Super Poder
    // 2ª Carta

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)numero_de_pontos_turisticos2 + 1/densidade_populacional2 + pib_per_capita2;

    // Área para exibição dos dados da cidade
    // 1ª Carta

    printf("\n");
    printf("Carta: %d \n", carta1);
    printf("Estado: %s \n", estado1);
    printf("Código: %s0%d \n", estado1, carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);
    printf("Super Poder: %.2f \n", super_poder1);
    printf("\n");

    // Área para exibição dos dados da cidade
    // 2ª Carta

    printf("\n");
    printf("Carta: %d \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s0%d \n", estado2, carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);
    printf("Super Poder: %.2f \n", super_poder2);
    printf("\n");

    // Área para comparção das cartas
    // 1ª Carta x 2ª Carta

    printf("***Comparação das Cartas***\n");

    if( (float)populacao1 > populacao2){
        printf("População: Carta 1 venceu (1) \n");
    } if( (float)populacao1 < populacao2){
        printf("População: Carta 2 venceu (0) \n");
    } else {
        printf("População: Cartas empatadas \n");
    }
    
    if( area1 > area2){
        printf("Área: Carta 1 venceu (1) \n");
    } if( area1 < area2){
        printf("Área: Carta 2 venceu (0) \n");
    } else {
        printf("Área: Cartas empatadas \n");
    }

    if( pib1 > pib2){
        printf("PIB: Carta 1 venceu (1) \n");
    } if( pib1 < pib2){
        printf("PIB: Carta 2 venceu (0) \n");
    } else {
        printf("PIB: Cartas empatadas \n");
    }

    if( (float)numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
        printf("Pontos Turísticos: Carta 1 venceu (1) \n");
    } if( (float)numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
        printf("Pontos Turísticos: Carta 2 venceu (0) \n");
    } else {
        printf("Pontos Turísticos: Cartas empatadas \n");
    }

    if( 1/densidade_populacional1 > 1/densidade_populacional2){
        printf("Densidade Populacional: Carta 1 venceu (1) \n");
    } if( 1/densidade_populacional1 < 1/densidade_populacional2){
        printf("Densidade Populacional: Carta 2 venceu (0) \n");
    } else {
        printf("Densidade Populacional: Cartas empatadas \n");
    }

    if( pib_per_capita1 > pib_per_capita2){
        printf("PIB per Capita: Carta 1 venceu (1) \n");
    } if( pib_per_capita1 < pib_per_capita2){
        printf("PIB per Capita: Carta 2 venceu (0) \n");
    } else {
        printf("PIB per Capita: Cartas empatadas \n");
    }

    if( super_poder1 > super_poder2){
        printf("Super Poder: Carta 1 venceu (1) \n");
    } if( super_poder1 < super_poder2){
        printf("Super Poder: Carta 2 venceu (0) \n");
    } else {
        printf("Super Poder: Cartas empatadas \n");
    }
   
    return 0;
}