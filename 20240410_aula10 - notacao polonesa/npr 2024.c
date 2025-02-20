#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node
{

    char sinal;
    struct node *next,*back;


} node;


//função Empilhar

void push(node **topo, char sig)
{

    node *corrente;

    corrente=(node*)malloc (sizeof(node));

    if (corrente == NULL)
    {
        printf("\n Error - Unable do Pile");
        system("pause");

    }

    corrente->sinal = sig;
    corrente->next = *topo;
    corrente->back = NULL;
    *topo = corrente;

    return;

}


int pop(node **topo)
{
    node *corrente;
    char sig;
    if(*topo != NULL)
    {
        corrente=*topo;
        sig=corrente->sinal;
        *topo = corrente->next;
        free(corrente);
        printf("\n removido operador da Pilha com sucesso");
        system("pause");
        return(sig);
    }

    return (' ');

}


int main()
{
    node *topo = NULL;

    char expressao[40]="";

    char npr[40] = "";

    int i,j;
    i=0;
    j=0;

    system("cls");
    printf("\n Informe a expressão");
    scanf("%s",&expressao);

    for(i=0; i<strlen(expressao); i++)
    {
        switch(expressao[i])
        {
        case '(' :
            break;
        case ')' :

            npr[j]= pop(&topo);
            j++;
            break;

        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '%':

            push( &topo, expressao[i]);
            break;

        default :
            npr[j]= expressao[i];
            j++;
        }


    }

    while (j<strlen(expressao))
    {
        npr[j]=pop(&topo);
        j++;

    }

    printf("\n Expressão convertida com sucesso %s ==>",npr);
    getchar();
    return(0);

}
