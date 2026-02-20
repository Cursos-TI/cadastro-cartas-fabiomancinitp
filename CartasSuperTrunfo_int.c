#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // VARIÁVEIS CARTA 2
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // --- LEITURA CARTA 1 ---
    printf("CARTA 1\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf("%s", cidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontos1);

    // CÁLCULOS CARTA 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1; // Convertendo PIB para valor real

    // --- LEITURA CARTA 2 ---
    printf("\nCARTA 2\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontos2);

    // CÁLCULOS CARTA 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %d | Area: %.2f km2\n", populacao1, area1);
    printf("PIB: %.2f bilhoes | Pontos Turisticos: %d\n", pib1, pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    // --- EXIBIÇÃO CARTA 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %d | Area: %.2f km2\n", populacao2, area2);
    printf("PIB: %.2f bilhoes | Pontos Turisticos: %d\n", pib2, pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}