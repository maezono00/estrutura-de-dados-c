A = NULL;
B = NULL;
i = NULL;

for (i = 0; i < 3; i ++)
{
    if (i == NULL)
    {
        A = (no*) malloc (sizeof(no));
        printf("\nInforme o codigo: ");
        scanf("%i", &A -> codigo);

        printf("\nInforme o nome: ");
        scanf("%s", &A -> nome);
        B = A;
        i = A;
        A -> next = NULL;
    } else {
        A = (no*) malloc (sizeof(no));
        printf("\nInforme o codigo: ");
        scanf("%i", &A -> codigo);

        printf("\nInforme o nome: ");
        scanf("%s"; &A -> nome);

        B -> next = A;
        B = A;
        A -> next = NULL;
    }
}
