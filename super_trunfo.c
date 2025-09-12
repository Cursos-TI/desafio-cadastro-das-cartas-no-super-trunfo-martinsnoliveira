#include <stdio.h>

int main() {
    char Estado1 = 'a'; //Recebe o código do Estado, sendo carateres de 'A' a 'H'.
    char Estado2 = 'b'; //Recebe o código do Estado, sendo carateres de 'A' a 'H'.
    char cod_carta1[4] = "A01"; //A letra do estado seguida de um número de 01 a 04.
    char cod_carta2[4] = "A02"; //A letra do estado seguida de um número de 01 a 04.
    char nome_cidade1[30] = "ABCD"; //Recebe o nome da cidade.
    char nome_cidade2[30] = "EFGH";
    int populacao1 = 10; // recebe o número de habitantes da cidade.
    int populacao2 = 20;
    float area_cidade1 = 30; //area da cidade em km2
    float area_cidade2 = 40;
    float pib_cidade1 = 50; //O Produto Interno Bruto da cidade.
    float pib_cidade2 = 60;
    int ptos_turisticos1 = 70; //numero de pontos turísticos da cidade.
    int ptos_turisticos2 = 80;
    float dens_pop1; // densidade populacional da cidade1. Será calculado com populacao1/area_cidade1.
    float dens_pop2; // densidade populacional da cidade2. Será calculado com populacao2/area_cidade2.
    float pibpcapta1; // PIB per capta da cidade 1. Será calculado com pib_cidade1/populacao1.
    float pibpcapta2; // PIB per capta da cidade 2. Será calculado com pib_cidade2/populacao2.

    /*
    Cabeçalho do jogo
    */
    printf("*** BEM-VINDO AO JOGO 'eSUPER-TRUNFO' ***\n");
    printf("=========================================\n");
    printf(" \n");
    
    /*
    Início da interação com o usuário para entrada dos dados das cartas.
    */
   
    printf("Vamos começar digitando os dados da CARTA 1\n");
    printf(" \n");

    printf("Digite o Código do Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &Estado1);
    printf("Você digitou a letra %c \n", Estado1);
    printf(" \n");

    printf("Digite o código da carta, sendo a letra do Estado + uma sequencia de 01 a 04: ");
    scanf("%s", cod_carta1);
    printf("Você digitou o código %s para a CARTA  1.\n", cod_carta1);
    printf(" \n");

    printf("Digite o nome da cidade: ");
    scanf(" %30[^\n]", nome_cidade1);
    printf("A cidade que você digitou foi %s\n", nome_cidade1);
    printf(" \n");

    printf("Qual o número de habitantes da cidade? ");
    scanf("%d", &populacao1);
    printf("Nessa cidade há %d habitantes.\n", populacao1);
    printf(" \n");

    printf("Qual a área da cidade em quilometros quadrados? ");
    scanf("%f", &area_cidade1);
    printf("A cidade tem uma área de %.2f km2.\n", area_cidade1);
    printf(" \n");

    printf("Qual o PIB em US$ ");
    scanf("%f", &pib_cidade1);
    printf("O produto interno bruto é de US$ %.2f.\n", pib_cidade1);
    printf(" \n");

    printf("Quantos pontos turisticos ha na cidade? ");
    scanf("%d", &ptos_turisticos1);
    printf("Voce informou %d pontos turistcos\n", ptos_turisticos1);
    printf("   \n");

    dens_pop1 = populacao1/area_cidade1;
    pibpcapta1 = pib_cidade1/populacao1;
    printf("Com os dados digitados, temos as seguintes informações:\n");
    printf("Densidade populacional de %.2f hab/km2\n", dens_pop1);
    printf("PIB per capta de %.2f US$/hab\n", pibpcapta1);

    printf("Agora, entraremos com os dados da CARTA 2\n");
    printf(" \n");

    printf("Digite o Código do Estado (uma letra de 'A' a 'H'):");
    scanf(" %c", &Estado2);
    printf("Você digitou a letra %c \n", Estado2);
    printf(" \n");

    printf("Digite o código da carta, sendo a letra do Estado + uma sequencia de 01 a 04: ");
    scanf("%s", cod_carta2);
    printf("Você digitou o código %s para a CARTA  2.\n", cod_carta2);
    printf(" \n");

    printf("Digite o nome da cidade: ");
    scanf(" %30[^\n]", nome_cidade2);
    printf("A cidade que você digitou foi %s\n", nome_cidade2);
    printf(" \n");

    printf("Qual o número de habitantes da cidade? ");
    scanf("%d", &populacao2);
    printf("Nessa cidade há %d habitantes.\n", populacao2);
    printf(" \n");

    printf("Qual a área da cidade em quilometros quadrados? ");
    scanf("%f", &area_cidade2);
    printf("A cidade tem uma área de %.2f km2.\n", area_cidade2);
    printf(" \n");

    printf("Qual o PIB em US$ ");
    scanf("%f", &pib_cidade2);
    printf("O produto interno bruto é de US$ %.2f.\n", pib_cidade2);
    printf(" \n");

    printf("Quantos pontos turisticos ha na cidade? ");
    scanf("%d", &ptos_turisticos2);
    printf("Voce informou %d pontos turistcos\n", ptos_turisticos2);
    printf(" \n");

    dens_pop2 = populacao2/area_cidade2;
    pibpcapta2 = pib_cidade2/populacao2;
    printf("Com os dados digitados, temos as seguintes informações:\n");
    printf("Densidade populacional de %.2f hab/km2\n", dens_pop2);
    printf("PIB per capta de %.2f US$/hab\n", pibpcapta2);

    /*
    Agora serão apresntadas todos os dados das duas cartas, sequencialmente.
    */

    printf("Esses sao os dados digitados das cartas:\n");
    printf("\n");

    printf("*** CARTA 1 ***\n");
    printf("===============\n");
    printf(" \n");

    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area_cidade1);
    printf("PIB: %.2f\n", pib_cidade1);
    printf("Número de Pontos Turísticos: %d\n", ptos_turisticos1);
    printf("Densidade populacional de %.2f hab/km2\n", dens_pop1);
    printf("PIB per capta de %.2f US$/hab\n", pibpcapta1);
    printf("===");
    printf("  \n");

    printf("*** CARTA 2 ***\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area_cidade2);
    printf("PIB: %.2f\n", pib_cidade2);
    printf("Número de Pontos Turísticos: %d\n", ptos_turisticos2);
    printf("Densidade populacional de %.2f hab/km2\n", dens_pop2);
    printf("PIB per capta de %.2f US$/hab\n", pibpcapta2);
    printf("===");
       
    return 0;

}
