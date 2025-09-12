#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char estado1[10], estado2[10]; 
    char cidade1[20], cidade2[20];
    char codigo1[5], codigo2[5];
    
    unsigned long int população1, população2;
    int ptur1, ptur2;
    int opcao;
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

    printf("Menu: \n");
    printf("1 - Comparação Populacional \n");
    printf("2 - Comparação de Área \n");
    printf("3 - Comparação de PIB \n");
    printf("4 - Comparação de Pontos Turísticos \n");
    printf("5 - Comparação de PIB per Capita \n");
    printf("6 - Comparação de Densidade Populacional \n");
    printf("7 - Comparação de Super Poder \n");
    printf("8 - Múltipla Comparação \n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação populacional \n");
        printf("População de %s: %lu \n População de %s: %lu \n", cidade1, população1, cidade2, população2);
    if(população1 > população2){
        printf("Carta 1 ganhou!");
    }
    else if(população1 == população2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 2:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de área em km² \n");
        printf("Área de %s: %f \n Área de %s: %f \n", cidade1, area1, cidade2, area2);
    if(area1 > area2){
        printf("Carta 1 ganhou!");
    }
    else if(area1 == area2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 3:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de PIB \n");
        printf("PIB de %s: %f \n PIB de %s: %f \n", cidade1, PIB1, cidade2, PIB2);
    if(PIB1 > PIB2){
        printf("Carta 1 ganhou!");
    }
    else if(PIB1 == PIB2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 4:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de Pontos Turísticos \n");
        printf("Pontos turísticos de %s: %d \n Pontos turísticos de %s: %d \n", cidade1, ptur1, cidade2, ptur2);
    if(ptur1 > ptur2){
        printf("Carta 1 ganhou!");
    }
    else if(ptur1 == ptur2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;
    
    case 5:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de PIB per Capita \n");
        printf("PIB per Capita de %s: %f \n PIB per Capita de %s: %f \n", cidade1, PIBPC1, cidade2, PIBPC2);
    if(PIBPC1 > PIBPC2){
        printf("Carta 1 ganhou!");
    }
    else if(PIBPC1 == PIBPC2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 6:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de Densidade Populacional \n");
        printf("Densidade populacional de %s: %f \n Densidade populacional de %s: %f \n", cidade1, densidade1, cidade2, densidade2);
    if(densidade1 < densidade2){
        printf("Carta 1 ganhou!");
    }
    else if(densidade1 == densidade2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 7:
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
        printf("Comparação de Super Poder \n");
        printf("Super Poder de %s: %f \n Super Poder de %s: %f \n", cidade1, superp1, cidade2, superp2);
    if(superp1 > superp2){
        printf("Carta 1 ganhou!");
    }
    else if(superp1 == superp2){
        printf("Empate!");
    }
    else {
        printf("Carta 2 ganhou!");
    }
    break;

    case 8:
    int atributo1, atributo2;
    int pontoscarta1 = 0, pontoscarta2 = 0;

    printf("Atributos: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - de PIB \n");
    printf("4 - Pontos Turísticos \n");
    printf("5 - PIB per Capita \n");
    printf("6 - Densidade Populacional \n");
    printf("7 - Super Poder \n");
    printf("Escolha o 1º Atributo:");
    scanf("%d \n", &atributo1);

    switch(atributo1){
        case 1:
        if (população1 > população2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(população2 > população1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;

        case 2:
        if (area1 > area2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(area2 > area1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 3:
        if (PIB1 > PIB2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(PIB2 > PIB1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 4:
        if (ptur1 > ptur2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(ptur2 > ptur1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 5:
        if (PIBPC1 > PIBPC2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(PIBPC2 > PIBPC1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 6:
        if (densidade1 < densidade2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(densidade2 < densidade1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 7:
        if (superp1 > superp2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(superp2 > superp1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;

        default:
            break;
    }
 
    printf("Escolha o 2º Atributo:");
    scanf("%d \n", &atributo2);

    if (atributo1 == atributo2){
        printf("Não é possivel escolher o mesmo atributo 2 vezes!");
    }
    else{
        switch(atributo1){
        case 1:
        if (população1 > população2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(população2 > população1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;

        case 2:
        if (area1 > area2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(area2 > area1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 3:
        if (PIB1 > PIB2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(PIB2 > PIB1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 4:
        if (ptur1 > ptur2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(ptur2 > ptur1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 5:
        if (PIBPC1 > PIBPC2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(PIBPC2 > PIBPC1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 6:
        if (densidade1 < densidade2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(densidade2 < densidade1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;
        
        case 7:
        if (superp1 > superp2){
            pontoscarta1++;
            printf("Carta 1 ganhou!");
        }
        else if(superp2 > superp1){
            pontoscarta2++;
            printf("Carta 2 ganhou!");
        }
        else{
            printf("Empate!");
        }
        break;

        default:
            break;
    }
    }
    
    printf("Comparação Final! \n");
    printf("Carta 1: %s e Carta 2: %s \n", cidade1, cidade2);
    printf("Comparação dos atributos %d e %d \n", atributo1, atributo2);

    if(pontoscarta1 > pontoscarta2){
        printf("Carta 1 ganhou na soma dos atributos!");
    }
    else if(pontoscarta2 > pontoscarta1){
        printf("Carta 2 ganhou na soma dos atributos!");
    }
    else{
        printf("Empate entre as Cartas!");
    }

    default:
        break;
    }

    return 0;

}