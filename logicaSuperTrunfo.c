#include <stdio.h>  // Entrada e saída de dados
#include <stdlib.h> // Funções utilitárias

    int main() {

    /// PRIMEIRA CARTA 
    /// DECLARAÇÕES DAS VARIÁVEIS (CHAR - INT - FLOAT E SEUS DEMAIS VALORES RESPECTIVOS)

    char estado1 = 'M';                                      
    char codigo1 [10]= "MS";                                 
    char nome1[30] = "Mato Grosso do Sul (MS)";              
    int populacao1 = 2757013;                                
    float area1 = 357.125 ;                                  
    float pib1 = 227.8;  // Bilhões de reais                                      
    int turismo1 = 100;                                      
    float densidade1 = populacao1 / area1;                    
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;        
    float somaTotal1 = populacao1 + area1 + pib1 + turismo1 + densidade1 + pibpercapita1;

    /// IMPRESSÕES DOS RESULTADOS DAS VARIÁVEIS DECLARADAS ANTERIORMENTE E SEUS DEMAIS VALORES
    
    printf("1° Carta: \n\n");                                         
    printf("ESTADO: %c\n", estado1);                                
    printf("CÓDIGO: %s\n", codigo1);                                  
    printf("NOME: %s\n",nome1);                                      
    printf("POPULAÇÃO: %d Habitantes\n", populacao1);             
    printf("ÁREA: %.3f KM²\n", area1);                               
    printf("PIB: %.2f Bilhões de Reais\n", pib1);                     
    printf("TURISMO: %d Pontos Turísticos\n", turismo1);              
    printf("A Densidade Populacional é: %.2f Hab/Km²\n", densidade1); 
    printf("O PIB Per Capita é: %.2f Reais\n", pibpercapita1);      
    printf("O Super Poder da primeira carta é: %.3f\n\n", somaTotal1);

    /// SEGUNDA CARTA 
    /// DECLARAÇÃO DAS VARIÁVEIS E VALORES DA SEGUNDA CARTA

    char estado2 ='S';
    char codigo2[10] = "SP";
    char nome2[30] = "São Paulo (SP)";
    int populacao2 = 11895578;
    float area2 = 248.219;
    float pib2 = 3500.0; // Bilhões de reais
    int turismo2 = 20;
    float densidade2 = populacao2 / area2;                    
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;      
    float somaTotal2 = populacao2 + area2 + pib2 + turismo2 + densidade2 + pibpercapita2;

    /// IMPRESSÃO DOS DADOS DA SEGUNDA CARTA, DECLARADOS NA LINHA 36 Á 45

    printf("2° Carta: \n\n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("NOME: %s\n", nome2);
    printf("POPULAÇÂO: %d Habitantes\n", populacao2);
    printf("ÁREA: %.3f KM²\n", area2);
    printf("PIB: %.1f Trilhões de Reais\n", pib2);
    printf("TURISMO: %d Pontos Turísticos\n", turismo2);
    printf("A Densidade Populacional é: %.2f Hab/Km²\n", densidade2);  
    printf("O PIB Per Capita é: %.2f Reais\n", pibpercapita2);       
    printf("O Super Poder da segunda carta é: %.3f\n\n", somaTotal2);

    ///COMPARAÇÃO DAS CARTAS 1 E 2:
    //printf("A População: %d\n", populacao1 > populacao2);
    //printf("A Área: %d\n", area1 < area2);
    //printf("O Pib: %d\n", pib1 > pib2);
    //printf("O Turismo: %d\n", turismo1 > turismo2);
    //printf("A Densidade: %d\n", densidade1 < densidade2);
    //printf("O Pib Per Capita: %d\n", pibpercapita1 > pibpercapita2);
    //printf("A Soma Total: %d\n\n", somaTotal1 < somaTotal2);
    //printf("A CARTA QUE VENCEU FOI A SEGUNDA CARTA, ESTADO: %s", codigo2);

    //printf(" ### Comparação entre CARTA 1 e CARTA2 ###\n\n");

    //printf("Atributo: POPULAÇÃO\n");
    //if (populacao1 > populacao2) {
    //printf("A Carta 1 ganhou essa rodada!\n");
    //}
    //else {
    //printf("A Carta 2 levou essa rodada!\n\n");
    //}

    
    //printf("Atributo: ÁREA\n");
    //if (area1 > area2) {
    //printf("A Carta 1 ganhou!\n\n");
    //}
    //else {
    //printf("A Carta 2 levou!\n");
    //}


    //printf("Atributo: PIB\n");
    //if (pib1 > pib2) {
    //printf("Vitória da Carta 1!\n\n");
    //}
    //else {
    //printf("A Carta 2 ganhou!\n");
    //}
     

    //printf("Atributo: Turismo\n");
    //if (turismo1 > turismo2) {
    //printf("Carta 1 ganhou!\n\n");
    //}
    //else{
    //printf("Carta 2 ganhou!\n");
    //}
    
    //if (densidade1 < densidade2){
    //printf("A Carta 1 ganhou!\n\n");
    //}
    //else{
    //printf("A Carta 2 levou!\n");
    //}

    //printf("Atributo: PIB Percapita\n");
    //if (pibpercapita1 > pibpercapita2) {
    //printf("A Carta 1 ganhou mais uma!\n");
    //}
    //else{
    //printf("A Carta 2 ganhou essa!\n");
    //}

    int escolhaJogador; 

    //Impressões das opções de escolha em que o jogador poderá selecionar manualmente qual atributo desejável

    printf("COMPARAÇÃO ENTRE AS CARTAS 1 & 2:\n"); 
    printf("1. POPULAÇÃO\n");
    printf("2. ÁREA\n");
    printf("3. PIB\n");
    printf("4. PONTOS TURÍSTICOS\n");
    printf("5. DENSIDADE DEMOGRÁFICA\n");
    printf("ESCOLHA UM DOS ATRIBUTOS:");
    scanf("%d", &escolhaJogador);

    //Menu de opções já selecionáveis e com os demais atributos e seus respectivos valores unitários
     
    switch (escolhaJogador){
        
    case 1: printf("Você selecionou a opção 1: POPULAÇÃO!\n");
            printf("%s: %d de Habitantes\n", nome1, populacao1);
            printf("%s: %d de Habitantes\n", nome2, populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 (MS) venceu!\n");
        } else if (populacao1 < populacao2)
        {
            printf("Carta 2  (SP) venceu!\n");
        }  else {
           printf("As cartas empataram!");  
        }
        break;
    

        case 2: printf("Você selecionou a opção 2: ÁREA!\n");
                printf("%s: %.3f KM²\n", nome1, area1);
                printf("%s: %.3f KM²\n", nome2, area2); 
        if (area1 > area2) {
            printf("Carta 1 (MS) venceu!\n");
        } else if (area1 < area2) {
            printf("Carta 2  (SP) venceu!\n");
        } else {
            printf("Emapataram!\n");
        }
        break;


        case 3: printf("Você selecionou a opção 3: PIB!\n");
                printf("%s: %.1f Bilhões de reais\n", nome1, pib1);
                printf("%s: %.1f Trilhões de reais\n", nome2, pib2);
        if (pib1 > pib2) {
            printf("Carta 1 (MS) venceu!\n");
        } else if (pib1 < pib2) {
            printf("Carta 2  (SP) venceu!\n");
        } else {
            printf("Empataram!\n");
        }
        break;


        case 4: printf("Você selecionou a opção 4: PONTOS TURÍSTICOS!\n");
                printf("%s: %d pontos turísticos\n", nome1, turismo1);
                printf("%s: %d pontos turísticos\n", nome2, turismo2);
        if (turismo1 > turismo2) {
            printf("Carta 1 (MS) venceu!\n");
        } else if (turismo1 < turismo2) {
            printf("Carta 2  (SP) venceu!\n");
        } else {
            printf("Empataram!\n");
        }
        break;


        case 5: printf("Você selecionou a opção 5: DENSIDADE DEMOGRÁFICA!\n");
                printf("%s: %.2f Hab/Km²\n", nome1, densidade1);
                printf("%s: %.2f Hab/Km²\n", nome2, densidade2);
        if (densidade1 < densidade2) {
            printf("Carta 1 (MS) venceu!\n");
        } else if (densidade1 > densidade2) {
            printf("Carta 2  (SP) venceu!\n");
        } else {
            printf("Empataram!\n");
        }
        break;

    default:
        printf("ERRO: Opção incorreta!\n");
        break;
    }

    return 0;
}
