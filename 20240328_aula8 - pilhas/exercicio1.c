//exercicio para fazer as operações presentes nas pilhas.

#include <stdio.h>
#include <stdlib.h>

void show()
{
    printf("eu1");
}

void push()
{
    printf("eu2");
}

void pop()
{
    printf("eu3");
}

int main()
{

    int opcao;

    printf(".: ESTUDAR PILHA TUDO DE BOM!!! :.\n\n");
    printf("\n[1] Consultar o topo da pilha (TOP)");
    printf("\n[2] Inserir elemento na pilha (PUSH)");
    printf("\n[3] Remover elemento da pilha (POP)");
    printf("\n\nPor favor, selecione uma opcao: ");

    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        show();
        break;

    case 2:
        push();
        break;

    case 3:
        pop();
        break;

    default:
        printf("padrao");
        break;
    }

    return 0;
}
