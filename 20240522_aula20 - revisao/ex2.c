#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No *esquerda;
  struct No *direita;
} No;

No *criarNo(int valor) {
  No *novo = malloc(sizeof(No));
  if (novo) {
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
  } else {
    printf("Erro: Sem mem�ria para criar n�!\n");
    return NULL;
  }
}

No *inserirArvoreBinaria(No **raiz, int valor) {
  if (*raiz == NULL) {
    *raiz = criarNo(valor);
    return *raiz;
  } else if (valor < (*raiz)->valor) {
    (*raiz)->esquerda = inserirArvoreBinaria(&(*raiz)->esquerda, valor);
  } else {
    (*raiz)->direita = inserirArvoreBinaria(&(*raiz)->direita, valor);
  }
  return *raiz;
}

No *removerNo(No *raiz, int valor) {
  if (raiz == NULL) {
    return NULL;
  } else if (valor < raiz->valor) {
    raiz->esquerda = removerNo(raiz->esquerda, valor);
  } else if (valor > raiz->valor) {
    raiz->direita = removerNo(raiz->direita, valor);
  } else {
    // N� a ser removido encontrado
    if (!raiz->esquerda && !raiz->direita) {
      // N� folha: libera mem�ria
      free(raiz);
      raiz = NULL;
    } else if (!raiz->esquerda) {
      // N� com apenas filho � direita: substitui o n� pelo filho direito
      No *temp = raiz;
      raiz = raiz->direita;
      free(temp);
    } else if (!raiz->direita) {
      // N� com apenas filho � esquerda: substitui o n� pelo filho esquerdo
      No *temp = raiz;
      raiz = raiz->esquerda;
      free(temp);
    } else {
      // N� com dois filhos: encontra o sucessor no lado direito e o coloca no lugar do n� a ser removido
      No *temp = raiz->direita;
      while (temp->esquerda) {
        temp = temp->esquerda;
      }
      raiz->valor = temp->valor;
      raiz->direita = removerNo(raiz->direita, temp->valor);
    }
  }
  return raiz;
}

void exibirPreOrdem(No *raiz) {
  if (raiz) {
    printf("%d ", raiz->valor);
    exibirPreOrdem(raiz->esquerda);
    exibirPreOrdem(raiz->direita);
  }
}

void exibirEmOrdem(No *raiz) {
  if (raiz) {
    exibirEmOrdem(raiz->esquerda);
    printf("%d ", raiz->valor);
    exibirEmOrdem(raiz->direita);
  }
}

void exibirPosOrdem(No *raiz) {
  if (raiz) {
    exibirPosOrdem(raiz->esquerda);
    exibirPosOrdem(raiz->direita);
    printf("%d ", raiz->valor);
  }
}

void destruirArvoreBinaria(No *raiz) {
  if (raiz) {
    destruirArvoreBinaria(raiz->esquerda);
    destruirArvoreBinaria(raiz->direita);
    free(raiz);
  }
}

int main() {
  No *raiz = NULL;
  int valor, opcao;

  do {
    printf("\nMenu de �rvore Bin�ria:\n");
    printf("1. Inserir valor\n");
    printf("2. Remover valor\n");
    printf("3. Exibir Pr�-ordem\n");
    printf("4. Exibir Em-ordem\n");
    printf("5. Exibir P�s-ordem\n");
    printf("6. Destruir �rvore\n");
    printf("0. Sair\n");
    printf("Op��o: ");
    scanf("%d", &opcao);

    switch (opcao) {
