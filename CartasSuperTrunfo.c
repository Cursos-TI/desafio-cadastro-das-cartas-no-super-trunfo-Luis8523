#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, população, área, PIB, número de pontos turísticos.

    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_por_capita1, pib_por_capita2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nDigite o código da segunda carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_por_capita1 = pib1 / populacao1;
    pib_por_capita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas
    printf("\nDados das Cartas Cadastradas:\n");

    // Exibição da primeira carta
    printf("\nCarta %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           codigo1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_por_capita1);

    // Exibição da segunda carta       
    printf("\nCarta %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           codigo2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_por_capita2);

    return 0;
}
