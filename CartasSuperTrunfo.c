#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf("Desafio Super Trunfo - Países \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int tourist_attractions;
    float pib, density, population, area, percapta;
    char id_city[4], name_city[51], state[2];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Infome o estado: ");
    scanf("%1s", state);
    
    printf("\nInfome o código da cidade: ");
    scanf("%3s", id_city);
    
    printf("\nInforme o nome da cidade: ");
    scanf("%50s", name_city);

    printf("\nInforme o PIB da cidade: ");
    scanf("%f", &pib);

    printf("\nInforme o número relacionado a população da cidade: ");
    scanf("%f", &population);

    printf("\nInforme a área do país: ");
    scanf("%f", &area);

    printf("\nInforme o N° de pontos turísticos da cidade: ");
    scanf("%d", &tourist_attractions);

    //Cálculo da densidade populacional
    density = (population / area);

    //Cálculo do PIB per capta
    percapta = (pib / population);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s\n", state);
    printf("Código da carta: %s\n", id_city);
    printf("Nome da cidade: %s\n", name_city);
    printf("PIB da cidade: %f\n", pib);
    printf("População da cidade: %f\n", population);
    printf("Área da cidade: %f Km²\n", area);
    printf("N° de pontos turísticos da cidade: %d\n", tourist_attractions);
    printf("Densidade populacional: %f pessoas/Km²\n", density);
    printf("PIB per capta: %f", percapta);

    return 0;
}
