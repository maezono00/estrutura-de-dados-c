#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next, *back, *center;
} no;

struct no *inicio,*corrente,*auxiliar,*auxiliar2,*fim, *raiz, *root;

void EnterData()
{
    printf("\n Informe o Codigo: ");
    scanf("%d",&corrente->codigo);

    printf("\n Informe o Nome: ");
    scanf("%s",&corrente->nome);
}

insert_tree()
{
	int aloca = 0;
	corrente = (no*) malloc (sizeof (no));
	corrente -> next = NULL;
	corrente -> back = NULL;
	EnterData();

	if (raiz == NULL)
	{
		raiz = corrente;
		printf("\nAlocado a Raiz na AB");

		system("pause");
	}
	else
	{
		auxiliar = raiz;
		while (aloca == 0)
		{
			if (auxiliar -> codigo > corrente -> codigo)
			{
				if (auxiliar -> next == NULL)
				{
					auxiliar -> next = corrente;
					printf("\nElemento alocado a Direita da árvore");

					system("pause");
					aloca = 1;
					break;
				}
				else
				{
					auxiliar = auxiliar -> next;
				}
			}

			if (auxiliar -> codigo < corrente -> codigo)
			{
				if (auxiliar -> back == NULL)
				{
					auxiliar -> back = corrente;
					printf("\nElemento alocado a Esquerda da árvore");

					system("pause");
					aloca = 1;
					break;
				}
				else
				{
					auxiliar = auxiliar -> back;
				}
			}
		}
	}
}

int main()
{
    insert_tree();

    return 0;
}
