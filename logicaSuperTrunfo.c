#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[20], estado2[20];
    char carta1[20], carta2[20];
    char cidade1[20], cidade2[20];
    float area1, area2, PIB1, PIB2;
    float PIBP1, PIBP2, densidade1, densidade2;
    unsigned int populacao1, populacao2, pontos1, pontos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // entrada de dados cartas 1 e 2
    // CARTA 1
    printf("Carta 1\n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite um numero: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a areakm: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o tamanho da populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos1);

    // CARTA 2
    printf("Carta 2\n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite um numero: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a areakm: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o tamanho da populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // calculo de novos atributos
    PIBP1 = (float)(PIB1 / populacao1);
    densidade1 = (float)(populacao1/area1);
    PIBP2 = (float)(PIB2 / populacao2);
    densidade2 = (float)(populacao2/area2);

    // comparação de atributos
    printf("\nComparacao de Cartas(Areas) \n");
    printf("\n");
    if (area1 > area2)
    {
        printf("Carta 1 - %s: %2.f\n", cidade1, area1);
        printf("Carta 2 - %s:%2.f\n", cidade2, area2);
        printf("Resultado: Carta 1 Venceu!");
    }
    else
    {
        printf("Carta 1 - %s:%2.f\n", cidade1, area1);
        printf("Carta 2 - %s:%2.f\n", cidade2, area2);
        printf("Resultado: Carta 2 Venceu!");
    }

    printf("\n");
    printf("\nComparacao de Cartas(PIB) \n");
    printf("\n");

     if (PIB1 > PIB2)
    {
        printf("Carta 1 - %s: %2.f\n", cidade1, PIB1);
        printf("Carta 2 - %s:%2.f\n", cidade2, PIB2);
        printf("Resultado: Carta 1 Venceu!");
    }
    else
    {
        printf("Carta 1 - %s:%2.f\n", cidade1, PIB1);
        printf("Carta 2 - %s:%2.f\n", cidade2, PIB2);
        printf("Resultado: Carta 2 Venceu!");
    }

    printf("\n");
    printf("\nComparacao de Cartas(Populacao) \n");
    printf("\n");

     if (populacao1 > populacao2)
    {
        printf("Carta 1 - %s: %2.d\n", cidade1, populacao1);
        printf("Carta 2 - %s:%2.d\n", cidade2, populacao2);
        printf("Resultado: Carta 1 Venceu!");
    }
    else
    {
        printf("Carta 1 - %s:%2.d\n", cidade1, populacao1);
        printf("Carta 2 - %s:%2.d\n", cidade2, populacao2);
        printf("Resultado: Carta 2 Venceu!");
    }

    printf("\n");
    printf("\nComparacao de Cartas(PIBP) \n");
    printf("\n");

         if (PIBP1 > PIBP2)
    {
        printf("Carta 1 - %s: %2.f\n", cidade1, PIBP1);
        printf("Carta 2 - %s:%2.f\n", cidade2, PIBP2);
        printf("Resultado: Carta 1 Venceu!");
    }
    else
    {
        printf("Carta 1 - %s:%2.f\n", cidade1, PIBP1);
        printf("Carta 2 - %s:%2.f\n", cidade2, PIBP2);
        printf("Resultado: Carta 2 Venceu!");
    }

    printf("\n");
    printf("\nComparacao de Cartas(Densidade) \n");
    printf("\n");

     if (densidade1 < densidade2 )
    {
        printf("Carta 1 - %s: %.f\n", cidade1, densidade1);
        printf("Carta 2 - %s:%.f\n", cidade2, densidade2);
        printf("Resultado: Cidade %s Venceu!", cidade1, cidade2);
    }
    else
    {
        printf("Carta 1 - %s:%.f\n", cidade1, densidade1);
        printf("Carta 2 - %s:%.f\n", cidade2, densidade2);
        printf("Resultado: Cidade %s Venceu!", cidade1, cidade2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
