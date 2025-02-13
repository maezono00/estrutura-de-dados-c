//elabore um programa que aloque 10 nomes na memória do computador, usando lacos de repeticao

#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    char nome[10];
} no;

struct no *nomes;

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        nomes=NULL;
        nomes=malloc(sizeof(no));

        printf("insira nome: ");
        scanf("\n%s", &nomes -> nome);

        printf("%s\n", nomes -> nome);
    }


    return 0;
}
