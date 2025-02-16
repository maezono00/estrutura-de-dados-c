//Desenvolva um programa que permita a inserção de 5 elementos na lista e que esteja encadeado

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int codigo;
    char nome[30];
    struct no *next; //Ponteiro para pular para o próximo nó
} no;

int main() {
    //Este código cria uma lista encadeada de 5 STRUCTS.
    //Cada struct possui um código, um nome e o endereço da próxima STRUCT
    struct no *A, *B, *Inicio;

    Inicio = NULL; //Início Nulo

    for(int i = 0; i < 5; i++) {
        //Alocamos memória para o A
        A = (no*) malloc(sizeof(no));

        printf("\nQual eh o codigo, meu rei? ");
        scanf("%d", &A->codigo);
        printf("\nQual eh o nome, chefia? ");
        scanf("%s", &A->nome);
        //Preenchemos as informações na struct

        //Se o início for nulo, ou seja, primeira entrada
        if(Inicio == NULL) {
            A->next == NULL; //precaução
            //Definimos o valor do próximo endereço para nulo como precaução
            //Esse valor NULO será será sobrescrito na próxima execução do FOR

            Inicio = A; //Definimos o Início para o endereço de A
            B = A; //Definimos o B para o endereço de A, que servirá nas próximas execuções do FOR
        } else { //Se for da segunda execução para frente
            A->next == NULL; //precaução
            //Definimos o valor do próximo endereço para nulo como precaução
            //Esse valor NULO será será sobrescrito na próxima execução do FOR
            //Ou ainda, pode permanecer NULO caso seja a última execução do FOR

            B->next = A; //Voltamos ao endereço da struct anterior, setamos o valor next para o endereço da nova struct A
            B = A; //Definimos o B para o endereço de A, que servirá nas próximas execuções do FOR
        }
    }

    A = Inicio; //Definimos o valor de A para o Início

    while(A != NULL) { //Enquanto o A não for nulo
        printf("\nCodigo: %d Nome: %s", A->codigo, A->nome); //Printamos nome e código
        A = A->next; //Definimos o endereço de A como o endereço que está guardado no seu próprio campo NEXT, encadeando a lista
        //Ou seja, ele saltou o nó e foi para o próximo
    }
}
