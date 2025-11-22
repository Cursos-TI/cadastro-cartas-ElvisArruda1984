#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // CARTA 1
    char estado1[3];
    char codigo1[5];
    char cidade1[30];
    int populacao1; 
    float area1;
    float pib1;
    int pontos1;

    //CARTA 2
    char estado2[3];
    char codigo2[5];
    char cidade2[30];
    int populacao2; 
    float area2;
    float pib2;
    int pontos2;
  
    // Área para entrada de dados
    // dados da carta 1
    printf("\n============================\n");
    printf("**** Seja-bem vindo(a)! ****\n");
    printf("============================\n");
    printf("\n");
    printf("=== CARTA 1 ===\n");
    printf("Digite o Estado: "); 
    scanf("%2s", estado1);
    printf("Digite o Código: "); 
    scanf("%4s", codigo1);
    printf("Digite o Nome da Cidade: "); 
    scanf(" %[^\n]", cidade1);
    printf("Digite a quantidade da População: "); 
    scanf("%i", &populacao1);
    printf("Digite a Área: "); 
    scanf("%f", &area1);
    printf("Digite o PIB: "); 
    scanf("%f", &pib1);
    printf("Digite os Pontos Turísticos: "); 
    scanf("%d", &pontos1);
    printf("\n");
    
    //entrada de dados da carta 2
    
    printf("=== CARTA 2 ===\n");
    printf("Digite o Estado: "); 
    scanf("%2s", estado2);
    printf("Digite o Código: "); 
    scanf("%4s", codigo2);
    printf("Digite o Nome da Cidade: "); 
    scanf("  %[^\n]", cidade2);
    printf("Digite a quantidade da População: "); 
    scanf("%i", &populacao2);
    printf("Digite a Área: "); 
    scanf("%f", &area2);
    printf("Digite o PIB: "); 
    scanf("%f", &pib2);
    printf("Digite os Pontos Turísticos: "); 
    scanf("%d", &pontos2);
    printf("\n");
  
    // Área para exibição dos dados da cidade
    
    printf("==== RESULTADO 1 ====\n");
    printf("Estado (A-H): %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("\n");
    
    printf("==== RESULTADO 2 ====\n");
    printf("Estado (A-H): %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("\n");
    
  
    return 0;
}
