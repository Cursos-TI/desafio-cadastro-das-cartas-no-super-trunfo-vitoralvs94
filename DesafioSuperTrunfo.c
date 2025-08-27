#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Variáveis calculadas
    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    // Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (apenas letra entre A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (apenas letra entre A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição das cartas
    printf("*** INFORMAÇÕES DA PRIMEIRA CARTA ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("*** INFORMAÇÕES DA SEGUNDA CARTA ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}