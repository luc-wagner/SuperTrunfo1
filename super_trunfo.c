#include <stdio.h>

int main() {
    //carta 1
    char estado1[5];
    char codigodacidade1[5];
    char nomedacidade1[20];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;
    float superpoder1;

    //carta 2
    char estado2[5];
    char codigodacidade2[5];
    char nomedacidade2[20];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;
    float superpoder2;
    int resultado;

    printf ("Complete os dados da Carta 1: \n"); //O usuário irá inserir os dados da Carta 1

    printf ("Digite o Estado: \n");
    scanf ("%s", estado1);

    printf ("Digite o código da cidade: \n");
    scanf ("%s", codigodacidade1);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomedacidade1);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a área: \n");
    scanf ("%f", &area1);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib1);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos1);

    printf ("\nDados da Carta 1: \n"); //Serão exibidos dos dados da carta 1
    printf ("Estado: %s\n", estado1);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade1, nomedacidade1);
    printf ("População: %d\nÁrea: %.3f km²\n", populacao1, area1);
    printf ("PIB: %.2f reais\nNúmero de Pontos Turísticos: %d\n", pib1, pontosturisticos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1 = (float) populacao1 / area1);
    printf ("PIB per capta: %.2f reais\n", pibpercapta1 = (float) pib1 / populacao1);
    printf ("Super poder: %.2f\n", superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + (1 / densidadepopulacional1) + pibpercapta1);

    printf ("\nComplete os dados da Carta 2: \n"); //O usuário irá inserir os dados da carta 2

    printf ("Digite o Estado: \n");
    scanf ("%s", estado2);

    printf ("Digite o código da cidade: \n");
    scanf ("%s", codigodacidade2);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomedacidade2);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área: \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos2);

    printf ("\nDados da Carta 2: \n"); //Serão exibidos os dados da Carta 2
    printf ("Estado: %s\n", estado2);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade2, nomedacidade2);
    printf ("População: %d\nÁrea: %.3f km²\n", populacao2, area2);
    printf ("PIB: %.2f reais\nNúmero de Pontos Turísticos: %d\n", pib2, pontosturisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2 = (float) populacao2 / area2);
    printf ("PIB per capta: %.2f reais\n", pibpercapta2 = (float) pib2 / populacao2);
    printf ("Super poder: %.2f\n", superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidadepopulacional2) + pibpercapta2);

    //Comparações entre a carta 1 e carta 2
    printf("\nHora de comparar! Resultado 1 é verdadeiro, Resultado 0 é falso.\n");
    
        // População
    resultado = populacao1 > populacao2;
    printf("\nCarta 1 tem a maior população? %d\n", resultado);

    // Área
    resultado = area1 > area2;
    printf("\nCarta 1 tem maior área? %d\n", resultado);

    // PIB
    resultado = pib1 > pib2;
    printf("\nCarta 1 tem maior PIB? %d\n", resultado);

    // Pontos turísticos
    resultado = pontosturisticos1 > pontosturisticos2;
    printf("\nCarta 1 tem mais pontos turísticos? %d\n", resultado);

    // Densidade Populacional
    resultado = densidadepopulacional1 > densidadepopulacional2;
    printf("\nCarta 1 tem maior densidade populacional? %d\n", resultado);

    // PIB per capita
    resultado = pibpercapta1 > pibpercapta2;
    printf("\nCarta 1 tem maior PIB per capita? %d\n", resultado);

    // Superpoder
    resultado = superpoder1 > superpoder2;
    printf("\nCarta 1 tem maior superpoder? %d\n", resultado);
    
    return 0;
}