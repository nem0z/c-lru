#include <stdlib.h>
#include <stdio.h>

#include "doubly-linkedlist/list.h"

int main() {
    linkedlist * list = new_list(100);

    node * current = list->head;
    while (current != NULL) {
        printf("%p => %p\n", current->key, current->value);
        current = current->next;
    }

    free(list);
    return 0;
}