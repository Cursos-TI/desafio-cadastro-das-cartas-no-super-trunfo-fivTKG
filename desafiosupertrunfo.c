#include <stdio.h>
    
        //Inicio do desafio super trunfo 
    
    int main (){                      //variaveis
        char SP, MG, RJ, PR, PI;
        int ccsp, ccmg, ccrj, ccpr, ccpi;
        int pibsp, pibmg, pibrj, pibpr, pibpi;
        int ptsp, ptmg, ptrj, ptpr, ptpi;
        float popusp, popumg, popurj, popupr, popupi;
        float densisp, densimg, densirj, densipr, densipi;
        float ppcsp, ppcmg, ppcrj, ppcpr, ppcpi;
        int vencedor;
        float densimenor;
      
      printf("***Bem vindos ao jogo super trunfo***\n");
      printf("Escolha entre as cartas dos estados de: SP, MG, RJ, PR e PI:\n");
      printf("**Digite em siglas**\n");

// scanf(" %s, &SP, &MG, &RJ, &PR, &PI\n");

      scanf(" %s, &SP"),(" %s, &MG"),(" %s, &RJ"),(" %s &PR"),(" %s &PI");      
      scanf(" %s, &SP"),(" %s, &MG"),(" %s, &RJ"),(" %s &PR"),(" %s &PI");

      SP = (int) ccsp = 1,(int) pibsp = 5000,(int) ptsp = 54,(float) popusp = 3000000,(float) densisp = 25,00,(float) ppcsp = 0,16;
      MG = (int) ccmg = 2,(int) pibmg = 2000,(int) ptmg = 62,(float) popumg = 400000,(float) densimg = 40,00,(float) ppcmg = 0,5;
      RJ = (int) ccrj = 3,(int) pibrj = 6000,(int) ptrj = 15,(float) popurj = 6000000,(float) densirj = 37,00,(float) ppcrj = 0,1;
      PR = (int) ccpr = 4,(int) pibpr = 3000,(int) ptpr = 9,(float) popupr = 200000,(float) densipr = 20,00,(float) ppcpr = 0,15;
      PI = (int) ccpi = 5,(int) pibpi = 1000,(int) ptpi = 26,(float) popupi = 9000000,(float) densipi = 50,00,(float) ppcpi = 1,11;
       
      densimenor = (%f =< %f), densisp, densimg, densirj, densipr, densipi;

      vencedor = densimenor;

      
      printf("E o vencedor é: %d\n", vencedor);
      printf("Código da cidade: %d\n", ccsp, ccmg, ccrj, ccpr, ccpi);
        printf("Estado: %s\n", SP, MG, RJ, PR, PI);
        printf("População: %.3f\n", popusp, popumg, popurj, popupr, popupi);
        printf("PIB: %f\n", pibsp, pibmg, pibrj, pibpr, pibpi);
        printf("Pontos turísticos: %d\n", ptsp, ptmg, ptrj, ptpr, ptpi);
        printf("Densidade Populacional: %f\n", densisp, densimg, densirj, densipr, densipi);
        printf("Pib per Capita: %f", ppcsp, ppcmg, ppcrj, ppcpr, ppcpi);
        /*   //desafio intermediario
        int cc, pib, pt;                       //codigo da cidade, pib, ponto tur
        char nome[100];
        float populacao, area;
        float densidade;
        int ppc;       //pib per capita
        */
        //-------------------------------------------------------------------------------------------------------------------------------
       /*
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
        */

        /*
        densidade = (populacao / area);
        ppc = (pib / populacao);
        */
        //-------------------------------------------------------------------------------------------------------------------------------


        /*
        printf("Código da cidade: %d\n", cc);
        printf("Nome: %s\n", nome);
        printf("População: %.3f\n", populacao); 
        printf("Área: %.3f\n", area);
        printf("PIB: %d\n", pib);
        printf("Pontos turísticos: %d\n", pt);
        printf("Densidade Populacional: %f\n", densidade);
        printf("Pib per Capita: %d", ppc);
        */

      return 0;
    }