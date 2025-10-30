#include <stdio.h>   // Biblioteca para entrada e saída (printf, scanf)
#include <string.h>  // Biblioteca para manipulação de strings (strcpy, etc.)

// Estrutura que representa um território no jogo War
struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
};

int main() {
    // Declaração de um vetor com 5 estruturas do tipo Territorio
    struct Territorio territorios[5];

    printf("===== SISTEMA DE CADASTRO DE TERRITORIOS - JOGO WAR =====\n\n");

    // Laço para cadastrar os 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        // Lendo o nome do território
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);  // Lê até encontrar Enter (inclui espaços)

        // Lendo a cor do exército
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Lendo a quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Linha em branco para melhorar a leitura
    }

    // Exibição dos dados após o cadastro
    printf("\n===== LISTA DE TERRITORIOS CADASTRADOS =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-------------------------------------------\n");
    }

    printf("Cadastro concluido com sucesso!\n");

    return 0;
}
