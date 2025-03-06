#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cidades
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Digite a sigla do estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);  // Lê o nome da cidade com espaços
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calcula densidade populacional e PIB per capita da primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite a sigla do estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o código da cidade (ex: B01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);  // Lê o nome da cidade com espaços
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcula densidade populacional e PIB per capita da segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibe os dados das cidades
    printf("\nDados das Cidades:\n");

    printf("\nCidade 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\nCidade 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Comparação das cidades com base na população
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Cidade 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Cidade 2 - %s (%s): %d\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Cidade 1 (%s) venceu!\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Cidade 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: As cidades empataram!\n");
    }

    return 0;
}
