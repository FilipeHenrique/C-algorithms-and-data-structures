#include <stdio.h>
#include <stdlib.h>
#include "List.h"

typedef struct element{
    int value;
    struct element* next;
}Element;


List* createList(){
    List* li = (List*) malloc(sizeof(List));
    if(li != NULL)
        *li = NULL; 
    return li;
}

void endInsertion(List* li, int value){
    Element* temp = (Element*) malloc(sizeof(Element));
    temp->value = value;
    temp->next = NULL;

    if((*li) == NULL){
        *li = temp;  
    }
    else{
        Element* temp = (*li);

        while(temp->next != NULL)
            temp = temp->next;

        Element* newElement = (Element*) malloc(sizeof(List));
        newElement->value = value;
        newElement->next = NULL;
        temp->next = newElement;
    }
}

void printList(List* li){
    Element* temp = (*li);
    
    while(temp->next != NULL){
        printf("%d\n",temp->value);
        temp = temp->next;
    }
    printf("%d\n",temp->value);
}