#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(){
    List* li = createList();
    endInsertion(li,1);
    endInsertion(li,3);
    endInsertion(li,4);
    printList(li);
    return 0;
}