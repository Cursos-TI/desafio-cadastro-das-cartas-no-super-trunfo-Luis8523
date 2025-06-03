#include <stdio.h>

// Desafio Super Trunfo - Países
// Este programa cadastra duas cartas com atributos de cidades e compara os valores.
// o int da populacao foi alterado por unsigned long int para suportar numeros maiores. 

int main() {
    // Definição das variáveis
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_por_capita1, pib_por_capita2;

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
    densidade_populacional1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade_populacional2 = (area2 > 0) ? (populacao2 / area2) : 0;
    pib_por_capita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0;
    pib_por_capita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;

    // Escolha do atributo para comparação (definido diretamente no código)
    int atributo_escolhido = 1; // Exemplo: 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per Capita

    printf("\n=== Comparação de Cartas ===\n");

    // Comparação usando if e if-else
    if (atributo_escolhido == 1) {  // Comparação por população
        printf("Comparação pelo atributo: População\n");
        printf("Carta 1 (%s): %lu\n", codigo1, populacao1);
        printf("Carta 2 (%s): %lu\n", codigo2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", codigo1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", codigo2);
        }
    } else if (atributo_escolhido == 2) {  // Comparação por área
        printf("Comparação pelo atributo: Área\n");
        printf("Carta 1 (%s): %.2f km²\n", codigo1, area1);
        printf("Carta 2 (%s): %.2f km²\n", codigo2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", codigo1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", codigo2);
        }
    } else if (atributo_escolhido == 3) {  // Comparação por PIB
        printf("Comparação pelo atributo: PIB\n");
        printf("Carta 1 (%s): %.2f bilhões\n", codigo1, pib1);
        printf("Carta 2 (%s): %.2f bilhões\n", codigo2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", codigo1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", codigo2);
        }
    } else if (atributo_escolhido == 4) {  // Comparação por Densidade Populacional (Menor valor vence)
        printf("Comparação pelo atributo: Densidade Populacional\n");
        printf("Carta 1 (%s): %.2f hab/km²\n", codigo1, densidade_populacional1);
        printf("Carta 2 (%s): %.2f hab/km²\n", codigo2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", codigo1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", codigo2);
        }
    } else if (atributo_escolhido == 5) {  // Comparação por PIB per Capita
        printf("Comparação pelo atributo: PIB per Capita\n");
        printf("Carta 1 (%s): %.2f reais\n", codigo1, pib_por_capita1);
        printf("Carta 2 (%s): %.2f reais\n", codigo2, pib_por_capita2);
        if (pib_por_capita1 > pib_por_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", codigo1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", codigo2);
        }
    } else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
