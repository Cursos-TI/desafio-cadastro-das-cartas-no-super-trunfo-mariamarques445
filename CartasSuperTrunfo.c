#include <stdio.h>

int main() {
    // Variáveis para armazenar dados das cidades
    char estado;
    int numero;
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Cadastro das cidades
    for (int i = 0; i < 8; i++) { // repetição para cada estado
        for (int j = 1; j <= 4; j++) { // repetição para cada cidade dentro de um estado
            printf("Cadastro da Cidade %c%02d:\n", 'A' + i, j);
            printf("População: ");
            scanf("%d", &populacao);
            printf("Área (km2): ");
            scanf("%f", &area);
            printf("PIB (em bilhões de USD): ");
            scanf("%lf", &pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos);

            // Guardando o estado e o da número cidade
            estado = 'A' + i;
            numero = j;
            
        }
    }

    // Dados cadastrados
    printf("\nDados das cidades cadastradas:\n");
    for (int i = 0; i < 8; i++) { 
        for (int j = 1; j <= 4; j++) { 
            printf("Cidade %c%02d:\n", 'A' + i, j);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km2\n", area);
            printf("PIB: %.2f bilhões de USD\n", pib);
            printf("Pontos Turísticos: %d\n\n", pontos_turisticos);
            
        }
    }

    return 0;
}

