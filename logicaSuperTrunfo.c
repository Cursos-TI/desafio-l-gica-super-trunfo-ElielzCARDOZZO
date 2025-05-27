#include <stdio.h>
#include <stdlib.h> 

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
    float pib2 = 3.5; // Bilhões de reais
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

    // ATRIBUTOS DA CARTA 1 E 2, SEUS DEMAIS VALORES
    int atributo1 = 0, atributo2 = 0;
    float valor1_a = 0, valor2_a = 0, valor1_b = 0, valor2_b = 0;
    
    // 6 ATRIBUTOS DE AMBAS AS CARTAS
    printf("*** ATRIBUTO DE COMPARAÇÃO: ***\n\n");
    printf("1. POPULAÇÃO: \n");
    printf("2. ÁREA: \n");
    printf("3. PIB: \n");
    printf("4. TURISMO: \n");
    printf("5. DENSIDADE POPULACIONAL: \n");
    printf("6. PIB PER CAPITA: \n\n");
    printf("ESCOLHA UM DOS ATRIBUTOS ACIMA: ");
    scanf("%d", &atributo1);

    // CARTA 2
    printf("1. POPULAÇÃO: \n");
    printf("2. ÁREA: \n");
    printf("3. PIB: \n");
    printf("4. TURISMO: \n");
    printf("5. DENSIDADE POPULACIONAL: \n");
    printf("6. PIB PER CAPITA: \n");
    printf("ESCOLHA UM OUTRO ATRIBUTO PARA COMPARAR: ");
    scanf("%d", &atributo2);

    // ATRIBUINDO VALORES A CADA ATRIBUTO DENTRO DO SWITCH CASE
    switch (atributo1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; break;
        case 2: valor1_a = area1; valor2_a = area2; break;
        case 3: valor1_a = pib1; valor2_a = pib2; break;
        case 4: valor1_a = turismo1; valor2_a = turismo2; break;
        case 5: valor1_a = densidade1; valor2_a = densidade2; break;
        case 6: valor1_a = pibpercapita1; valor2_a = pibpercapita2; break;
    }

    switch (atributo2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; break;
        case 2: valor1_b = area1; valor2_b = area2; break;
        case 3: valor1_b = pib1; valor2_b = pib2; break;
        case 4: valor1_b = turismo1; valor2_b = turismo2; break;
        case 5: valor1_b = densidade1; valor2_b = densidade2; break;
        case 6: valor1_b = pibpercapita1; valor2_b = pibpercapita2; break;
    }

    // PONTUANDO UMA UNIDADE PARA AS CARTAS EM CADA ATRIBUTO
    int pontos1 = 0, pontos2 = 0;

    if (atributo1 == 5) { 
        (valor1_a < valor2_a) ? pontos1++ : (valor2_a < valor1_a ? pontos2++ : 0);
    } else {
        (valor1_a > valor2_a) ? pontos1++ : (valor2_a > valor1_a ? pontos2++ : 0);
    }

    if (atributo2 == 5) { 
        (valor1_b < valor2_b) ? pontos1++ : (valor2_b < valor1_b ? pontos2++ : 0);
    } else {
        (valor1_b > valor2_b) ? pontos1++ : (valor2_b > valor1_b ? pontos2++ : 0);
    }


    // PONTUANDO TODAS AS UNIDADES EM CADA ATRIBUTO PARA SABER A VENCEDORA
    float soma1 = valor1_a + valor1_b;
    float soma2 = valor2_a + valor2_b;

    // EXIBINDO OS RESULTADOS DOS ATRIBUTOS GANHOS EM CADA RODADA, CARTA 1 E 2
    printf("\n *** RESULTADO DA COMPARAÇÃO *** \n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Atributo 1: \n");
    printf("  %s: %.2f\n", nome1, valor1_a);
    printf("  %s: %.2f\n\n", nome2, valor2_a);

    printf("Atributo 2: \n");
    printf("  %s: %.2f\n", nome1, valor1_b);
    printf("  %s: %.2f\n\n", nome2, valor2_b);

    printf("Soma dos dois atributos:\n");
    printf("  %s: %.2f\n", nome1, soma1);
    printf("  %s: %.2f\n\n", nome2, soma2);


    if (soma1 > soma2) {
        printf("Vitória da Carta 1 (%s)\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vitória da Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
