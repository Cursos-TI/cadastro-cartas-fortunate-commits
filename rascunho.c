#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados
  // Área para exibição dos dados da cidade
  int carta[3];
  char estado[2];
  char nome_da_cidade[50];
  int populacao;
  float area;
  float pib;
  int numero_de_pontos_turisticos;

  printf("Digite o número da carta: \n");
  scanf("%d", &carta);

  printf("Digite a letra inicial do seu estado, de A a H: \n");
  scanf("%s", &estado);

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

  printf("\n");
  printf("Carta: %d \n", carta);
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", carta, estado);
  printf("Nome da Cidade: %s \n", nome_da_cidade);
  printf("População: %d \n", populacao);
  printf("Área: %f \n", area);
  printf("PIB: %f \n", pib);
  printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos);
  printf("\n");

return 0;
} 