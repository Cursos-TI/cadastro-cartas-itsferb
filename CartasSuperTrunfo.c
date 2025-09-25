#include <stdio.h>

int main() {

    /*********** Variáveis - Carta 01 ***********/

    char codigo_1[5];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_1[5];  // Estado: Estado da cidade.
    char nomecidade_1[50];  // Nome da Cidade: O nome da cidade. 
    int populacao_1; //  População: O número de habitantes da cidade. 
    float area_1; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_1; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_1;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_1;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_1;  // PIB per Capita: indica a riqueza média por pessoa na cidade.

    /*********** Variáveis - Carta 02 ***********/

    char codigo_2[5];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_2[5];  // Estado: Estado da cidade.
    char nomecidade_2[50];  // Nome da Cidade: O nome da cidade. 
    int populacao_2; //  População: O número de habitantes da cidade. 
    float area_2; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_2; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_2;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_2;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_2;  // PIB per Capita: indica a riqueza média por pessoa na cidade.

    /*********** Entrada de Dados - Carta 01 ***********/

    printf("CADASTRO DA CARTA 1:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%4s", codigo_1);    

    printf("Informe o Estado:\n");
    scanf("%4s", estado_1);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_1);    

    printf("Informe a População:\n");
    scanf("%d", &populacao_1);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_1);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_1);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_1); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");

    /*********** Entrada de Dados - Carta 02 ***********/

    printf("CADASTRO DA CARTA 2:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%4s", codigo_2);    

    printf("Informe o Estado:\n");
    scanf("%4s", estado_2);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_2);    

    printf("Informe a População:\n");
    scanf("%d", &populacao_2);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_2);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_2);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_2); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");    

    /*********** Cálculo de Dados - Carta 01 ***********/

    densidade_1 = (float) populacao_1 / area_1;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.

    PIBpercapita_1 = PIB_1 / (float) populacao_1;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 

    /*********** Cálculo de Dados - Carta 02 ***********/

    densidade_2 = (float) populacao_2 / area_2;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.

    PIBpercapita_2 = PIB_2 / (float) populacao_2;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 

    /*********** Saída de Dados ***********/

    printf("*************************************\n");
    printf("CARTAS CADASTRADAS:\n");

    /*********** Saída de Dados - Carta 01 ***********/

    printf("*************************************\n");   
    printf("CARTA 01:\n");
    printf("Código da Carta: %s\n", codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", nomecidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$%.2f\n", PIB_1);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_1);

    /*********** Saída de Dados - Carta 02 ***********/

    printf("*************************************\n");
    printf("CARTA 02:\n");
    printf("Código da Carta: %s\n", codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", nomecidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$%.2f\n", PIB_2);
    printf("Pontos Turísticos: %d\n", pontosturisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_2);

    /*********** xx ***********/
    return 0;

}