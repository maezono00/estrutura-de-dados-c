//Exercício

#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next;
} no;

struct no *A, *B, *C;

int main()
{
    A = NULL;
    B = NULL;
    C = NULL;

    int i;

    for (i = 0; i < 5; i ++)
    {
        //vai instalar o no na memória
        if (C == NULL)
        {
            A = (no*) malloc (sizeof(no));

            printf("\nInforme o codigo: ");
            scanf("%d", &A -> codigo);

            printf("\nInforme o nome: ");
            scanf("%s", &A -> nome);

            C = A;
            B = A;
            A -> next = NULL;
        }
        else
        {
            //será responsável pelo encadeamento
            A = (no*) malloc (sizeof(no));

            printf("\nInforme o codigo: ");
            scanf("%d", &A -> codigo);

            printf("\nInforme o nome: ");
            scanf("%s", &A -> nome);

            B -> next = A;
            A -> next = NULL;
            B = A;
        }
    }
}
