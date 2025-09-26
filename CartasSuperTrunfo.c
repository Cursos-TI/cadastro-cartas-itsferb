#include <stdio.h>

int main() {

    /*********** Variáveis - Carta 01 ***********/
    // Realizada a declaração de variáveis para a carta 01

    char codigo_1[4];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_1[4];  // Estado: Estado da cidade.
    char nomecidade_1[50];  // Nome da Cidade: O nome da cidade. 
    unsigned long int populacao_1; //  População: O número de habitantes da cidade. 
    float area_1; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_1; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_1;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_1;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_1;  // PIB per Capita: indica a riqueza média por pessoa na cidade.
    float superpoder_1;  // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).

    /*********** Variáveis - Carta 02 ***********/
    // Realizada a declaração de variáveis para a carta 02

    char codigo_2[4];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_2[4];  // Estado: Estado da cidade.
    char nomecidade_2[50];  // Nome da Cidade: O nome da cidade. 
    unsigned long int populacao_2; //  População: O número de habitantes da cidade. 
    float area_2; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_2; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_2;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_2;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_2;  // PIB per Capita: indica a riqueza média por pessoa na cidade.
    float superpoder_2;  // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).

    /*********** Variáveis - Resultados ***********/
    // Realizada a declaração de variáveis para os resultados das comparação das cartas

    int resultado_populacao;
    int resultado_area;
    int resultado_PIB;
    int resultado_pontosturisticos;
    int resultado_densidade;
    int resultado_PIBpercapita;
    int resultado_superpoder;

    int resultado_1 = 0;
    int resultado_2 = 0;


    /*********** Entrada de Dados - Carta 01 ***********/
    // Solicitado ao usuário para informar os dados da carta 01

    printf("CADASTRO DA CARTA 1:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%3s", codigo_1);    

    printf("Informe o Estado:\n");
    scanf("%3s", estado_1);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_1);    

    printf("Informe a População:\n");
    scanf("%lu", &populacao_1);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_1);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_1);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_1); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");

    /*********** Entrada de Dados - Carta 02 ***********/
    // Solicitado ao usuário para informar os dados da carta 02

    printf("CADASTRO DA CARTA 2:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%3s", codigo_2);    

    printf("Informe o Estado:\n");
    scanf("%3s", estado_2);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_2);    

    printf("Informe a População:\n");
    scanf("%lu", &populacao_2);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_2);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_2);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_2); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");    

    /*********** Cálculo de Dados - Carta 01 ***********/
    // Realizados os cálculos referente carta 01

    densidade_1 = (float) populacao_1 / area_1;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
    PIBpercapita_1 = PIB_1 / (float) populacao_1;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
    superpoder_1 = (float) populacao_1 + area_1 + PIB_1 + pontosturisticos_1 + PIBpercapita_1 + (1/densidade_1); // Calcular o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    /*********** Cálculo de Dados - Carta 02 ***********/
    // Realizados os cálculos referente carta 02

    densidade_2 = (float) populacao_2 / area_2;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
    PIBpercapita_2 = PIB_2 / (float) populacao_2;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
    superpoder_2 = (float) populacao_2 + area_2 + PIB_2 + pontosturisticos_2 + PIBpercapita_2 + (1/densidade_2); // Calcular o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    /*********** Saída de Dados ***********/

    printf("*************************************\n");
    printf("CARTAS CADASTRADAS:\n");

    /*********** Saída de Dados - Carta 01 ***********/
    // Apresentados os dados da carta 01

    printf("*************************************\n");   
    printf("CARTA 01:\n");
    printf("Código da Carta: %s\n", codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", nomecidade_1);
    printf("População: %lu habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$%.2f\n", PIB_1);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_1);
    printf("Super Poder: R$%.2f\n", superpoder_1);

    /*********** Saída de Dados - Carta 02 ***********/
    // Apresentados os dados da carta 02

    printf("*************************************\n");
    printf("CARTA 02:\n");
    printf("Código da Carta: %s\n", codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", nomecidade_2);
    printf("População: %lu habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$%.2f\n", PIB_2);
    printf("Pontos Turísticos: %d\n", pontosturisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_2);
    printf("Super Poder: R$%.2f\n", superpoder_2);

    /*********** Comparação das Cartas ***********/

    printf("*************************************\n");
    printf("COMPARAÇÃO DAS CARTAS:\n");
    printf("*************************************\n");

    //População
    if (populacao_1 > populacao_2) {
        resultado_1 ++; 
        printf("População: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (populacao_2 > populacao_1) {
        resultado_2 ++;
        printf("População: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("População: Empatou!\n");

    printf("*************************************\n");

    //Área
    if (area_1 > area_2) {
        resultado_1 ++; 
        printf("Área: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (area_2 > area_1) {
        resultado_2 ++;
        printf("Área: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("Área: Empatou!\n");

    printf("*************************************\n");   

    //PIB
    if (PIB_1 > PIB_2) {
        resultado_1 ++;  
        printf("PIB: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (PIB_2 > PIB_1) {
        resultado_2 ++;
        printf("PIB: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("PIB: Empatou!\n");

    printf("*************************************\n");

    //Pontos Turísticos
    if (pontosturisticos_1 > pontosturisticos_2) {
        resultado_1 ++; 
        printf("Pontos Turísticos: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (pontosturisticos_2 > pontosturisticos_1) {
        resultado_2 ++;
        printf("Pontos Turísticos: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("Pontos Turísticos: Empatou!\n");

    printf("*************************************\n");

    //Densidade - Possui comparação inversa dos demais campos
    if (densidade_1 < densidade_2) {
        resultado_1 ++; 
        printf("Densidade: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (densidade_2 < densidade_1) {
        resultado_2 ++;
        printf("Densidade: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("Densidade: Empatou!\n");

    printf("*************************************\n");        

    //PIB Per Capita
    if (PIBpercapita_1 > PIBpercapita_2) {
        resultado_1 ++; 
        printf("PIB Per Capita: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (PIBpercapita_2 > PIBpercapita_1) {
        resultado_2 ++;
        printf("PIB Per Capita: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("PIB Per Capita: Empatou!\n");

    printf("*************************************\n");

    //Super Poder
    if (superpoder_1 > superpoder_2) {
        resultado_1 ++;  
        printf("Super Poder: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
    else if (superpoder_2 > superpoder_1) {
        resultado_2 ++;
        printf("Super Poder: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
    else 
        printf("Super Poder: Empatou!\n");
  

    /*********** Resultados das Cartas ***********/

    printf("*************************************\n");
    printf("SOMATÓRIO:\n");
    printf("*************************************\n");

    printf("A Carta 01 - %s/%s atingiu %d pontos!\n", nomecidade_1, estado_1, resultado_1);
    printf("A Carta 02 - %s/%s atingiu %d pontos!\n", nomecidade_2, estado_2, resultado_2);

    printf("*************************************\n");
    printf("RESULTADO FINAL:\n");
    printf("*************************************\n");

    if (resultado_1 > resultado_2) {
        printf("PARABÉNS! A CARTA 01 - %s/%s VENCEU!!!\n", nomecidade_1, estado_1); }
    else if (superpoder_2 > superpoder_1) {
        printf("PARABÉNS! A CARTA 02 - %s/%s VENCEU!!!\n", nomecidade_2, estado_2); }
    else 
        printf("EMPATE!!!\n");

    return 0;

}