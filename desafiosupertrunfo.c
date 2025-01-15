#include <stdio.h>
    
        //Inicio do desafio super trunfo 
    
    int main (){                      //variaveis
        int cc;                       //codigo da cidade
        char nome[50];
        float populacao;
        float area;
        int pib;
        int pt;                       //ponto turistico
        //-------------------------------------------------------------------------------------------------------------------------------
        printf("Digite o código da cidade: \n");
        scanf(" %d", &cc);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", &nome);
        printf("Digite a população da cidade : \n");
        scanf(" %f", &populacao);
        printf("Digite a área da cidade: \n");
        scanf(" %f", &area);
        printf("Digite o PIB da cidade: \n");
        scanf(" %d", &pib);
        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf(" %d", &pt);
        //-------------------------------------------------------------------------------------------------------------------------------

        printf("Código da cidade: %d \nNome: %s\n", cc, nome);
        printf("População: %f \nÁrea: %f", populacao, area);
        printf("PIB: %d \nPontos turísticos: %d\n", pib, pt);

      return 0;
    }