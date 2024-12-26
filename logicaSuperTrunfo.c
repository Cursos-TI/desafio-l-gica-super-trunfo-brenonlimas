#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char carta01_estado, carta01_codigo[10], carta01_nome[50], carta02_estado, carta02_codigo[10], carta02_nome[50];
    int carta01_turistico, carta02_turistico, escolha_atributo, escolha_atributo2, carta01_placar = 0 ,carta02_placar = 0, resultado01, resultado02;
    unsigned long int carta01_populacao, carta02_populacao;
    float carta01_area, carta01_densidade, carta01_densidade_invert, carta01_pib,carta01_PIBcapita, carta01_super, carta02_area, carta02_densidade, carta02_densidade_invert, carta02_pib, carta02_PIBcapita, carta02_super;
 
    
        //Entrada. Cadastro da primeira carta.
        printf("Cadastre a primeira carta\n\n");


            printf("Digite a letra do estado: ");
            scanf("%c", &carta01_estado);
    
            printf("Digite o código da carta: ");
            scanf(" %s", carta01_codigo);    

            printf("Digite o nome da cidade: ");

            scanf("  %[^\n]", carta01_nome);

            printf("Digite a população da cidade: ");
            scanf(" %lu", &carta01_populacao);

            printf("Digite a área da cidade: ");
            scanf(" %f", &carta01_area);

            printf("Digite o PIB da cidade em reais: ");
            scanf(" %f", &carta01_pib);

            printf("Digite a a quantidade de pontos turísticos da cidade: ");
            scanf(" %d", &carta01_turistico);
        printf("\n");


        //Cálculos de atributos de acordo com a entrada.
        carta01_densidade = (double)carta01_populacao / carta01_area; //calcula densidade populacional.
            carta01_densidade_invert = -carta01_densidade; //inverte valor da densidade da carta 1 para comparação
            carta01_PIBcapita = carta01_pib / carta01_populacao; //calcula pib per capita.
            carta01_pib /= 1000000000; // transforma pib em bilhões.
        carta01_super = (carta01_populacao + carta01_area + carta01_densidade_invert + carta01_pib + carta01_PIBcapita + carta01_turistico); // calcula super poder carta 1
        
        //Confirmação da primeira carta cadastrada.
        printf("Carta cadastrada com sucesso!\n");
            printf("Estado: %c\n", carta01_estado);
            printf("Código da carta: %s\n", carta01_codigo);
            printf("Nome da cidade: %s\n", carta01_nome);
            printf("População: %lu\n", carta01_populacao);
            printf("Área: %.2f km²\n", carta01_area);            
            printf("Densidade populacional: %.2f pessoas/km² \n", carta01_densidade);
            printf("PIB: %.2f bilhões de reais\n", carta01_pib);
            printf("PIB per capita: %.2f reais\n", carta01_PIBcapita);
            printf("Número de pontos turísticos: %d\n", carta01_turistico);
            printf("Super poder: %.2f\n", carta01_super);
        printf("\n");

        //Entrada. Cadastro da segunda carta.
        printf("Cadastre a segunda carta\n\n");
            printf("Digite a letra do estado: ");
            scanf(" %c", &carta02_estado);
    
            printf("Digite o código da carta: ");
            scanf(" %s", carta02_codigo);    
    
            printf("Digite o nome da cidade: ");

            scanf("  %[^\n]", carta02_nome);

            printf("Digite a população da cidade: ");
            scanf(" %lu", &carta02_populacao);

            printf("Digite a área da cidade: ");
            scanf(" %f", &carta02_area);

            printf("Digite o PIB da cidade em reais: ");
            scanf(" %f", &carta02_pib);

            printf("Digite a a quantidade de pontos turísticos da cidade: ");
            scanf(" %d", &carta02_turistico);
        printf("\n");
        
        //Cálculos de atributos de acordo com a entrada.
        carta02_densidade = (double)carta02_populacao / carta01_area; //calcula densidade populacional.
            carta02_densidade_invert = -carta02_densidade; //inverte valor da densidade da carta 2 para comparação
            carta02_PIBcapita = carta02_pib / carta02_populacao; //calcula pib per capita.
            carta02_pib /= 1000000000; // transforma pib em bilhões.
        carta02_super = (carta02_populacao + carta02_area + carta02_densidade_invert + carta02_pib + carta02_PIBcapita + carta02_turistico); // calcula super poder carta 2
        


        //Confirmação da segunda carta cadastrada.
        printf("Carta cadastrada com sucesso!\n");         
            printf("Estado: %c\n", carta02_estado);
            printf("Código da carta: %s\n", carta02_codigo);
            printf("Nome da cidade: %s\n", carta02_nome);
            printf("População: %lu\n", carta02_populacao);
            printf("Área: %.2f km²\n", carta02_area);            
            printf("Densidade populacional: %.2f pessoas/km² \n", carta02_densidade);
            printf("PIB: %.2f bilhões de reais\n", carta02_pib);
            printf("PIB per capita: %.2f reais\n", carta02_PIBcapita);
            printf("Número de pontos turísticos: %d\n", carta02_turistico);
            printf("Super poder: %.2f\n", carta02_super);
        printf("\n");
            
        //Menu para escolher primeiro atributo    
        printf("Escolha o primeiro atributo para comparação\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - Densidade Populacional\n");
            printf("4 - PIB\n");
            printf("5 - PIB per carpita\n");
            printf("6 - Número de pontos turísticos\n");
            printf("7 - Super poder\n");
        scanf("%d", &escolha_atributo);
        
        //Confirmação de escolha do primeiro atributo
    switch (escolha_atributo)
        {
            case 1:
                
                printf("Você escolheu População\n");
                printf("\n");
            
            break;


            case 2:
                
                printf("Você escolheu Área\n");
                printf("\n");

            break;


            case 3:

                printf("Você escolheu Densidade Populacional\n");
                printf("\n");

            break;


            case 4:

                printf("Você escolheu PIB\n");
                printf("\n");

            break;


            case 5:

                printf("Você escolheu PIB Per Capita\n");
                printf("\n");

            break;


            case 6:

                printf("Você escolheu Número de Pontos Turísticos\n");
                printf("\n");

            break;


            case 7:

                printf("Você escolheu Super Poder\n");
                printf("\n");

            break;
            

            default:

                printf("Entrada Inválida\n");
                printf("\n");
            
            break;
        }

        //Menu para escolher segundo atributo    
        printf("Escolha o segundo atributo para comparação\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - Densidade Populacional\n");
            printf("4 - PIB\n");
            printf("5 - PIB per carpita\n");
            printf("6 - Número de pontos turísticos\n");
            printf("7 - Super poder\n");
        scanf("%d", &escolha_atributo2);

        //Confirmação de escolha do segundo atributo
        switch (escolha_atributo2)
        {
            case 1:
                
                printf("Você escolheu População\n");
                printf("\n");

            break;


            case 2:
                
                printf("Você escolheu Área\n");
                printf("\n");

            break;


            case 3:

                printf("Você escolheu Densidade Populacional\n");
                printf("\n");

            break;


            case 4:

                printf("Você escolheu PIB\n");
                printf("\n");

            break;


            case 5:

                printf("Você escolheu PIB Per Capita\n");
                printf("\n");

            break;


            case 6:

                printf("Você escolheu Número de Pontos Turísticos\n");
                printf("\n");

            break;


            case 7:

                printf("Você escolheu Super Poder\n");
                printf("\n");

            break;
        

            default:

                printf("Entrada Inválida\n");
                printf("\n");

            break;
        }

        //Comparação do primeiro atributo
        switch (escolha_atributo)
        {
            case 1:

                        printf("Categoria: População\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  População:%lu\n", carta01_codigo, carta01_nome, carta01_populacao);
                        printf("CARTA 02 - Código: %s  Estado: %s  População:%lu\n", carta02_codigo, carta02_nome, carta02_populacao);
                
                resultado01 = carta01_populacao > carta02_populacao ? 1 : 0;
                
                if (resultado01 == 1) {
                        carta01_placar++; //Incrementa um ponto ao placar da carta 01.
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++; //Incrementa um ponto ao placar da carta 02.
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n");
                }

                 
            break;

            case 2:

                        printf("Categoria: Área\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  área:%.2f\n", carta01_codigo, carta01_nome, carta01_area);
                        printf("CARTA 02 - Código: %s  Estado: %s  área:%.2f\n", carta02_codigo, carta02_nome, carta02_area);
                
                
                resultado01 = carta01_area > carta02_area ? 1 : 0;

                if(resultado01 == 1){
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                   

            break;
        
            case 3:

                        printf("Categoria: Densidade Populacional\n");                        
                        printf("CARTA 01 - Código: %s  Estado: %s  Densidade Populacional:%.2f\n", carta01_codigo, carta01_nome, carta01_densidade);
                        printf("CARTA 02 - Código: %s  Estado: %s  Densidade Populacional:%.2f\n", carta02_codigo, carta02_nome, carta02_densidade);

                resultado01 = carta01_densidade_invert > carta02_densidade_invert ? 1 : 0;

                if (resultado01 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n");
                }

            break;

            case 4:

                        printf("Categoria: PIB\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  PIB:%.2f\n", carta01_codigo, carta01_nome, carta01_pib);
                        printf("CARTA 02 - Código: %s  Estado: %s  PIB:%.2f\n", carta02_codigo, carta02_nome, carta02_pib);

                resultado01 = carta01_pib > carta02_pib ? 1 : 0;
                
                if (resultado01 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                    } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
               
        
            break;

            case 5:

                        printf("Categoria: PIB per capita\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  PIB per capita:%.2f\n", carta01_codigo, carta01_nome, carta01_PIBcapita);
                        printf("CARTA 02 - Código: %s  Estado: %s  PIB per capita:%.2f\n", carta02_codigo, carta02_nome, carta02_PIBcapita);

                resultado01 = carta01_PIBcapita > carta02_PIBcapita ? 1 : 0;
                    
                if (resultado01 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
              

            break;

            case 6:

                        printf("Categoria: Pontos turísticos\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  Pontos Turísticos:%d\n", carta01_codigo, carta01_nome, carta01_turistico);
                        printf("CARTA 02 - Código: %s  Estado: %s  Pontos Turísticos:%d\n", carta02_codigo, carta02_nome, carta02_turistico);

                resultado01 = carta01_turistico > carta02_turistico ? 1 : 0;
                
                if (resultado01 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                }  else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                

            break;

            case 7:

                        printf("Categoria: Super poder\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  Super Poder:%.2f\n", carta01_codigo, carta01_nome, carta01_super);
                        printf("CARTA 02 - Código: %s  Estado: %s  Super Poder%.2f\n", carta02_codigo, carta02_nome, carta02_super);

                resultado01 = carta01_super > carta02_super ? 1 : 0;

                if (resultado01 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                }   else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                

            break;

            default:

                        printf("Opção inválida, tente novamente.\n");
                        printf("\n");
            
            break;

        }

        //Comparação do segundo atributo
        switch (escolha_atributo2)
        {
            case 1:

                        printf("Categoria: População\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  População:%lu\n", carta01_codigo, carta01_nome, carta01_populacao);
                        printf("CARTA 02 - Código: %s  Estado: %s  População:%lu\n", carta02_codigo, carta02_nome, carta02_populacao);

                resultado02 = carta01_populacao > carta02_populacao ? 1 : 0;
                
                if (resultado02 == 1) {
                        carta01_placar++; //Incrementa um ponto ao placar da carta 01.
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++; //Incrementa um ponto ao placar da carta 02.
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n");
                }

                 

            break;

            case 2:

                        printf("Categoria: Área\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  área:%.2f\n", carta01_codigo, carta01_nome, carta01_area);
                        printf("CARTA 02 - Código: %s  Estado: %s  área:%.2f\n", carta02_codigo, carta02_nome, carta02_area);

                resultado02 = carta01_area > carta02_area ? 1 : 0;

                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                   

            break;
        
            case 3:

                        printf("Categoria: Densidade Populacional\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  Densidade Populacional:%.2f\n", carta01_codigo, carta01_nome, carta01_densidade);
                        printf("CARTA 02 - Código: %s  Estado: %s  Densidade Populacional:%.2f\n", carta02_codigo, carta02_nome, carta02_densidade);

                resultado02 = carta01_densidade_invert > carta02_densidade_invert ? 1 : 0;

                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n");
                }

            break;

            case 4:
                        printf("Categoria: PIB\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  PIB:%.2f\n", carta01_codigo, carta01_nome, carta01_pib);
                        printf("CARTA 02 - Código: %s  Estado: %s  PIB:%.2fn", carta02_codigo, carta02_nome, carta02_pib);

                resultado02 = carta01_pib > carta02_pib ? 1 : 0;
                
                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
               
        
            break;

            case 5:
                
                        printf("Categoria: PIB per capita\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  PIB per capita:%.2f\n", carta01_codigo, carta01_nome, carta01_PIBcapita);
                        printf("CARTA 02 - Código: %s  Estado: %s  PIB per capita:%.2f\n", carta02_codigo, carta02_nome, carta02_PIBcapita);

                resultado02 = carta01_PIBcapita > carta02_PIBcapita ? 1 : 0;
                    
                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                } else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
              

            break;

            case 6:

                        printf("Categoria: Pontos turísticos\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  Pontos Turísticos:%d\n", carta01_codigo, carta01_nome, carta01_turistico);
                        printf("CARTA 02 - Código: %s  Estado: %s  Pontos Turísticos:%d\n", carta02_codigo, carta02_nome, carta02_turistico);
                
                resultado02 = carta01_turistico > carta02_turistico ? 1 : 0;
                
                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                }  else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                

            break;

            case 7:
                
                        printf("Categoria: Super poder\n");
                        printf("CARTA 01 - Código: %s  Estado: %s  Super Poder:%.2f\n", carta01_codigo, carta01_nome, carta01_super);
                        printf("CARTA 02 - Código: %s  Estado: %s  Super Poder%.2f\n", carta02_codigo, carta02_nome, carta02_super);
                
                resultado02 = carta01_super > carta02_super ? 1 : 0;

                if (resultado02 == 1) {
                        carta01_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta01_nome);
                        printf("\n");
                }  else {
                        carta02_placar++;
                        printf("RESULTADO: %s é a vencedora!!\n", carta02_nome);
                        printf("\n"); 
                }
                

            break;

            default:

                        printf("Opção inválida, tente novamente.\n");
        
            break;

        }

        //Imprime Placar
        printf("%s  %d  X  %d  %s\n", carta01_nome, carta01_placar, carta02_placar, carta02_nome);

        //Determina a carta vencedora ou empate caso ocorra.
        if (carta01_placar == carta02_placar) {

            printf("Resultado: Empate!!\n");

        } else if (carta01_placar > carta02_placar) {

            printf("Resultado: %s venceu!!\n", carta01_nome);

        } else {

            printf("Resultado: %s venceu!!\n", carta02_nome);
        }     

    return 0;
}
