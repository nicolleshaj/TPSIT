/* Modificare il programma sopra creando due funzioni: push per caricare la lista e stampa-lista per
stamparla. */

#include <stdio.h>
#include <stdlib.h>

struct El
{
    int valore;
    struct El* next;
};


int main()
{
    int n;  
    struct El* primo;
    primo=NULL;             

    do
    {
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) /* se non ci sono elementi nella lista si verifica la condizione */
            {
                /* se viene verificata la condizione, vengono eseguite le istruzioni che creano il primo elemento */

                primo=(struct El*)malloc(sizeoff(struct El));
                primo->valore=n;
                primo->next=NULL;
            }
            else /* se invece la lista ha degli oggetti all'interno */
            {
                /* mette il numero intero dentro ad un nodo e lo fa puntare da quello precedente */

                push(primo, n);
            }
        l->valore = n; /* imposta il nodo appena creato a n */
        l->next = NULL; /* imposta next a null */
        }
    } while (n>=0);

    l=lista; /* fa puntare l a head */
    printf("numeri inseriti: ");
    while (l!=NULL)
    {
        stampaLista(El *lista);
    }
    printf("\n");
    return 0;
}

