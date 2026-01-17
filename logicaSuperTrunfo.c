#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Aqui inicia a criação da lógica do jogo Super Trunfo em C.
    // Deve conter variaveis para armazenar os atributos das cartas.
    // Deve também conter dados primitivos como int, float e char.
    // Aqui será inserida a lógica para criar duas cartas com atributos diferentes.

    // Aqui estão os atributos que a primeira carta deve ter:
    char estado1;
    char codigo1[10];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    int escolhaUsuario;

    // Aqui estão os atributos que a segunda carta deve ter:

    char estado2;
    char codigo2[10];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    int escolhaUsuario2;

    // Aqui calcula a implementação para calcular a densidade populaciona. População / área
    // E também o PIB per capita. PIB / população

    float densidade1, densidade2;
    float calculo_pib1, calculo_pib2;

    // feat: Super Poder

    float superPoder1, superPoder2;

    // Aqui está a Introdução do jogo para o usúario inserir os dados das cartas
    // Esse código recebe os dados da primeira carta e depois imprime na tela os dados inseridos

    printf("Bem vindo ao super trunfo de programação em C!. Aqui você irá inserir os dados de duas cartas.\n");
    printf("Insira os dados da carta 1:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (ex: RJ, SP): \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Aqui o código recebe os dados da segunda carta e depois imprime na tela os dados inseridos

    printf("Agora insira os dados da carta 2:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (ex: RJ, SP): \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Aqui calcula a desnidade populacional e o PIB per capita da segunda carta
    densidade1 = (float)populacao1 / area1;
    calculo_pib1 = (float)pib1 / populacao1;
    densidade2 = (float)populacao2 / area2;
    calculo_pib2 = (float)pib2 / populacao2;

    // Super poder -Soma pupulação + area + pib + pontos turísticos + pib per capita e o inverso da densidade populacional
    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + calculo_pib1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + calculo_pib2 + (1 / densidade2);

    // Soma dos Atributos: Após comparar os dois atributos individualmente.
    float Valor1DaCarta1, Valor1DaCarta2;
    float Valor2DaCarta1, Valor2DaCarta2;
    float soma1, soma2;

    // Aqui irá retornar os dados inseridos da primeira carta

    printf("\nCarta 1 :\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", calculo_pib1);
    printf("Resultado do super poder: %.2f \n", superPoder1);

    // Aqui irá retornar os dados inseridos da segunda carta

    printf("\nCarta 2 :\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f reais\n", calculo_pib2);
    printf("Resultado do super poder: %.2f \n", superPoder2);

    // Comparação entre as duas cartas
    // printf("\nComparação de cartas(Atributo: População)\n");
    // printf(" Carta 1 - %s: %lu \n", cidade1);
    // printf(" Carta 2 - %s: %lu \n", cidade2);

    // escolha do usuario qual atributo irá usar
    printf("Escolha qual atributo você quer comparar\n");
    printf("1. Nome da Cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. Pib\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha uma opção:  ");
    scanf("%d", &escolhaUsuario);

    // Opção escolhida pelo usuário
    switch (escolhaUsuario)
    {
    case 1: // População
        Valor1DaCarta1 = populacao1;
        Valor1DaCarta2 = populacao2;

        break;

    case 2: // Área
        Valor1DaCarta1 = area1;
        Valor1DaCarta2 = area2;
        break;

    case 3: // PIB
        Valor1DaCarta1 = pib1;
        Valor1DaCarta2 = pib2;

        break;

    case 4: // Pontos turísticos
        Valor1DaCarta1 = pontos_turisticos1;
        Valor1DaCarta2 = pontos_turisticos2;

        break;

    case 5: // Densidade (regra invertida)
        Valor1DaCarta1 = -densidade1;
        Valor1DaCarta2 = -densidade2;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("Escolha qual atributo você quer comparar novamente.\n");
    printf("Atenção: você deve escolher um atributo diferente.\n");
    printf("1. Nome da Cidade \n");
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. Pib \n");
    printf("5. Número de pontos turísticos \n");
    printf("6. Densidade demográfica \n");
    printf("Escolha uma opção:  ");
    scanf("%d", &escolhaUsuario2);

    if (escolhaUsuario == escolhaUsuario2)
    {
        printf("Você escolheu o mesmo atributo\n");
    }
    else
    {
        switch (escolhaUsuario2)
        {
        case 1: // População
            Valor2DaCarta1 = populacao1;
            Valor2DaCarta2 = populacao2;
            break;

        case 2: // Área
            Valor2DaCarta1 = area1;
            Valor2DaCarta2 = area2;

            break;
        case 3: // PIB
            Valor2DaCarta1 = pib1;
            Valor2DaCarta2 = pib2;
            break;

        case 4: // Pontos turísticos
            Valor2DaCarta1 = pontos_turisticos1;
            Valor2DaCarta2 = pontos_turisticos2;
            break;

        case 5: // Densidade (regra invertida)
            Valor2DaCarta1 = -densidade1;
            Valor2DaCarta2 = -densidade2;
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
        soma1 = Valor1DaCarta1 + Valor2DaCarta1;
        soma2 = Valor1DaCarta2 + Valor2DaCarta2;

        printf("Resultado\n");
        printf("%s soma: %.2f\n", cidade1, soma1);
        printf("%s soma: %.2f\n", cidade2, soma2);

        if (soma1 > soma2)
        {
            printf("Você ganhou\n");
        }
        else if (soma1 == soma2)
        {
            printf("Empatou\n");
        }
        else
        {
            printf("você perdeu\n");
        }
    }

    return 0;
}
