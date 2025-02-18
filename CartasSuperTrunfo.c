#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    printf("Desafio Super Trunfo - Países \n");

    // Variáveis
    int tourist_attractions1, tourist_attractions2;
    float pib1, pib2, density1, density2, population1, population2, area1, area2, percapta1, percapta2;
    char id_city1[4], id_city2[4], name_city1[51], name_city2[51], state1[2], state2[2];
    
    // Cadastro das Cartas
    printf("Infome o estado da carta 01: ");
    scanf("%1s", state1);
    
    printf("\nInfome o código da cidade da carta 01: ");
    scanf("%3s", id_city1);
    
    printf("\nInforme o nome da cidade da carta 01: ");
    scanf("%50s", name_city1);

    printf("\nInforme o PIB da cidade da carta 01: ");
    scanf("%f", &pib1);

    printf("\nInforme a população da cidade da carta 01: ");
    scanf("%f", &population1);

    printf("\nInforme a área do país da carta 01: ");
    scanf("%f", &area1);

    printf("\nInforme o N° de pontos turísticos da cidade da carta 01: ");
    scanf("%d", &tourist_attractions1);

    printf("\nInfome o estado da carta 02: ");
    scanf("%1s", state2);
    
    printf("\nInfome o código da cidade da carta 02: ");
    scanf("%3s", id_city2);
    
    printf("\nInforme o nome da cidade da carta 02: ");
    scanf("%50s", name_city2);

    printf("\nInforme o PIB da cidade da carta 02: ");
    scanf("%f", &pib2);

    printf("\nInforme a população da cidade da carta 02: ");
    scanf("%f", &population2);

    printf("\nInforme a área do país da carta 02: ");
    scanf("%f", &area2);

    printf("\nInforme o N° de pontos turísticos da cidade da carta 02: ");
    scanf("%d", &tourist_attractions2);

    //Cálculo da densidade populacional
    density1 = (population1 / area1);
    density2 = (population2 / area2);

    //Cálculo do PIB per capta
    percapta1 = (pib1 / population1);
    percapta2 = (pib2 / population2);

    // Exibição dos Dados das Cartas e comparação composta da densidade
    printf("\nCarta 01 - %50s (%3s): Densidade de %f e PIB percapta de %f", name_city1, id_city1, density1, percapta1);
    printf("\nCarta 02 - %50s (%3s): Densidade de %f e PIB percapta de %f", name_city2, id_city2, density2, percapta2);

    if(density1 < density2) {
        printf("\nResultado: Carta 1 (%50s) venceu!", name_city1);
    } else {
        printf("\nResultado: Carta 2 (%50s) venceu!", name_city2);
    }

    return 0;
}
