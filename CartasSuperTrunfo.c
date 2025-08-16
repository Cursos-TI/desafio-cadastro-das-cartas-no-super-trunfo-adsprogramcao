#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int carta1; 
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    char estado1 [20], estado2 [20];
    char codigo1 [4] = "A01", codigo2 [4] = "A02"; //3 posições úteis + uma posição para o terminador "\0"
    char cidade1 [20], cidade2 [20];
    

    printf("Carta 1 \n");
    printf("Escolha o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade1);

    printf("Quantidade da populacao: ");
    scanf("%d", &populacao1);

    printf("Qual a area: ");
    scanf("%f", &area1);

    printf("Qual o PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);


    printf("carta 1\nEstado: %s\n", estado1);
    printf("Codigo: %s\nCidade: %s\n", codigo1, cidade1);
    printf("Populacao: %d\nArea: %f\n", populacao1, area1);
    printf("PIB: %f\nPontos Turisticos: %d\n", pib1, pontosturisticos1);


    printf("Carta 2 \n");
    printf("Escolha o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade2);

    printf("Quantidade da populacao: ");
    scanf("%d", &populacao2);

    printf("Qual a area: ");
    scanf("%f", &area2);

    printf("Qual o PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);


    printf("carta 2\nEstado: %s\n", estado2);
    printf("Codigo: %s\nCidade: %s\n", codigo2, cidade2);
    printf("Populacao: %d\nArea: %f\n", populacao2, area2);
    printf("PIB: %f\nPontos Turisticos: %d", pib2, pontosturisticos2);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
