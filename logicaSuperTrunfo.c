#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int menu;
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
    scanf("%s", cidade2);

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

    // comparação de atributos, população, área, PIB, PIB Per capita e densidade.
    // menu interativo para a escolha da comparação de atributos

     printf("\n");

     printf("***Escolha um dos atributos*** \n");
     printf("1. Area\n");
     printf("2. PIB\n");
     printf("3. Populacao\n");
     printf("4. Pontos turisticos\n");
     printf("5. Densidade\n");
     scanf("%d", &menu);
 
     switch (menu)
     {
         
     case 1:
         if (area1 > area2)
         {
             printf("Cidade:%s \n", cidade1);
             printf("Atributos comparados: Areas \n");
             printf("Area1: %f ", area1);
             printf("Area2:%f \n", area2);
             printf("Carta 1 Venceu!||Empate\n");
         }
         else if (area1 < area2)
 
         {
             printf("Cidade:%s \n", cidade2);
             printf("Atributos comparados: Areas \n");
             printf("Area1: %f ", area1);
             printf("Area2:%f \n", area2);
             printf("Carta 2 Venceu!");
         }
         else
         {   
             printf("Atributos comparados: Areas \n");
             printf("Area1: %f ", area1);
             printf("Area2:%f \n", area2);
             printf("Empate\n");
         }
         break;
     case 2:
         if (PIB1 > PIB2)
         {
             printf("Cidade:%s \n", cidade1);
             printf("Atributos comparados: PIB \n");
             printf("PIB1:%f ", PIB1);
             printf("PIB2:%f \n", PIB2);
             printf("Carta 1 Venceu!");
         }
         else if (PIB1 < PIB2)
         {
             printf("Cidade:%s \n", cidade2);
             printf("Atributos comparados: PIB: \n");
             printf("PIB1: %f ", PIB1);
             printf("PIB2:%f \n", PIB2);
             printf("Carta 2 Venceu!");
         }else{
             printf("Atributos comparados: PIB: \n");
             printf("PIB1: %f ", PIB1);
             printf("PIB2:%f \n", PIB2);
             printf("Empate\n");
         }
         break;
     case 3:
         if (populacao1 > populacao2)
         {
             printf("Cidade:%s \n", cidade1);
             printf("Atributos comparados: Populacao \n");
             printf("Populacao1: %d ", populacao1);
             printf("Populacao2: %d\n", populacao2);
             printf("Carta 1 Venceu!");
         }
         else if (populacao1 < populacao2)
         {
             printf("Cidade:%s \n", cidade2);
             printf("Atributos comparados: Populacao \n");
             printf("Populacao1: %d ", populacao1);
             printf("Populacao2: %d\n", populacao2);
             printf("Carta 2 Venceu!");
         } else{
             printf("Atributos comparados: Populacao \n");
             printf("Populacao1: %d ", populacao1);
             printf("Populacao2: %d\n", populacao2);
             printf("Empate\n");
         }
         break;
     case 4:
         if (pontos1 > pontos2)
         {
             printf("Cidade:%s \n", cidade1);
             printf("Atributos comparados: Pontos Turisticos: \n");
             printf("Pontos Turisticos1: %d ", pontos1);
             printf("Pontos Turisticos2: %d\n", pontos2);
             printf("Carta 1 Venceu!");
         }
         else if (pontos1 < pontos2)
         {
             printf("Cidade:%s \n", cidade2);
             printf("Atributos comparados: Pontos Turisticos \n");
             printf("Pontos Turisticos1: %d ", pontos1);
             printf("Pontos Turisticos2: %d\n", pontos2);
             printf("Carta 2 Venceu!");
         }   else{
             printf("Atributos comparados: Pontos Turisticos \n");
             printf("Pontos Turisticos1: %d ", pontos1);
             printf("Pontos Turisticos2: %d\n", pontos2);
             printf("Empate\n");
         }
         break;
     case 5:
         if (densidade1 < densidade2)
         {
             printf("Cidade:%s \n", cidade1);
             printf("Atributos comparados: Densidade \n");
             printf("Densidade1:%f ", densidade1);
             printf("Densidade2:%f\n ", densidade2);
             printf("Carta 1 Venceu!");
         }
         else if (densidade1 > densidade2)
         {
             printf("Cidade:%s \n", cidade2);
             printf("Atributos comparados: Densidade \n");
             printf("Densidade1: %f ", densidade1);
             printf("Densidade2:%f\n ", densidade2);
             printf("Carta 2 Venceu!");
         } else{
             printf("Atributos comparados: Densidade \n");
             printf("Densidade1: %f ", densidade1);
             printf("Densidade2:%f\n ", densidade2);
             printf("Empate\n");
         }
         break;
     default:
         printf("Opcao invalida\n");
         break;

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
