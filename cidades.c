#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1); // Lê o estado (uma letra)
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê o nome da cidade até a quebra de linha
    printf("População: ");
    scanf("%d", &populacao1); // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê a área da cidade
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Lê o PIB da cidade
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1); // Lê o número de pontos turísticos

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2); // Lê o estado (uma letra)
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2); // Lê o código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Lê o nome da cidade até a quebra de linha
    printf("População: ");
    scanf("%d", &populacao2); // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area2); // Lê a área da cidade
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2); // Lê o PIB da cidade
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2); // Lê o número de pontos turísticos

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("O Estado é: %c\n", estado1);
    printf("O Código da Carta é: %s\n", codigo1);
    printf("O Nome da Cidade é: %s\n", cidade1);
    printf("A População é: %d\n", populacao1);
    printf("A Área é: %.2f km²\n", area1);
    printf("O PIB é: %.2f bilhões de reais\n", pib1);
    printf("O Número de Pontos Turísticos é: %d\n", pontos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("O Estado é: %c\n", estado2);
    printf("O Código da Carta é: %s\n", codigo2);
    printf("O Nome da Cidade é: %s\n", cidade2);
    printf("A População é: %d\n", populacao2);
    printf("A Área é: %.2f km²\n", area2);
    printf("O PIB é: %.2f bilhões de reais\n", pib2);
    printf("O Número de Pontos Turísticos é: %d\n", pontos2);

    return 0;
}
