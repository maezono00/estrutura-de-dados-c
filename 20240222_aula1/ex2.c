//elabore um programa que aloque 10 nomes na memória do computador, usando lacos de repeticao.
//fazer impressão enquanto não for null.

#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    char nome[10];
} no;

struct no *A;

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        A=NULL;
        A=malloc(sizeof(no));

        printf("insira nome: ");
        scanf("\n%s", &A -> nome);

        printf("%s\n", A -> nome);
    }


    return 0;
}
