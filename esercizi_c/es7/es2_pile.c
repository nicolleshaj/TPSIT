#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 4096

typedef struct nodo {
    int valore;
    struct nodo* next;
}Nodo;

int is_empty(Nodo *head){
    if(head == NULL)return 1;
    else return 0;
}

void push(Nodo **head, Nodo * elemento){
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

Nodo* pop(Nodo **head){
    Nodo* ret = *head;
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
    char* stringa = (char*) malloc(MAX*sizeof(char));
    printf("Inserire una stringa di parentesi: ");
    scanf("%s", stringa);
    int i = 0;
    Nodo* head = (Nodo*) malloc(sizeof(Nodo));
    bool parentesi_sbagliata = false;
    while(stringa[i]!='\0' && !parentesi_sbagliata){
        if(stringa[i]=='(' || stringa[i]=='[' || stringa[i]=='{'){
            head = push(head, stringa[i]);
        }
        else if(stringa[i]==')' || stringa[i]==']' || stringa[i]=='}'){
            char p = head->valore;
            head = pop(head);
            if(stringa[i]!=p+1 && stringa[i]!=p+2){
                printf("Errore nella chiusura delle parentesi!\n");
                parentesi_sbagliata = true;
            }
        }
        i++;
        
    }
    if(!parentesi_sbagliata){
        printf("Tutte le parentesi sono state aperte e chiuse correttamente!\n");
    }


    return 0;
}