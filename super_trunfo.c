#include <stdio.h>

int main() {

    // Declaração de variáveis para a Carta 1 e Carta 2
    char estado1, estado2;  // Var tipo char para armazenar caracteres.
    char codigo_carta1[4], codigo_carta2[4];    //Var tipo char; Arrays de caracteres (4 caracteres).
    char nome_cidade1[40], nome_cidade2[40];    
    unsigned long int populacao1, populacao2;
    int num_pontos_turisticos1, num_pontos_turisticos2;    //Var do tipo int para armazenar números inteiros.
    float area1, area2;    //Variáveis do tipo float para armazenar números reais.
    float pib1, pib2;    
    float pib_perCapta1, pib_perCapta2;
    float densidade_pop1, densidade_pop2;
    float super_poder1, super_poder2; 

    // Solicitação de dados para a primeira carta
    printf("==============================================================\n");
    printf("                Insira os dados para a Carta 1       \n");
    printf("==============================================================\n");

    printf("Insira uma letra de 'A' a 'H' para representar o primeiro estado.\n");
    printf("Estado: ");
    scanf(" %c", &estado1);   //Lê um caractere; o espaço antes de %c serve para evitar problemas com o buffer de entrada.

    printf("\nInsira a letra do estado, já fornecida anteriormente, seguida de um número de 01 a 04.\n");
    printf("Código: ");
    scanf(" %3s", codigo_carta1);   //Lê uma string de até 3 caracteres.

    printf("\nInsira o nome da primeira cidade.\n");
    printf("Nome da Cidade: ");
    getchar();    // Captura o '\n' deixado pelo scanf anterior para evitar problemas no fgets.
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);  // Lê uma string com espaços.

    printf("\nInsira a quantidade de habitantes da cidade.\n");
    printf("População: ");
    scanf(" %lu", &populacao1);  //Lê um número inteiro.

    printf("\nInsira a área da cidade em quilômetros quadrados.\n");
    printf("Área: ");
    scanf(" %f", &area1);  //Lê um número decimal (float).

    printf("\nInsira o Produto Interno Bruto da cidade.\n");
    printf("PIB: ");
    scanf(" %f", &pib1);   //Lê um número decimal (float).

    printf("\nInsira a quantidade de pontos turísticos da primeira cidade.\n");
    printf("Pontos Turísticos: ");
    scanf(" %d", &num_pontos_turisticos1);    //Lê um número inteiro.

    pib_perCapta1 = (pib1 * 1000000000) / (float) populacao1; // Convertendo o PIB de bilhões para reais antes de calcular o PIB per capita
    densidade_pop1 = (float) populacao1 / area1;    // Cálculo da densidade populacional.
    super_poder1 = populacao1 + area1 + pib1 + num_pontos_turisticos1 + pib_perCapta1 + (1 / densidade_pop1);

    // Solicitação de dados para a segunda carta.
    printf("\n==============================================================\n");
    printf("                Insira os dados para a Carta 2       \n");
    printf("==============================================================\n");
     
    printf("Insira uma letra de 'A' a 'H' para representar o segundo estado.\n");
    printf("Estado: ");
    scanf(" %c", &estado2);     
    printf("\nInsira a letra do estado, já fornecida anteriormente, seguida de um número de 01 a 04.\n");
    printf("Código: ");
    scanf(" %3s", codigo_carta2);   

    printf("\nInsira o nome da segunda cidade.\n");
    printf("Nome da Cidade: ");
    getchar();   
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);   

    printf("\nInsira a quantidade de habitantes da cidade.\n");
    printf("População: ");
    scanf(" %lu", &populacao2); 

    printf("\nInsira a área da cidade em quilômetros quadrados.\n");
    printf("Área: ");
    scanf(" %f", &area2);   

    printf("\nInsira o Produto Interno Bruto da cidade.\n");
    printf("PIB: ");
    scanf(" %f", &pib2);    

    printf("\nInsira a quantidade de pontos turísticos da primeira cidade.\n");
    printf("Pontos Turísticos: "); 
    scanf(" %d", &num_pontos_turisticos2); 

    pib_perCapta2 = (pib2 * 1000000000) / (float) populacao2;  // Cálculo do PIB per Capta; Convertendo o PIB de bilhões para reais antes de calcular o PIB per capita.
    densidade_pop2 = (float) populacao2 / area2;    // Cálculo da densidade populacional.
    super_poder2 = populacao2 + area2 + pib2 + num_pontos_turisticos2 + pib_perCapta2 + (1 / densidade_pop2);   // Soma de todos os atributos numéricos da carta.
    
    // Exibição dos dados da Carta 1.
    printf("\n==============================================================\n");
    printf("                            CARTA 1                           \n");
    printf("==============================================================\n");
 
    printf("Estado: %c \n", estado1);   //Exibe o estado.
    printf("Código: %3s \n", codigo_carta1);    //Exibe o código da carta.
    printf("Nome da Cidade: %s", nome_cidade1);     //Exibe o nome da cidade.
    printf("População: %lu\n", populacao1);     //Exibe a quantidade de habitantes.
    printf("Área: %.2f km² \n", area1);     //Exibe a área formatada com 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);   //Exibe o pib formatada com 2 casas decimais.
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);    //Exibe a quantidade de pontos turísticos.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);  //Exibe a densidade populacional com 2 casas decimais.
    printf("PIB per Capta: %.2f reais\n\n", pib_perCapta1);   //Exibe o pib per capta com 2 casas decimais.

    // Exibição dos dados da Carta 2.
    printf("==============================================================\n");
    printf("                            CARTA 2                           \n");
    printf("==============================================================\n");

    printf("Estado: %c\n", estado2);  
    printf("Código: %3s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2); 
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2); 
    printf("PIB per Capta: %.2f reais\n\n", pib_perCapta2);

    // Comparação de cartas
    // Utilizado o operador relacional 'maior e menor que '(> <) para fazer a comparação entre os valores.
    printf("\n==============================================================\n");
    printf("                       COMPARAÇÃO DE CARTAS                      \n");
    printf("==============================================================\n");

    printf("População: Carta %d venceu (1)\n", populacao1 > populacao2 ? 1 : 2);  //Ganha a carta que tiver a maior população.
    printf("Área: Carta %d venceu (1)\n", area1 > area2 ? 1 : 2);  //Ganha a carta que tiver a maior área.
    printf("PIB: Carta %d venceu (1)\n", pib1 > pib2 ? 1 : 2);  //Ganha a carta que tiver o maior pib.
    printf("Pontos Turísticos: Carta %d venceu (1)\n", num_pontos_turisticos1 > num_pontos_turisticos2 ? 1 : 2);    //Ganha a carta que tiver a maior qde de pontos turísticos.
    printf("Densidade Populacional: Carta %d venceu (0)\n", densidade_pop1 < densidade_pop2 ? 1 : 2); //Aqui a lógica é invertida, pois a menor densidade é considerada melhor.
    printf("PIB per Capita: Carta %d venceu (1)\n", pib_perCapta1 > pib_perCapta2 ? 1 : 2); //Ganha quem tiver o maior PIB per capita.
    printf("Super Poder: Carta %d venceu (1)\n\n", super_poder1 > super_poder2 ? 1 : 2);    //Ganha a carta que tiver o maior "super poder".

    return 0;   //Indica que o programa foi executado com sucesso.
}
