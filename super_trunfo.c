    #include <stdio.h>

    int main() {
    
        // Declaração de variáveis para a Carta 1 e Carta 2
        char estado1, estado2;  // Var tipo char para armazenar caracteres.
        char codigo_carta1[4], codigo_carta2[4];    //Var tipo char; Arrays de caracteres (4 caracteres).
        char nome_cidade1[40], nome_cidade2[40];    
        unsigned long int populacao1, populacao2;
        int num_pontos_turisticos1, num_pontos_turisticos2, opcao;    //Var do tipo int para armazenar números inteiros.
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

        pib_perCapta1 = (pib1 * 1000000000) / (float) populacao1; // Convertendo o PIB de bilhões para reais antes de calcular o PIB per capita
        densidade_pop1 = (float) populacao1 / area1;    // Cálculo da densidade populacional.
        super_poder1 = (float) populacao1 + area1 + pib1 + (float) num_pontos_turisticos1 + pib_perCapta1 + (1.0 / densidade_pop1); // Soma de todos os atributos numéricos da carta.
    
        pib_perCapta2 = (pib2 * 1000000000) / (float) populacao2;  
        densidade_pop2 = (float) populacao2 / area2;    
        super_poder2 = (float) populacao2 + area2 + pib2 + (float) num_pontos_turisticos2 + pib_perCapta2 + (1.0 / densidade_pop2);   
        
        // Exibição dos dados da Carta 1.
        printf("\n==============================================================\n");
        printf("                            CARTA 1                           \n");
        printf("==============================================================\n");
     
        printf("Estado: %c \n", estado1);   //Exibe o estado.
        printf("Código: %3s \n", codigo_carta1);    //Exibe o código da carta.
        printf("Nome da Cidade: %s", nome_cidade1);     //Exibe o nome da cidade.
        printf("População: %lu habitantes\n", populacao1);     //Exibe a quantidade de habitantes.
        printf("Área: %.2f km² \n", area1);     //Exibe a área formatada com 2 casas decimais.
        printf("PIB: %.2f bilhões de reais\n", pib1);   //Exibe o pib formatada com 2 casas decimais.
        printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);    //Exibe a quantidade de pontos turísticos.
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);  //Exibe a densidade populacional com 2 casas decimais.
        printf("PIB per Capta: %.2f reais\n", pib_perCapta1);   //Exibe o pib per capta com 2 casas decimais.
        printf("Super poder 1 %.2f\n\n", super_poder1);
    
        // Exibição dos dados da Carta 2.
        printf("==============================================================\n");
        printf("                            CARTA 2                           \n");
        printf("==============================================================\n");
    
        printf("Estado: %c\n", estado2);  
        printf("Código: %3s\n", codigo_carta2);
        printf("Nome da Cidade: %s", nome_cidade2);
        printf("População: %lu habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2); 
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2); 
        printf("PIB per Capta: %.2f reais\n", pib_perCapta2);
        printf("Super poder 2 %.2f\n\n", super_poder2);
    

         // Comparação de cartas
        // Utilizado o operador relacional 'maior e menor que '(> <) para fazer a comparação entre os valores.
        printf("\n==============================================================\n");
        printf("                       COMPARAÇÃO DE CARTAS                      \n");
        printf("==============================================================\n");
        
        printf("Qual atributo você deseja comparar entre as Cartas 1 e 2?\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("6. Pib per Capta\n");
        printf("7. Super poder\n");
        printf("Escolha: \n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
            case 1: //Ganha a carta que tiver a maior população.
            if(populacao1 > populacao2){
                printf("========== POPULAÇÃO ==========\n");
                printf("Carta 1 %s => %lu habitantes | Carta 2 %s => %lu habitantes\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
                printf("===============================\n\n");
                printf("Resultado: Carta 1 venceu com %lu habitantes\n\n", populacao1);
            }else if(populacao1 < populacao2){
                printf("========== POPULAÇÃO ==========\n");
                printf("Carta 1 %s => %lu habitantes  | Carta 2 %s => %lu habitantes\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
                printf("===============================\n\n");
                printf("Resultado: Carta 2 venceu com %lu habitantes\n\n", populacao2);
            } else{
                printf("========== POPULAÇÃO ==========\n");
                printf("Carta 1 %s => %lu habitantes | Carta 2 %s => %lu habitantes\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
                printf("===============================\n\n");
                printf("Resultado: Empate!\n\n");
            }
            break;
            
            case 2: //Ganha a carta que tiver a maior área.
            if(area1 > area2){
                printf("========== ÁREA ==========\n");
                printf("Carta 1 %s => %.2f km² | Carta 2 %s => %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
                printf("==========================\n\n");
                printf("Resultadp: Carta 1 venceu com %.2f km²\n\n", area1);
            }else if(area1 < area2){
                printf("========== ÁREA ==========\n");
                printf("Carta 1 %s => %.2f km² | Carta 2 %s => %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
                printf("==========================\n\n");
                printf("Resultado: Carta 2 venceu com %.2f km²\n\n", area2);
            } else{
                printf("========== ÁREA ==========\n");
                printf("Carta 1 %s => %.2f km² | Carta 2 %s => %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
                printf("==========================\n\n");
                printf("Resltado: Empate!\n\n");
            }
            break;
            
            case 3: //Ganha a carta que tiver o maior pib.
                if(pib1 > pib2){
                    printf("========== PIB ==========\n");
                    printf("Carta 1 %s => %.2f bilhões de reais | Carta 2 %s => %.2f bilhões de reais\n", nome_cidade1, pib1, nome_cidade2, pib2);
                    printf("=========================\n\n");
                    printf("Resultado: Carta 1 venceu com %.2f bilhões de reais\n", pib1);
                }else if(pib1 < pib2){
                    printf("========== PIB ==========\n");
                    printf("Carta 1 %s => %.2f bilhões de reais | Carta 2 %s => %.2f bilhões de reais\n", nome_cidade1, pib1, nome_cidade2, pib2);
                    printf("=========================\n\n");
                    printf("Resultado: Carta 2 venceu com %.2f bilhões de reais\n\n", pib2);
                } else {
                    printf("========== PIB ==========\n");
                    printf("Carta 1 %s =>  %.2f bilhões de reais | Carta 2 %s =>  %.2f bilhões de reais\n", nome_cidade1, pib1, nome_cidade2, pib2);
                    printf("=========================\n\n");
                    printf("Resltado: Empate!\n\n");
                }
                break;

            case 4: //Ganha a carta que tiver a maior qde de pontos turísticos.                 
                if(num_pontos_turisticos1 > num_pontos_turisticos2){
                    printf("========== PONTOS TURÍSTICOS ==========\n");
                    printf("Carta 1 %s => %d | Carta 2 %s => %d\n", nome_cidade1, num_pontos_turisticos1, nome_cidade2, num_pontos_turisticos2);
                    printf("=======================================\n\n");
                    printf("Resultado: Carta 1  venceu com o total de %d pontos turísticos\n\n", num_pontos_turisticos1);
                }else if (num_pontos_turisticos1 < num_pontos_turisticos2){
                    printf("========== PONTOS TURÍSTICOS ==========\n");
                    printf("Carta 1 %s => %d | Carta 2 %s => %d\n", nome_cidade1, num_pontos_turisticos1, nome_cidade2, num_pontos_turisticos2);
                    printf("=======================================\n\n");
                    printf("Resultado: Carta 2 venceu com o total de %d pontos turísticos\n\n", num_pontos_turisticos2);
                } else{
                    printf("========== PONTOS TURÍSTICOS ==========\n");
                    printf("Carta 1 %s => %d | Carta 2 %s => %d\n", nome_cidade1, num_pontos_turisticos1, nome_cidade2, num_pontos_turisticos2);
                    printf("=======================================\n\n");
                    printf("Resltado: Empate!\n\n");
                }
                break;
            
            case 5: //Aqui a lógica é invertida, pois a menor densidade é considerada melhor.                
                if(densidade_pop1 < densidade_pop2){
                    printf("========== DENSIDADE POPULACIONAL ==========\n");
                    printf("Carta 1 %s => %.2f hab/km² | Carta 2 %s => %.2f hab/km²\n", nome_cidade1, densidade_pop1, nome_cidade2, densidade_pop2);
                    printf("============================================\n\n");
                    printf("Resultado: Carta 1 venceu com o total de %.2f hab/km²\n\n", densidade_pop1);
                    printf("OBS: A menor densidade é a que ganha!\n\n");
                }else if(densidade_pop1 > densidade_pop2){
                    printf("========== DENSIDADE POPULACIONAL ==========\n");
                    printf("Carta 1 %s => %.2f hab/km² | Carta 2 %s => %.2f hab/km²\n", nome_cidade1, densidade_pop1, nome_cidade2, densidade_pop2);
                    printf("============================================\n\n");
                    printf("Resultado: Carta 2 venceu com o total de %.2f hab/km²\n\n", densidade_pop2);
                    printf("OBS: A menor densidade é a que ganha.\n\n");
                } else{
                    printf("========== DENSIDADE POPULACIONAL ==========\n");
                    printf("Carta 1 %s => %.2f hab/km² | Carta 2 %s => %.2f hab/km²\n", nome_cidade1, densidade_pop1, nome_cidade2, densidade_pop2);
                    printf("============================================\n\n");
                    printf("Resltado: Empate!\n\n");
                }
                break;   
            
            case 6: //Ganha quem tiver o maior PIB per capita.                 
                if(pib_perCapta1 > pib_perCapta2){
                    printf("========== PIB PER CAPTA ==========\n");
                    printf("Carta 1 %s => %.2f reais | Carta 2 %s => %.2f reais\n", nome_cidade1, pib_perCapta1, nome_cidade2, pib_perCapta2);
                    printf("===================================\n\n");
                    printf("Resultado: Carta 1 venceu com o total de %.2f reais\n\n", pib_perCapta1);
                }else if(pib_perCapta1 < pib_perCapta2){
                    printf("========== PIB PER CAPTA ==========\n");
                    printf("Carta 1 %s => %.2f reais | Carta 2 %s => %.2f reais\n", nome_cidade1, pib_perCapta1, nome_cidade2, pib_perCapta2);
                    printf("===================================\n\n");
                    printf("Resultado: Carta 2 venceu com o total de %.2f reais\n\n", pib_perCapta2);
                } else{ 
                    printf("========== PIB PER CAPTA ==========\n");
                    printf("Carta 1 %s =>  %.2f reais | Carta 2 %s =>  %.2f reais\n", nome_cidade1, pib_perCapta1, nome_cidade2, pib_perCapta2);
                    printf("===================================\n\n");
                    printf("Resltado: Empate!\n\n");
                }
                break;

            case 7: //Ganha a carta que tiver o maior super poder.                 
                if(super_poder1 > super_poder2){
                    printf("========== SUPER PODER ==========\n");
                    printf("Carta 1 %s => %.2f | Carta 2 %s => %.2f\n", nome_cidade1, super_poder1, nome_cidade2, super_poder2);
                    printf("=================================\n\n");
                    printf("Resultado: Carta 1 venceu com o total de %.2f\n\n", super_poder1);
                }else if(super_poder1 < super_poder2){
                    printf("========== SUPER PODER ==========\n");
                    printf("Carta 1 %s => %.2f | Carta 2 %s => %.2f\n", nome_cidade1, super_poder1, nome_cidade2, super_poder2);
                    printf("=================================\n\n");
                    printf("Resultado: Carta 2 venceu com o total de %.2f\n\n", super_poder2);
                } else{
                    printf("========== SUPER PODER ==========\n");
                    printf("Carta 1 %s => %.2f | Carta 2 %s => %.2f\n", nome_cidade1, super_poder1, nome_cidade2, super_poder2);
                    printf("=================================\n\n");
                    printf("Resltado: Empate!\n\n");
                }
                break;
            
            default:
                printf("Opção Inválida");
        }
        return 0;   //Indica que o programa foi executado com sucesso.
    }