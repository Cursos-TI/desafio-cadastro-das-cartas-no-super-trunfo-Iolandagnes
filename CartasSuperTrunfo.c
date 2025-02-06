#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf("Desafio Super Trunfo - Países \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int population, area, tourist_attractions;
    float pib;
    char id_city[4];
    char name_city[51];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Infome o código da cidade: ");
    scanf("%3s", id_city);
    
    printf("\nInforme o nome da cidade: ");
    scanf("%50s", name_city);

    printf("\nInforme o PIB da cidade: ");
    scanf("%f", &pib);

    printf("\nInforme o número relacionado a população da cidade: ");
    scanf("%d", &population);

    printf("\nInforme a área do país: ");
    scanf("%d", &area);

    printf("\nInforme o N° de pontos turísticos da cidade: ");
    scanf("%d", &tourist_attractions);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %s\n", id_city);
    printf("Nome da cidade: %s\n", name_city);
    printf("PIB da cidade: %f\n", pib);
    printf("População da cidade: %d\n", population);
    printf("Área da cidade: %d\n", area);
    printf("N° de pontos turísticos da cidade: %d", tourist_attractions);

    return 0;
}
