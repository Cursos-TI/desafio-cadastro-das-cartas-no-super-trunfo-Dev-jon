#include <stdio.h>

int main() {
    
    // Variáveis 1

    char estado1;
    int cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    
    // Variáveis 2

    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS (NOVATO) ===\n");

    // Cadastro 1

    printf("\nCadastro da primeira carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro 2

    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição 

    printf("\n=== DADOS DAS CARTAS CADASTRADAS ===\n");

    // Primeira 

    printf("\nCarta %c%02d:\n", estado1, cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Segunda 

    printf("\nCarta %c%02d:\n", estado2, cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}