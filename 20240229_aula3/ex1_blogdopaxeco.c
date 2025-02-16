#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    do
    {
        printf("Sistema de Notas!");
        printf("\n[1]Cadastro de Notas");
        printf("\n[2]Consultar Nota");
        printf("\n[3]Apagar Nota");

        printf("\n\nPor favor, insira a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            default:
                printf("\neu\n");
                system("pause");
        }
    }
    while (opcao <= 3);

    return 0;
}
