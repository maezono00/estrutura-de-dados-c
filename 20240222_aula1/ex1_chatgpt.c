#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 10
#define TAM_NOME 50

// Definindo a estrutura da pessoa
struct Pessoa {
    char nome[TAM_NOME];
};

int main() {
    // Alocação de memória para o array de estruturas
    struct Pessoa *nomes = (struct Pessoa *)malloc(MAX_NOMES * sizeof(struct Pessoa));

    // Verifica se a alocação de memória foi bem-sucedida
    if (nomes == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Entrada dos nomes
    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i].nome);
    }

    // Impressão dos nomes enquanto não for NULL
    printf("\nNomes digitados:\n");
    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(nomes[i].nome, "") != 0) {
            printf("%d: %s\n", i + 1, nomes[i].nome);
        } else {
            break; // Sai do loop se encontrar uma string vazia
        }
    }

    // Liberando a memória alocada
    free(nomes);

    return 0;
}
