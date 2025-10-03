#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int carta1, carta2;
  char estado1[3], estado2[3];
  char codigo_da_carta1[4], codigo_da_carta2[4];
  char nome_da_cidade1[50], nome_da_cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

  // Área para entrada de dados
  // 1ª Carta

  printf("Digite o número da carta: \n");
  scanf("%d", &carta1);

  printf("Digite a letra inicial do seu estado de A a H: \n");
  scanf("%s", &estado1);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_da_cidade1);

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
  scanf("%s", &estado2);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_da_cidade2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area2);

  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &numero_de_pontos_turisticos2);

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
  printf("\n");

return 0;
} 