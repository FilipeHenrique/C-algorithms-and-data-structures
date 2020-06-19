#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

//typedef struct element Element;
typedef struct element* List;

List* createList();
void endInsertion(List* li, int value);
void startInsertion(List li, int value);
void middleInsertion(List li, int value, int position);
// remover elemento
// liberar lista
//acessar elemento
// reverter lista
void printList(List* li);

#endif

