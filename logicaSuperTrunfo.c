#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int resultado1, resultado2;
    char atributo1, atributo2;
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
    scanf(" %[^\n]", estado1);

    printf("Digite um numero: \n");
    scanf(" %[^\n]", carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

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
    scanf(" %[^\n]", estado2);

    printf("Digite um numero: \n");
    scanf(" %[^\n]", carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

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
     scanf("%c", &atributo1);
 
     switch (atributo1)
     {
         
        case '1':
        printf("Atributos comparados: Areas \n");
        printf("Cidade:%s \n", cidade1);
        printf("Area1: %f\n", area1);
        printf("Cidade:%s \n", cidade2);
        printf("Area2:%f \n", area2);
        printf(" Venceu carta: %d\n", area1 > area2 ? 1 : 2);
        resultado1 = area1 > area2 ? 1 : 2;

        break;
    case '2':
        printf("Atributos comparados: PIB \n");
        printf("Cidade:%s \n", cidade1);
        printf("PIB1:%f\n", PIB1);
        printf("Cidade:%s \n", cidade2);
        printf("PIB2:%f \n", PIB2);
        printf(" Venceu carta: %d\n", PIB1 > PIB2 ? 1 : 2);
        resultado1 = PIB1 > PIB2 ? 1 : 2;

        break;
    case '3':

        printf("Atributos comparados: Populacao \n");
        printf("Cidade:%s \n", cidade1);
        printf("Populacao1: %d ", populacao1);
        printf("Cidade:%s \n", cidade2);
        printf("Populacao2: %d\n", populacao2);
        printf(" Venceu carta: %d\n", populacao1 > populacao2 ? 1 : 2);
        resultado1 = populacao1 > populacao2 ? 1 : 2;
        break;
    case '4':

        printf("Atributos comparados: Pontos Turisticos: \n");
        printf("Cidade:%s \n", cidade1);
        printf("Pontos Turisticos1: %d ", pontos1);
        printf("Cidade:%s \n", cidade2);
        printf("Pontos Turisticos2: %d\n", pontos2);
        printf(" Venceu carta: %d\n",pontos1 > pontos2 ? 1 : 2);
        resultado1 = pontos1 > pontos2 ? 1 : 2;
        break;
    case '5':

        printf("Atributos comparados: Densidade \n");
        printf("Cidade:%s \n", cidade1);
        printf("Densidade1:%f\n", densidade1);
        printf("Cidade:%s \n", cidade2);
        printf("Densidade2:%f\n ", densidade2);
        printf("Venceu carta: %d\n", densidade1 < densidade2 ? 1 : 2);
        resultado1 = densidade1 < densidade2 ? 1 : 2;
        break;

    default:
        printf("Opcao invalida\n");
        break;
    }

    printf("\n");

    printf("***Escolha o segundo atributos*** \n");
    printf("***Escolha um atributo diferente do primeiro*** \n");
    printf("1. Area\n");
    printf("2. PIB\n");
    printf("3. Populacao\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade\n");
    getchar();
    scanf("%c", &atributo2);

    if (atributo1 == atributo2) //certificando que o usuario não compare os mesmo atributos
    {
        printf("voce escolheu o mesmo atributo! \n");
    }
    else
    {

        switch (atributo2)
        {

        case '1':
            printf("Atributos comparados: Areas \n");
            printf("Cidade:%s \n", cidade1);
            printf("Area1: %f\n", area1);
            printf("Cidade:%s \n", cidade2);
            printf("Area2:%f \n", area2);
            printf(" Venceu carta:%d\n", area1 > area2 ? 1 : 2);
            resultado2 = area1 > area2 ? 1 : 2;

            break;
        case '2':
            printf("Atributos comparados: PIB \n");
            printf("Cidade:%s \n", cidade1);
            printf("PIB1:%f\n", PIB1);
            printf("Cidade:%s \n", cidade2);
            printf("PIB2:%f \n", PIB2);
            printf(" Venceu carta:%d\n", PIB1 > PIB2 ? 1 : 2);
            resultado2 = PIB1 > PIB2 ? 1 : 2;

            break;
        case '3':

            printf("Atributos comparados: Populacao \n");
            printf("Cidade:%s \n", cidade1);
            printf("Populacao1: %d ", populacao1);
            printf("Cidade:%s \n", cidade2);
            printf("Populacao2: %d\n", populacao2);
            printf(" Venceu carta:%d\n",populacao1 > populacao2 ? 1 : 2);
            resultado2 = populacao1 > populacao2 ? 1 : 2;
            break;
        case '4':

            printf("Atributos comparados: Pontos Turisticos: \n");
            printf("Cidade:%s \n", cidade1);
            printf("Pontos Turisticos1: %d ", pontos1);
            printf("Cidade:%s \n", cidade2);
            printf("Pontos Turisticos2: %d\n", pontos2);
            printf(" Venceu carta:%d\n", pontos1 > pontos2 ? 1 : 2);
            resultado2 = pontos1 > pontos2 ? 1 : 2;
            break;
        case '5':

            printf("Atributos comparados: Densidade \n");
            printf("Cidade:%s \n", cidade1);
            printf("Densidade1:%f\n", densidade1);
            printf("Cidade:%s \n", cidade2);
            printf("Densidade2:%f\n ", densidade2);
            printf("Venceu carta:%d\n", densidade1 < densidade2 ? 1 : 2);
            resultado2 = densidade1 < densidade2 ? 1 : 2;
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
        printf("\n");
        if (resultado1 && resultado2)
        {
            printf("Carta 1 venceu!\n");
        }
        else if (!resultado1 && !resultado2)
        {
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Empatou!\n");
        }
    }
}

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

   


