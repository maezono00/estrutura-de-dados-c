#include <stdio.h>

#define TAM_MAX 100

typedef struct {
  int dados[TAM_MAX];
  int topo;
} Pilha;

typedef struct {
  int dados[TAM_MAX];
  int inicio, fim;
} Fila;

void inicializarPilha(Pilha *p) {
  p->topo = 0;
}

void empilhar(Pilha *p, int valor) {
  if (p->topo < TAM_MAX) {
    p->dados[p->topo++] = valor;
  } else {
    printf("Erro: Pilha cheia!\n");
  }
}

int desempilhar(Pilha *p) {
  if (p->topo > 0) {
    return p->dados[--p->topo];
  } else {
    printf("Erro: Pilha vazia!\n");
    return -1;
  }
}

void inicializarFila(Fila *f) {
  f->inicio = 0;
  f->fim = 0;
}

void enfileirar(Fila *f, int valor) {
  if (f->fim < TAM_MAX) {
    f->dados[f->fim++] = valor;
  } else {
    printf("Erro: Fila cheia!\n");
  }
}

int desenfileirar(Fila *f) {
  if (f->inicio < f->fim) {
    return f->dados[f->inicio++];
  } else {
    printf("Erro: Fila vazia!\n");
    return -1;
  }
}

void desempilharParaFila(Pilha *p, Fila *f) {
  while (p->topo > 0) {
    enfileirar(f, desempilhar(p));
  }
}

void exibirFila(Fila *f) {
  if (f->inicio == f->fim) {
    printf("Fila vazia.\n");
  } else {
    printf("Fila: ");
    for (int i = f->inicio; i < f->fim; i++) {
      printf("%d ", f->dados[i]);
    }
    printf("\n");
  }
}

int main() {
  Pilha pilha;
  Fila fila;

  inicializarPilha(&pilha);
  inicializarFila(&fila);

  // Empilhar alguns elementos na pilha
  empilhar(&pilha, 1);
  empilhar(&pilha, 2);
  empilhar(&pilha, 3);
  empilhar(&pilha, 4);
  empilhar(&pilha, 5);

  // Desempilhar a pilha e armazenar os elementos na fila
  desempilharParaFila(&pilha, &fila);

  // Exibir a fila
  exibirFila(&fila);

  return 0;
}
