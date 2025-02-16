/**

Lista Duplamente Encadeada
A lista duplamente encadeada � uma lista de forma sequencial, no qual permite operacionalizar os dados nos sentidos in�cio/FIM e FIM/in�cio.
Como veremos a seguir a lista duplamente encadeada � referente para outras estruturas que veremos a seguir.
Para que possamos estabelecer a lista duplamente, estabelecemos o segundo campo do tipo ponteiro na struct como veremos a seguir:

typedef struct no
{
    int codigo;
    char nome[30];
    struct no *next,*back;
} no;

Os demais ponteiros citados anteriormentes sendo mantidos para fins operacionais na lista.

Exerc�cio
Converta a estrutura simplesmente encadeada para duplamente.

**/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Entao nao sou muito bom com textinhos mas vamos la");

    return 0;
}
