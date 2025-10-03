#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados
  // Área para exibição dos dados da cidade
  char estado, codigo_da_carta[4], nome_da_cidade;
  int populacao, numero_de_pontos_turisticos;
  float area, pib; 

  printf("Digite a letra inicial do seu estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo_da_carta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_da_cidade);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area);

  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &numero_de_pontos_turisticos);

  printf("Carta 1");
  printf("Letra inicial do estado: %s", estado);
  printf("Código da carta: %s", codigo_da_carta);
  printf("Nome da cidade: %s", nome_da_cidade);
  printf("Número de habitantes da cidade: %d", populacao);
  printf("Área da cidade em quilômetros quadrados: %f", area);
  printf("Produto interno bruto da cidade: %f", pib);
  printf("Quantidade de pontos turísticos da cidade: %d", numero_de_pontos_turisticos);

return 0;
} 
