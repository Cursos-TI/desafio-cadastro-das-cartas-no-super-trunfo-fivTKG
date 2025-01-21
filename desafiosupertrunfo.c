#include <stdio.h>
    
        //Inicio do desafio super trunfo 
    
    int main (){                      //variaveis
        int cc, pib, pt;                       //codigo da cidade, pib, ponto tur
        char nome[100];
        float populacao, area;
        float densidade;
        int ppc;       //pib per capita
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

        densidade = (populacao / area);
        ppc = (pib / populacao);
        //-------------------------------------------------------------------------------------------------------------------------------


        printf("Código da cidade: %d\n", cc);
        printf("Nome: %s\n", nome);
        printf("População: %.2f\n", populacao); 
        printf("Área: %.2f\n", area);
        printf("PIB: %d\n", pib);
        printf("Pontos turísticos: %d\n", pt);
        printf("Densidade Populacional: %f\n", densidade);
        printf("Pib per Capita: %d", ppc);

      return 0;
    }