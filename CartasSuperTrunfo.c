#include <stdio.h>

// Desafio Super Trunfo - Países
#include <stdio.h>

int main() {
    // Definição das variáveis
    char nome_pais1[30], nome_pais2[30];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_por_capita1, pib_por_capita2;
    int atributo1, atributo2;

    // Cadastro das cartas
    printf("Digite o nome do país da primeira carta: ");
    scanf("%s", nome_pais1);
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

    printf("\nDigite o nome do país da segunda carta: ");
    scanf("%s", nome_pais2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade_populacional1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade_populacional2 = (area2 > 0) ? (populacao2 / area2) : 0;
    pib_por_capita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0;
    pib_por_capita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;

    // Menu para escolha dos atributos
    printf("\nEscolha dois atributos para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - PIB per Capita\n");

    do {
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 5);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Função para obter valores dos atributos
    float obter_valor(int atributo, float *valor1, float *valor2, int *menorVence) {
        *menorVence = 0;
        switch (atributo) {
            case 1: *valor1 = populacao1; *valor2 = populacao2; break;
            case 2: *valor1 = area1; *valor2 = area2; break;
            case 3: *valor1 = pib1; *valor2 = pib2; break;
            case 4: *valor1 = densidade_populacional1; *valor2 = densidade_populacional2; *menorVence = 1; break;
            case 5: *valor1 = pib_por_capita1; *valor2 = pib_por_capita2; break;
        }
    }

    // Comparação dos dois atributos
    float valor1_A, valor2_A, valor1_B, valor2_B;
    int menorVence_A, menorVence_B;

    obter_valor(atributo1, &valor1_A, &valor2_A, &menorVence_A);
    obter_valor(atributo2, &valor1_B, &valor2_B, &menorVence_B);

    printf("\n=== Comparação das Cartas ===\n");
    printf("Comparando %s (%s) com %s (%s)...\n", nome_pais1, codigo1, nome_pais2, codigo2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1_A, valor2_A);
    printf("Atributo 2: %.2f vs %.2f\n", valor1_B, valor2_B);

    float soma1 = valor1_A + valor1_B;
    float soma2 = valor2_A + valor2_B;

    // Determinar vencedor baseado na soma
    if (soma1 == soma2) {
        printf("Resultado: Empate!\n");
    } else if (soma1 > soma2) {
        printf("Resultado: %s (%s) venceu!\n", nome_pais1, codigo1);
    } else {
        printf("Resultado: %s (%s) venceu!\n", nome_pais2, codigo2);
    }

    return 0;
}
