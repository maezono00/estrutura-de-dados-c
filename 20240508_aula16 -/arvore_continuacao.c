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
        auxiliar = corrente;
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
/*
void Insert()
{
    if(inicio == NULL)
    {
        corrente=(no*)malloc(sizeof(no));
        inicio = corrente;
        auxiliar = corrente;
        corrente->next = NULL;
        Enterdata();
    }
    else
    {
        corrente=(no*)malloc (sizeof(no));
        auxiliar->next = corrente;
        corrente->next = NULL;
        auxiliar = corrente;
        Enterdata();
    }
}
*/

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
    int achou,k;

    char xnome[30];
    k=0;
    achou=0;

    if(inicio == NULL)
    {
        printf("\n Lista vazia");
        system("pause");

    }
    else
    {

        printf("\n Informe o nome a ser Procurado: ");
        scanf("%s",xnome);
        auxiliar = inicio;

        while(auxiliar != NULL)
        {
            k++;
            if(strcmp(xnome,auxiliar->nome)==0)
            {
                printf("\n O registro foi encontrado a lista %d\n",k);
                system("pause");
                achou =1;
                break;
            }
            else
            {

                auxiliar=auxiliar->next;
            }
        }

        if(achou ==0)
        {
            printf("\n Registro não consta na Lista");
            system("pause");
        }

    }

}

void Rem()
{
    int achou;
    char xnome[30];
    if(inicio == NULL)
    {
        printf("\n Lista Vazia..tente novamente");
        system("pause");
    }
    else
    {

        printf("\n Informe o nome a ser Procurado: ");
        scanf("%s",xnome);
        auxiliar = inicio;

        if(strcmp(auxiliar->nome,xnome)==0)
        {
            inicio=inicio->next;
            free(auxiliar);
            printf("\n Removido Primeiro elemento da Lista");
            system("pause");
            achou =1;

        }
        else
        {

            corrente=auxiliar;
            auxiliar=auxiliar->next;

            while(auxiliar != NULL)
            {
                if(strcmp(auxiliar->nome,xnome)==0)

                {
                    corrente->next = auxiliar->next;
                    free(auxiliar);
                    printf("\nRegistro Removido no Meio ou Fim da lista");
                    system("pause");
                    achou =1;
                    break;

                }
                else
                {

                    auxiliar = auxiliar->next;
                    corrente = corrente->next;

                }
            }

        }

    }

    if(achou ==0)
    {
        printf("\n Registro não consta na Lista");
        system("pause");
    }
}

void Class()
{
    int achou = 0;
    corrente = (no*)malloc(sizeof(no));
    auxiliar = inicio;
    Enterdata();

    if(inicio == NULL)
    {
        corrente -> next = NULL;
        inicio = corrente;
        auxiliar = corrente;

        printf("\nInstalando o primeiro elemento na lista.");
        system("pause");
        achou = 1;
    }
    else
    {
        if (strcmp(corrente -> nome, auxiliar -> nome) < 0)
        {
            inicio = corrente;
            corrente -> next = auxiliar;

            achou = 1;
            printf("\nRegistro antecede o primeiro elemento da lista.");
            system("pause");
        }
        else
        {
            auxiliar2 = auxiliar;
            auxiliar = auxiliar2 -> next;

            while (auxiliar != NULL)
            {
                if ((strcmp(corrente -> nome, auxiliar -> nome) >= 0) && (strcmp(corrente -> nome, auxiliar -> nome) <= 0))
                {
                    auxiliar2 -> next = corrente;
                    corrente -> next = auxiliar;
                    achou = 1;

                    printf("\nElemento inserido no meio da Lista com Sucesso!");
                    system("pause");
                    break;
                }
                else
                {
                    auxiliar = auxiliar -> next;
                    auxiliar2 = auxiliar2 -> next;
                }
            }
            if (achou == 0 && strcmp(corrente -> nome, auxiliar2 -> nome) > 0)
            {
                auxiliar -> next = corrente;
                corrente -> next = NULL;
                printf("\nAlocado no final da lista com sucesso!");
                system("pause");
            }
        }
    }
}

void Enqueue()
{
    int c = 0;

    if (inicio == NULL)
    {
        fim = (no*) malloc (sizeof(no));
        fim -> next = NULL;
        inicio = fim;
        auxiliar = fim;
        Enterdata();
        c ++;
    }
    else
    {
        if (c > 10)
        {
            printf("\nQueue Overflow...");
            system("pause");
        }
        else
        {
            fim = (no*) malloc (sizeof(no));
            auxiliar -> next = fim;
            fim -> next = NULL;
            auxiliar = fim;
            c ++;
            Enterdata();
        }
    }
}

void Dequeue()
{
    if (inicio == NULL)
    {
        printf("\nQueue is Empty");
        system("pause");
    }
    else
    {
        int c = 0;

        auxiliar = inicio;
        if (inicio -> next == NULL && fim -> next == NULL)
        {
            free(auxiliar);
            printf("\nRemovido o último elemento da fila.");
            system("pause");

            inicio = NULL;
            fim = NULL;
            auxiliar = NULL;

            c = 0;
        }
        else
        {
            auxiliar = inicio;
            inicio = inicio -> next;
            free(auxiliar);
            printf("\nRemovido o elemento da fila");
            system("pause");

            c --;
        }
    }
}

void Seaqueue()
{
    int achou = 0, k = 0, c = 0, task = 0;

    if (inicio == NULL)
    {
        printf("\nQueue is Empty\n");
        system("\npause");
    }
    else
    {
        achou = 0;
        k = 0;

        auxiliar = inicio;
        printf("\nInforme o mix do job: ");
        scanf("%d", &task);

        while(auxiliar)
        {
            k ++;

            if (task == c)
            {
                printf("\nA task se encontre na Queue posição %d", k);
                system("pause");

                achou = 1;
                break;
            }
            else
            {
                auxiliar = auxiliar -> next;
            }
        }
        if (achou == 0)
        {
            printf("\nTask not found Queue");
            system("\npause");
        }
    }
}

Aloca_Esquerda()
{
    int path, aloca;
    aloca = 0;
    auxiliar = raiz;

    while (aloca = 0)
    {
        printf("\nPretende alterar a alocação?\n[1] Back Esquerda\n[2] Next Direita\n[3] Abaixo Centro\n\nInsira a opção: ");
        scanf("%d", &path);

        if (path == 1 && auxiliar -> back == NULL)
        {
            auxiliar -> back = corrente;
        }
    }
}

void Aloca_Centro()
{
    printf("\nEm desenvolvimento");
}

void Aloca_Direta()
{
    int path , aloca;

    aloca = 0;
    auxiliar = raiz;

    while (aloca == 0)
    {
        printf("\nPretende alocar em qual vértice:\n[1] Esquerda\n[2] Direita\n[3] Centro\n\nInsira a opção: ");
        scanf("%d", &path);

        if (path == 1 && auxiliar -> back == NULL)
        {
            auxiliar -> back = corrente;
            printf("\nAlocado com sucesso para ESQUERDA da árvore!");
            system("pause");
            aloca = 1;
            break;
        }
        else if(path == 22 && auxiliar -> next == NULL)
        {
            auxiliar -> next = corrente;
            printf("\nAlocado com sucesso para DIRETA da árvore!");
            system("pause");
            aloca = 1;
            break;
        }
        else
        {
            auxiliar -> center = corrente;
            printf("\nAlocado com sucesso no CENTRO da árvore!");
            system("pause");
            aloca = 1;
            break;
        }
        auxiliar = auxiliar -> next;
    }
}

void insert_tree()
{
    int op = 0;

    corrente = (no*) malloc (sizeof(no));

    corrente -> back = NULL;
    corrente -> next = NULL;
    corrente -> center = NULL;

    //Enterdata();

    if (raiz == NULL)
    {
        raiz = corrente;
        auxiliar = corrente;

        Enterdata();

        printf("\nInstalando a Raiz na Árvore.");
        system("pause");
    }
    else
    {
        printf("\Em qual vértice deseja posicionar o nodo?\n[1] Aloca Esquerda\n[2] Aloca Centro\n[3] Aloca Direita");
        scanf("%d", &op);

        if (op == 1)
        {
            Aloca_Esquerda();
        }
        else if (op == 2)
        {
            Aloca_Centro();
        }
        else
        {
            Aloca_Direta();
        }
    }
}

void Exibir(no * root)
{
	if (raiz == NULL)
	{
		printf("\nTree is Empty\n");
		system("pause");
	}
	else
	{
		printf("\n%d <==> %s", raiz -> codigo, raiz -> nome);

		if (root -> back != NULL) Exibir (root -> back);
		if (root -> next != NULL) Exibir (root -> next);
		if (root -> center != NULL) Exibir (root -> center);
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
        printf("\n [6] Enqueue");
        printf("\n [7] Dequeue");
        printf("\n [8] Seaqueue");
        printf("\n [9] Árvore");
        printf("\n [10] Exibir Árvore");


        printf("\n Escolha a Opção...");
        scanf("%d",&op);

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

        case 6:
            Enqueue();

        case 7:
            Dequeue();

        case 8:
            Seaqueue();

        case 9:
            insert_tree();

        /*case 10:
            Exibir();
            break;*/

        default :

            printf("\nFunção não encontrada.. tente novamente");
            system("pause");
        }

    }
    while (op > 11);

    system("cls");
    printf("\n Final de processamento");
    system("pause");

}









