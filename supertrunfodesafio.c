#include <stdio.h>

int main() {
    // Declarando as variáveis para os dados da cidade 1
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;

    // Declarando as variáveis para os dados da cidade 2
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;

    // Leitura dos dados da cidade 1
    printf("Digite o estado da cidade 1: ");
    scanf(" %c", &estado1);  // A leitura do caractere com o espaço para ignorar o '\n'
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]s", cidade1);  // Leitura de strings com espaços
    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);  // Usando unsigned long int
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da cidade 2
    printf("Digite o estado da cidade 2: ");
    scanf(" %c", &estado2);  // A leitura do caractere com o espaço para ignorar o '\n'
    printf("Digite o código da cidade 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]s", cidade2);  // Leitura de strings com espaços
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);  // Usando unsigned long int
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da densidade populacional e PIB per capita para a cidade 1
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais

    // Cálculos da densidade populacional e PIB per capita para a cidade 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais

    // Cálculo do Super Poder para a cidade 1
    float super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Cálculo do Super Poder para a cidade 2
    float super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Comparação dos atributos entre as duas cartas
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2) ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2) ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2) ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparação de Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}
