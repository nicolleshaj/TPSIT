#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodo
{
    int valore;
    struct Nodo* next;
}Nodo;

int is_empty(Nodo *head){
    if(head == NULL)return 1;
    else return 0;
}

void stampaLista(struct Nodo* l){

}

void enqueue (struct Nodo **head, struct Nodo **tail, struct Nodo *elemento){
    if (is_empty(*head)){   // se head è vuota 
        *head = element;    // si aggiunge il valore all'interno di head 
    }else                           // se dentro head c'è qualcosa
    {
        *tail -> next = element;       // la tail punterà al nuovo elemento
    }
    

    *tail = element;                
    element -> next = NULL;
}

struct Nodo * dequeue (struct Nodo ** head, struct Nodo ** tail){
    struct Nodo *ret = *head;

    if(is_empty(*head)){
        return NULL;
    }else
    {
        *head = ret -> next;
    }

    if (*head == NULL){
        *tail = NULL;
    }
    return ret;
}



int main(){
    Nodo *head=NULL;
    Nodo *tail=NULL;
    Nodo *struct_return=NULL;   
    Nodo* element; 
    bool condizione = true;
    int dato;

    while(condizione){
        int scelta;
        printf("MENÙ\n\n- scegliere '1' per inserire elementi nella coda\n- scegliere '2' per svuotare la coda\n- scegliere '3' per uscire dal programma\n\nInserire numero: ");
        scanf("%d", &scelta);
        switch (scelta)
        
        {
        case 1:
            printf("Inserire elemento: ");
            scanf("%d", &dato);
            element = (Nodo*) malloc(sizeof(Nodo)); 
            element->elemento = dato;
            enqueue(&head, &tail, element);
            break;
        case 2:
            printf("Gli elementi inseriti fino ad ora nella lista sono: \t");
            while((struct_return=dequeue(&head, &tail))!=NULL){
               printf("%d\t", struct_return->elemento);
                free(struct_return);
            }
            break;
        case 3:
            printf("EXIT...");
            condizione=false;
            break;
        default:
            printf("[ carattere inserito non valido ]\n\n");
            break;
        }

    }

    return 0;
}