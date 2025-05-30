#include <stdio.h>

// Desafio Super Trunfo - Países
// Este programa cadastra duas cartas com atributos de cidades e compara os valores.
// o int da populacao foi alterado por unsigned long int para suportar numeros maiores. 
int main() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_por_capita1, pib_por_capita2;
    float super_poder1, super_poder2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nDigite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_por_capita1 = pib1 / populacao1;
    pib_por_capita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_por_capita1 + (1 / densidade_populacional1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_por_capita2 + (1 / densidade_populacional2);

    // Exibição dos Dados das Cartas
    printf("\nDados das Cartas Cadastradas:\n");

    printf("\nCarta %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n",
           codigo1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_por_capita1, super_poder1);

    printf("\nCarta %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n",
           codigo2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_por_capita2, super_poder2);

    // Comparação das cartas atributo por atributo
    printf("\nComparação de Cartas:\n");

    // População - Maior valor vence
    printf("População: Carta %d venceu (1)\n", (populacao1 > populacao2) ? 1 : 2);

    // Área - Maior valor vence
    printf("Área: Carta %d venceu (1)\n", (area1 > area2) ? 1 : 2);

    // PIB - Maior valor vence
    printf("PIB: Carta %d venceu (1)\n", (pib1 > pib2) ? 1 : 2);

    // Pontos Turísticos - Maior valor vence
    printf("Pontos Turísticos: Carta %d venceu (1)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2);

    // Densidade Populacional - **Menor valor vence**
    printf("Densidade Populacional: Carta %d venceu (0)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2);

    // PIB per Capita - Maior valor vence
    printf("PIB per Capita: Carta %d venceu (1)\n", (pib_por_capita1 > pib_por_capita2) ? 1 : 2);

    // Super Poder - Maior valor vence
    printf("Super Poder: Carta %d venceu (1)\n", (super_poder1 > super_poder2) ? 1 : 2);

    return 0;
}
