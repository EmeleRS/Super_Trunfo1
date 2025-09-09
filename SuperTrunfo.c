#include<stdio.h>

int main(){
    char estado1[10], estado2[10]; 
    char cidade1[20], cidade2[20];
    char codigo1[5], codigo2[5];
    
    unsigned long int população1, população2;
    int ptur1, ptur2;
    int resulP, resulPT, resulA, resulPIB, resuldens, resulpp, resulsuper;
    //"ptur" é a abreviação de ponto turistíco.
    
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBPC1, PIBPC2;
    float superp1, superp2;
    //"densidade" se refere a densidade populacional.
    //"PIBPC" é a abreviação de PIB per Capita.


    printf("Olá! Seja bem vindo(a) ao jogo de Super Trunfo interativo.\n O tema é cidades. Vamos começar? \n");
    
    printf("CARTA 1 \n Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o código da carta (sendo composto por 1 letra e 2 números): \n");
    scanf("%s", codigo1);

    printf("Digite a população: \n");
    scanf("%lu", &população1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &ptur1);

    printf("Digite a aréa em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    

    printf("CARTA 2 \n Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o código da carta (sendo composto por 1 letra e 2 números): \n");
    scanf("%s", codigo2);

    printf("Digite a população: \n");
    scanf("%lu", &população2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &ptur2);

    printf("Digite a aréa em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);


    densidade1 = (float) população1 / area1;
    densidade2 = (float) população2 / area2;

    PIBPC1 = (float) PIB1 / população1;
    PIBPC2 = (float) PIB2 / população2;


    printf("Perfeito! Agora podemos iniciar nosso jogo. \n");
    printf("As cartas são: \n");
    
    printf("CARTA 1: \n Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu \n", população1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", ptur1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f \n", PIBPC1);
    
    printf("CARTA 2: \n Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", população2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", ptur2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f \n", PIBPC2); 


    superp1 = (float) população1 + area1 + PIB1 + ptur1 + PIBPC1 + (1/densidade1);
    superp2 = (float) população2 + area2 + PIB2 + ptur2 + PIBPC2 + (1/densidade2);

    printf("Super Poder da Carta 1: %.2f \n", superp1);
    printf("Super Poder da Carta 2: %.2f \n", superp2);


    resulP = população1 > população2;
    resulPT = ptur1 > ptur2;
    resulA = area1 > area2;
    resulPIB = PIB1 > PIB2;
    resuldens = densidade1 < densidade2;
    resulpp = PIBPC1 > PIBPC2;
    resulsuper = superp1 > superp2;

    printf("Vamos as comparações!! \n  Número 1 (carta 1 ganhou) número 0 (Carta 2 ganhou)\n");
    printf("População: %d \n", resulP);
    printf("Área: %d \n", resulA);
    printf("PIB: %d \n", resulPIB);
    printf("Pontos Turísticos: %d \n", resulPT);
    printf("PIB per Capita: %d \n", resulpp);
    printf("Densidade Populacional: %d \n", resuldens);
    printf("Super Poder: %d \n", resulsuper);

    return 0;

}