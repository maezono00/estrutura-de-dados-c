#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do
    {
        printf("PROGRAMA DE ÁRVORE UHUL!");
        printf("\n\n[1] Inserir Elementos na Árvore");

        printf("\n\nPor favor, insira uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Vou fazer!");
            break;

        default:
            printf("Socorro!");
            break;
        }
    }
    while(opcao != 10);

    system("cls");
    printf("FINAL DO PROCESSAMENTO.");

    return 0;
}
