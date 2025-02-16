#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next;
} no;

struct no *inicio, *corrente, *auxiliar;

void Show()
{
    auxiliar = inicio;
    while (auxiliar != NULL)
    {
        if (inicio == NULL)
        {
            printf("\n LISTA VAZIA");
            printf("\n\n");
            system("pause");
        }else{
            printf("\nCodigo ==> %d", auxiliar -> codigo);
            printf("\nNome ==> %d", auxiliar -> nome);
            auxiliar = auxiliar -> next;
        }
        system("pause");
    }
    system("cls");
}

void EnterData()
{
    printf("\nInforme o codigo: ");
}

void Pesquisa()
{
    char xnome[30];
    int achou;

    achou = 0;

    if (inicio == NULL)
    {
        printf("\nLista vazia...");
        system("pause");
    } else {
        printf("\nInforme o nome pesquisado: ");
        scanf("%s", &xnome);

        auxiliar = inicio;
        k = 0;

        while (auxiliar != NULL)
        {
            k ++;
            if strcmp ((xnome, auxiliar -> nome) == 0)
            {
                printf("\nRegistro encontrado na posicao %d da tabela", k);
                system("pause");

                achou = 1;
                break;
            } else {
                auxiliar = auxiliar -> next;
            }
        } while
            if (achou == 0)
            {
                printf("\nRegistro nao consta na tabela");
            }
    }
}
