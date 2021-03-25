#include <stdio.h>
#include <stdlib.h>

struct El
{
    int valore;
    struct El* next;
};

void push(struct El* head, int n){

    head->next = (struct El*) malloc(sizeof(struct El));
    head = head->next;
    head->valore = n;
    head->next = NULL;

    return;
}

void stampa_lista(struct El* head){

    printf("numeri inseriti: \n");
    while (head!=NULL)
    {
        printf("%d - %p \n",head->valore, head->next);   
        head = head->next; /* l diventa al puntatore next */
    }
    printf("\n");

    return;
}

int main()
{
    int n;  
    struct El* lista;
    struct El* l;
    lista=NULL;             /* inizializza la lista a NULL, la lista è vuota */

    do
    {
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) /* se non ci sono elementi nella lista si verifica la condizione */
            {
                /* se viene verificata la condizione, vengono eseguite le istruzioni che creano il primo elemento */

                lista = (struct El*) malloc(sizeof(struct El));

                l = lista;
            }
            else /* se invece la lista ha degli oggetti all'interno */
            {
                /* mette il numero intero dentro ad un nodo e lo fa puntare da quello precedente */

                l->next = (struct El*) malloc(sizeof(struct El));

                l = l->next;
            }
        l->valore = n; /* imposta il nodo appena creato a n */
        l->next = NULL; /* imposta next a null */
        }
    } while (n>=0);

    l=lista; /* fa puntare l a head */
    printf("numeri inseriti: ");
    while (l!=NULL)
    {
        printf("%d - %p \n",l->valore, l->next);
        l=l->next; /* stampa il primo e poi punta al nodo successivo */
    }
    printf("\n");
    return 0;
}