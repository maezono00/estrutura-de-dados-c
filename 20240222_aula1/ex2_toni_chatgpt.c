#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int codigo;
    char nome[20];
    struct no *next;
} no;

struct no *A, *B, *I;

int main()
{

    A = NULL;
    B = NULL;
    I = NULL;
    int i;

    for (i = 0; i < 3; i ++)
    {
        if (i == NULL)
        {
            A = (no*) malloc (sizeof(no));
            printf("\nInforme o codigo %d: ", i + 1);
            scanf("%i", &A -> codigo);

            printf("\nInforme o nome %d: ", i + 1);
            scanf("%s", &A -> nome);
            B = A;
            I = A;
            A -> next = NULL;
        }
        else
        {
            A = (no*) malloc (sizeof(no));
            printf("\nInforme o codigo: ");
            scanf("%i", &A -> codigo);

            printf("\nInforme o nome: ");
            scanf("%s", &A -> nome);

            B -> next = A;
            B = A;
            A -> next = NULL;
        }
        B = I;
        while (B != NULL)
        {
            printf("\nCodigo: %d", B -> codigo);
            printf("\nNome: %s"), B -> codigo;

            B = B -> next;
        }
    }


    return 0;
}
