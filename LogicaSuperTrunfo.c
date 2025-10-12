#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    int carta1, carta2;
    char estado1[3], estado2[3];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Área para entrada de dados
    // 1ª Carta

    printf("Digite o número da carta: \n");
    scanf("%d", &carta1);

    printf("Digite a letra inicial do seu estado de A a H: \n");
    scanf("%s", estado1);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%f", &populacao1);

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
    scanf("%f", &populacao2);

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

    // Área para exibição dos dados da cidade
    // 1ª Carta

    printf("\n");
    printf("Carta: %d \n", carta1);
    printf("Estado: %s \n", estado1);
    printf("Código: %s0%d \n", estado1, carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %f \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);
    printf("\n");

    // Área para exibição dos dados da cidade
    // 2ª Carta

    printf("\n");
    printf("Carta: %d \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s0%d \n", estado2, carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %f \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);
    printf("\n");

    return 0;
}