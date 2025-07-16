#include <stdio.h>

int main(){
    char letra1;
    char codigo1[10];
    char cidade1[20];
    int populacao1, pontos1;
    float area1, pib1;

    printf("Letra do estado: ");
    scanf(" %c", &letra1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);

    printf("CARTA 1:\n");
    printf("Cidade: %s\n", cidade1);
    printf("Letra do Estado: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("População: %d\n", populacao1);
    printf("Área em metros: %f\n", area1);
    printf("PIB: %f\n", pib1);

    char letra2;
    char codigo2[10];
    char cidade2[20];
    int populacao2, pontos2;
    float area2, pib2;

    printf("Letra do estado: ");
    scanf(" %c", &letra2);

    printf("Código da carta: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("CARTA 2:\n");
    printf("Cidade: %s\n", cidade2);
    printf("Letra do Estado: %c\n", letra2);
    printf("Código: %s\n", codigo2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("População: %d\n", populacao2);
    printf("Área em metros: %f\n", area2);
    printf("PIB: %f\n", pib2);

    return 0;
}