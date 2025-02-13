#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int codigo;
    char nome[20];
    struct no *next;
} no;

int main() {
    // Ponteiro sentinela
    struct no *I = (struct no *)malloc(sizeof(struct no));
    if (I == NULL) {
        printf("Erro ao alocar memória para o sentinela.\n");
        return 1;
    }
    I->next = NULL;

    // Ponteiro para percorrer a lista
    struct no *temp = NULL;

    // Inserção de nós na lista
    for (int i = 0; i < 3; i++) {
        struct no *novo_no = (struct no *)malloc(sizeof(struct no));
        if (novo_no == NULL) {
            printf("Erro ao alocar memória para um novo nó.\n");
            return 1;
        }

        printf("\nInforme o codigo: ");
        scanf("%d", &novo_no->codigo);

        printf("Informe o nome: ");
        scanf("%s", novo_no->nome);

        novo_no->next = I->next;
        I->next = novo_no;
    }

    // Impressão dos dados dos nós
    printf("\nDados dos nos:\n");
    temp = I->next;
    while (temp != NULL) {
        printf("Codigo: %d, Nome: %s\n", temp->codigo, temp->nome);
        temp = temp->next;
    }

    // Liberação da memória alocada
    temp = I->next;
    while (temp != NULL) {
        struct no *temp_prox = temp->next;
        free(temp);
        temp = temp_prox;
    }
    free(I);

    return 0;
}
