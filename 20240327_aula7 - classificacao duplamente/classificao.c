void Class()
{
    acho = 0;
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
