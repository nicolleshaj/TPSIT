#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct pila {
    int valore;
    struct pila *next;
}Pila;

int is_empty(Pila *head){
    if(head == NULL)return 1;
    else return 0;
}

void push(Pila **head, Pila * elemento){
    if(is_empty(*head)){
        *head = elemento;
        elemento->next = NULL;
    }
    else
    {
        elemento->next = *head;
        *head = elemento;
    } 
}

Pila* pop(Pila **head){
    Pila* ret = *head;
    if(is_empty(*head)){
        return NULL;
    }
    else
    {
        *head = ret->next;
    }
    return ret;
}


int main(){
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    //Inserisco il primo numero nella lista
    Pila* head = (Pila*) malloc(sizeof(Pila));
    head->valore = numero%10;
    head->next = NULL;
    numero = numero/10;

    //Inserisco gli altri numero utilizzando la push
    while(numero != 0){
        push(head, numero%10);
        numero = numero/10;
    }
    //Stampo i valore con la pop
    while(!is_empty(head)){
        printf("%d-", head->valore);
        head = pop(head);
    }

    return 0;
}

