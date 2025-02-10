#include<stdio.h>

int main () {

    char Estado;
    char codigodacarta[4];
    char Nomedacidade[50];
    int populacao; // Renomeado para evitar o caractere especial
    float Areaemkm;
    float PIB;
    int numerodepontosturisticos;

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado); // Espaço antes de %c para ignorar caracteres de nova linha

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nomedacidade); // Captura toda a linha incluindo espaços

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &Areaemkm);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Letra do Estado: %c \n", Estado);
    printf("Codigo da carta: %s \n", codigodacarta);
    printf("Nome da cidade: %s \n", Nomedacidade);
    printf("População: %d \n", populacao);
    printf("Area em km: %f \n", Areaemkm);
    printf("PIB: %f \n", PIB);
    printf("Números de pontos turisticos: %d \n", numerodepontosturisticos);

    return 0;
}