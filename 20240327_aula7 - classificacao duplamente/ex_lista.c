#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next, *back;
} no;

struct no *inicio,*corrente,*auxiliar,*auxiliar2,*fim;


void Show()
{
    if(inicio == NULL)
    {
        printf("\n  >>>>>>>>  Lista vazia <<<<<<<<<<<<");
        printf("\n\n");
        system("pause");

    }
    else
    {
        auxiliar = inicio;

        while (auxiliar != NULL)
        {
            printf("\n Codigo ==> : %d",auxiliar->codigo);
            printf("\n Nome ===>  : %s",auxiliar->nome);
            auxiliar = auxiliar->next;
        }
        system("pause");
    }
    system("cls");
}
void Enterdata()
{
    printf("\n Informe o Codigo: ");
    scanf("%d",&corrente->codigo);

    printf("\n Informe o Nome: ");
    scanf("%s",&corrente->nome);
}

void Insert()
{
    if (inicio == NULL)
    {
        corrente = (no*) malloc (sizeof(no));

        inicio = corrente;
        fim = corrente;
        auxiliar = corrente;
        corrente -> next = NULL;
        corrente -> next = NULL;
        Enterdata();
    }
    else
    {
        corrente = (no*) malloc (sizeof(no));

        auxiliar -> next = corrente;
        corrente -> back = auxiliar;
        auxiliar = corrente;
        corrente -> next = NULL;
        fim = corrente;
        Enterdata();
    }
}

void Search()
{
    char xnome[25];
    int achou = 0;

    if (inicio == NULL)
    {
        printf("\nLista vazia....");
        system("pause");
    }
    else
    {
        auxiliar = fim;
        achou = 0;

        printf("\nInforme o nome a ser pesquisado: ");
        gets(xnome);

        while(auxiliar != NULL)
        {
            if (strcmp (auxiliar -> nome, xnome) == 0)
            {
                printf("\nRegistro encontrado com sucesso");
                system("pause");

                achou = 1;
                break;
            }
            else
            {
                auxiliar = auxiliar -> back;
                if (achou == 0)
                {
                    printf("\nRegistro não encontrado...");
                    system("pause");
                }
            }
        }
    }
}

void Rem()
{
    int achou = 0;
    char xnome[30];
    if (inicio == NULL)
    {
        printf("\nLista vazia...");
        system("pause");
    }
    else
    {
        achou = 0;
        auxiliar = inicio;

        printf("\nInforme o nome a ser removido: ");
        gets(xnome);

        if (strcmp (xnome, auxiliar -> nome) == 0)
        {
            inicio = inicio -> next;
            free (auxiliar);
            auxiliar = inicio;
            auxiliar -> back = NULL;

            achou = 1;

            printf("\nRemovido com cuidado o nome da lista!!!");
            system("pause");
        }
        else
        {
            auxiliar2 = auxiliar;
            auxiliar = auxiliar -> next;

            while (auxiliar -> next != NULL)
            {
                if (strcmp (auxiliar -> nome, xnome) == 0)
                {
                    auxiliar = auxiliar -> next;
                    auxiliar -> next = auxiliar2;
                    auxiliar = auxiliar2 -> next;
                    auxiliar2 -> next = auxiliar -> next;

                    free(auxiliar);

                    printf("\nRemovido com sucesso do meio da lista!");
                    system("pause");

                    achou = 1;
                    break;
                }
                else
                {
                    auxiliar = auxiliar -> next;
                    auxiliar2 = auxiliar2 -> next;
                }
            }
        }
        if (achou == 0 && (strcmp (xnome, auxiliar -> nome) == 0))
        {
            auxiliar2 -> next = NULL;
            free(auxiliar);

            printf("\nRemovido com sucesso o ultimo elemento da lista!");
            system("pause");

            achou = 1;
        }
        if (achou == 0)
        {
            printf("\nRegistrado não encontrado!");
            system("pause");
        }
    }
}

void Class()
{
    int achou;

    achou = 0;
    auxiliar = inicio;
    corrente = (no*) malloc(sizeof(no));
    Enterdata();

    if(inicio == NULL)
    {
        inicio = corrente;
        auxiliar = corrente;
        fim  = corrente;

        achou = 1;

        corrente -> next = NULL;
        corrente -> back = NULL;

        printf("\nCriado o primeiro no na memoria");
        system("pause");
    }
    else
    {
        if (strcmp (corrente -> nome, auxiliar -> nome) < 0)
        {
            corrente -> next = inicio;
            corrente -> back = NULL;

            inicio = corrente;

            achou = 1;

            printf("\nElemento antecede o primeiro elemento da lista!");
            system("pause");
        }
        else
        {
            auxiliar2 = auxiliar -> next;

            while(auxiliar2 != NULL)
            {
                if (strcmp (corrente -> nome, auxiliar -> nome) >= 0 && strcmp (corrente -> nome, auxiliar2 -> nome) <=0)
                {
                    auxiliar -> next = corrente;
                    corrente -> next = auxiliar2;
                    auxiliar2 -> back = corrente;
                    corrente -> back = auxiliar;

                    achou = 1;

                    printf("\nElemento inserido no meio da lista com sucesso...");
                    system("pause");
                    break;
                }
                else
                {
                    auxiliar = auxiliar -> next;
                    auxiliar2 = auxiliar2 -> next;
                }
            }
        }
        if (achou == 0 && strcmp (corrente -> nome, auxiliar -> nome) > 0)
        {
            auxiliar -> next = corrente;
            corrente -> back = auxiliar;
            corrente -> next = NULL;
            fim = corrente;

            achou = 1;

            printf("\nElemento inserido no final da lista...");
            system("pause");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    corrente = NULL;
    inicio = NULL;
    auxiliar = NULL;

    int op;

    do
    {
        printf("\n ******** Lista Simplesmente Encadeada *********");
        printf("\n [1] Inserindo Registo na Lista ");
        printf("\n [2] Exibindo os Registros na Lista");
        printf("\n [3] Pesquisa os Registros na Lista");
        printf("\n [4] Removendo Registros da Lista ");
        printf("\n [5] Alocação elementos da Lista ");


        printf("\n Escolha a Opção: ");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            Insert();
            break;
        case 2:
            Show();
            break;
        case 3:
            Search();
            break;
        case 4:
            Rem();
            break;

        case 5:
            Class();
            break;

        default :

            printf("\n Função não encontrada.. tente novamente");
            system("pause");
        }

    }
    while (op != 5);

    system("cls");
    printf("\n Final de processamento");
    system("pause");

}
