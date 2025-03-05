#include <stdio.h>

int main()
{
  // Declaração de variáveis para armazenar as informações das cartas

  // Variáveis para a primeira carta
  char estado1;           // letra representando o estado (A-H)
  char codigo1[4];        // código da cidade (ex: A01, B03)
  char cidade1[50];       // nome completo da cidade
  int populacao1;         // número total de habitantes
  float area1;            // área total da cidade em km²
  float pid1;             // Produto Interno Bruto (PIB) da cidade em bilhões
  int pontos_turisticos1; // número total de pontos turísticos conhecidos

  // Variáveis para a segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pid2;
  int pontos_turisticos2;

  // Apresentação do progama
  printf("=======================================\n");
  printf("        SUPER TRUNFO De CIDADES        \n");
  printf("=======================================\n");
  printf("Você ira criar duas cartas com informações de cidades.\n");
  printf("cada carta terá detalhes como estado, população, pib e muito mais!\n");
  printf("Preencha os dados corretamente para criar suas cartas.\n\n");
  printf("Vamos começar!\n");
  // coletando dados da primeira carta
  printf("vamos começar com os dados da primeira carta\n");
  printf("Digite uma única letra (A-H) para representar o estado da cidade. Não use números ou caracteres especiais. ");
  scanf(" %c", &estado1);

  printf("Digite o código da cidade, formado pela letra do estado seguida de um número entre 01 e 04 (exemplo: A01, B03): ");
  scanf("%s", codigo1);

  printf("Digite o nome completo da cidade, sem abreviações: ");
  scanf(" %[^\n]", cidade1); // %[^\n] permite a leitura de strings com espaços

  printf("Digite o número total de habitantes da cidade (somente números, sem pontos ou vírgulas): ");
  scanf("%d", &populacao1);

  printf("Digite a área total da cidade em quilômetros quadrados (exemplo: 523.45): ");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões (exemplo: 3.75 para 3,75 bilhões): ");
  scanf("%f", &pid1);

  printf("Digite o número total de pontos turísticos conhecidos na cidade (apenas números): ");
  scanf("%d", &pontos_turisticos1);

  // Leitura dos dados da segunda carta
  printf("\nAgora vamos preencher os dados da segunda carta\n");
  printf("Digite uma única letra (A-H) para representar o estado da cidade. Não use números ou caracteres especiais. ");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade, formado pela letra do estado seguida de um número entre 01 e 04 (exemplo: A01, B03): ");
  scanf("%s", codigo2);

  printf("Digite o nome completo da cidade, sem abreviações: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite o número total de habitantes da cidade (somente números, sem pontos ou vírgulas): ");
  scanf("%d", &populacao2);

  printf("Digite a área total da cidade em quilômetros quadrados (exemplo: 523.45): ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões (exemplo: 3.75 para 3,75 bilhões): ");
  scanf("%f", &pid2);

  printf("Digite o número total de pontos turísticos conhecidos na cidade (apenas números): ");
  scanf("%d", &pontos_turisticos2);

  // Apresentação dos dados cadastradas
  printf("\n=====================================\n");
  printf("          CARTA 1 - DETALHES           \n");
  printf("=======================================\n");

  printf("Estado               : %c\n", estado1);
  printf("Código da Carta      : %s\n", codigo1);
  printf("Nome da Cidade       : %s\n", cidade1);
  printf("População            : %d habitantes\n", populacao1);
  printf("Área                 : %.2f km²\n", area1);
  printf("Produto Interno Bruto: %.2f bilhões\n", pid1);
  printf("Pontos Turísticos    : %d locais\n", pontos_turisticos1);

  printf("=======================================\n");
  printf("          CARTA 2 - DETALHES           \n");
  printf("=======================================\n");

  printf("Estado               : %c\n", estado2);
  printf("Código da Carta      : %s\n", codigo2);
  printf("Nome da Cidade       : %s\n", cidade2);
  printf("População            : %d habitantes\n", populacao2);
  printf("Área                 : %.2f km²\n", area2);
  printf("Produto Interno Bruto: %.2f bilhões\n", pid2);
  printf("Pontos Turísticos    : %d locais\n", pontos_turisticos2);

  // Fim do progama
  printf("\nAs cartas foram cadastradas com sucesso!\n");
  return 0;
}