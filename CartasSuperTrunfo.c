#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   char parana = 'P';
   char estado[20];
   char sjp[40];
   int populacaosjp;
   float pibsjp;
   float areasjp;
   int pontostursjp;

    printf("Digite o código da carta:\n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade:");
    scanf("%s", &sjp);
    
    printf("Digite a população da cidade.\n");
    scanf("%d", &populacaosjp);
    printf("Digite o PIB:\n");
    scanf("%f", &pibsjp);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areasjp);
    printf("Digite o número de pontos turísticos encontrados na cidad::\n");
    scanf("%d", &pontostursjp);

    printf("Estado:%c.\n", parana);
    printf("Código da carta:%s\n", estado);
    printf("Nome da cidade:%s.\n", sjp, sjp2);
    printf("População:%d habitantes.\n", populacaosjp);
    printf("O PIB de SJP é: %.2f bilhões de reais.\n", pibsjp);//corrigir aqui.
    printf("A cidade tem %.2f km2.\n", areasjp);
    printf("Número de pontos turísticos: %d.\n", pontostursjp);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
