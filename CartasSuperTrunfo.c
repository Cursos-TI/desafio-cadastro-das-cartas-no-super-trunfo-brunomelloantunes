#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
   char sjp1[50] = "São José dos Pinhais: SJP01.";
   long long int populacaosjp;
   float pibsjp;
   float areasjp;
   int pontostursjp;

    printf("Digite a população de são José dos Pinhais-PR.\n");
    scanf("%lld", &populacaosjp);

    printf("Digite o PIB de São José dos Pinhais-PR:\n");
    scanf("%f", &pibsjp);
   
    printf("Digite a área da cidade de São José dos Pinhais-PR, em km2:\n");
    scanf("%f", &areasjp);
    
    printf("Digite o número de pontos turísticos encontrados na cidade de São José dos Pinhais:\n");
    scanf("%d", &pontostursjp);

    printf("%s\n", sjp1);
    printf("População: %lld habitantes.\n", populacaosjp);
    printf("O PIB de SJP é: %.2f bilhões de reais.\n", pibsjp);//corrigir aqui.
    printf("São José dos Pinhais tem %.2f km2.\n", areasjp);
    printf("Número de pontos turísticos: %d.\n", pontostursjp);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
