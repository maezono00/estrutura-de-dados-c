#include <stdio.h>
#include <stdlib.h>



typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next;

} no;


struct no *A, *B, *I;


int main()
{
    A = NULL;
    B=  NULL;
    I= NULL;
    int i,n;

    printf("\n Informe a quantidade de elementos na Lista");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        if (I == NULL)
        {

            A=(no*)malloc (sizeof(no));

            A->next = NULL;
            B=A;
            I=A;
            printf("\n Informe o codigo");
            scanf("%d",&A->codigo);
            printf("\n Informe o Nome");
            scanf("%s",&A->nome);
        }
        else
        {

            A=(no*)malloc (sizeof(no));

            B->next = A;
            B=A;
            A->next = NULL;
            printf("\n Informe o codigo");
            scanf("%d",&A->codigo);
            printf("\n Informe o Nome");
            scanf("%s",&A->nome);

        }



    }

   A=I;

   while (A != NULL)
   {
       printf("\n Codigo %d",A->codigo);
       printf("\n NOme   %s",A->nome);
       A=A->next;
   }
}




