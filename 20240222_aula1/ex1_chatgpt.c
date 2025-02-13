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
    // Aloca��o de mem�ria para o array de estruturas
    struct Pessoa *nomes = (struct Pessoa *)malloc(MAX_NOMES * sizeof(struct Pessoa));

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (nomes == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Entrada dos nomes
    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i].nome);
    }

    // Impress�o dos nomes enquanto n�o for NULL
    printf("\nNomes digitados:\n");
    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(nomes[i].nome, "") != 0) {
            printf("%d: %s\n", i + 1, nomes[i].nome);
        } else {
            break; // Sai do loop se encontrar uma string vazia
        }
    }

    // Liberando a mem�ria alocada
    free(nomes);

    return 0;
}
