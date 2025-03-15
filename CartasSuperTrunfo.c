#include <stdio.h>

int main()
{
  // Declaração das variáveis para a carta 1
  char estado1;           // Letra de 'A' a 'H' representando o estado
  char codigo1[5];        // Código da carta (ex.: A01, B03)
  char cidade1[50];       // Nome da cidade
  int populacao1;         // Número de habitantes
  float area1;            // Área em km²
  float pib1;             // PIB em bilhões de reais
  int pontos_turisticos1; // Número de pontos turísticos
  float densidade1;       // Densidade populacional (hab/km²)
  float pib_per_capita1;  // PIB per capita (reais)

  // Declaração das variáveis para a carta 2
  char estado2;           // Letra de 'A' a 'H' representando o estado
  char codigo2[5];        // Código da carta (ex.: A01, B03)
  char cidade2[50];       // Nome da cidade
  int populacao2;         // Número de habitantes
  float area2;            // Área em km²
  float pib2;             // PIB em bilhões de reais
  int pontos_turisticos2; // Número de pontos turísticos
  float densidade2;       // Densidade populacional (hab/km²)
  float pib_per_capita2;  // PIB per capita (reais)

  // Apresentação do sistema
  printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n\n");

  // Leitura dos dados da primeira carta
  printf("Digite uma letra entre 'A' e 'H': ");
  scanf(" %c", &estado1);

  printf("Digite um código para a carta, utilize a letra seguida de um número de 01 a 04 (ex.: 'A01'): ");
  scanf("%s", codigo1);

  printf("Digite o nome completo da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite o número de habitantes da cidade, sem pontos ou vírgulas (ex.: 6748000): ");
  scanf("%d", &populacao1);

  printf("Digite a área em km² (ex.: 1200.25): ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhões de reais (ex.: 300.50): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Cálculos para a primeira carta
  densidade1 = populacao1 / area1;                    // Calcula a densidade populacional
  pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita (convertendo PIB de bilhões para reais)

  // Leitura dos dados da segunda carta
  printf("\nAgora, vamos cadastrar a segunda carta\n");

  printf("Digite uma letra entre 'A' e 'H': ");
  scanf(" %c", &estado2);

  printf("Digite um código para a carta, utilize a letra seguida de um número de 01 a 04 (ex.: 'B01'): ");
  scanf("%s", codigo2);

  printf("Digite o nome completo da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite o número de habitantes da cidade, sem pontos ou vírgulas (ex.: 12325000): ");
  scanf("%d", &populacao2);

  printf("Digite a área em km² (ex.: 1521.11): ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhões de reais (ex.: 699.30): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculos para a segunda carta
  densidade2 = populacao2 / area2;                    // Calcula a densidade populacional
  pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita (convertendo PIB de bilhões para reais)

  printf("\n______________________.::Carta 1::._______________________\n");
  printf("Estado:                  %c\n", estado1);
  printf("Código:                  %s\n", codigo1);
  printf("Nome da Cidade:          %s\n", cidade1);
  printf("População:               %d\n", populacao1);
  printf("Área:                    %.2f km²\n", area1);
  printf("PIB:                     %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos:       %d\n", pontos_turisticos1);
  printf("Densidade Populacional:  %.2f hab/km²\n", densidade1);
  printf("PIB per Capita:          %.2f reais\n", pib_per_capita1);

  printf("\n______________________.::Carta 2::._______________________\n");
  printf("Estado:                  %c\n", estado2);
  printf("Código:                  %s\n", codigo2);
  printf("Nome da Cidade:          %s\n", cidade2);
  printf("População:               %d\n", populacao2);
  printf("Área:                    %.2f km²\n", area2);
  printf("PIB:                     %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos:       %d\n", pontos_turisticos2);
  printf("Densidade Populacional:  %.2f hab/km²\n", densidade2);
  printf("PIB per Capita:          %.2f reais\n", pib_per_capita2);
  printf("\n____________________________________________________________\n");
  printf("\nCartas cadastradas com sucesso!\n");
  printf("Pressione ENTER para sair... ");
  getchar(); // Limpa o buffer do \n anterior
  getchar(); // Aguarda o usuário pressionar ENTER para encerrar

  return 0;
}