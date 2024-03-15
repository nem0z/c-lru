#include "list.h"

linkedlist * new_list(size_t size) {
    linkedlist * list = malloc(sizeof(linkedlist) + sizeof(node)*size);
    node * rawmem = (node *)(list + 1);
    list->head = rawmem;

    node * current = rawmem;
    current->value = 0;

    for(size_t i = 1; i < size; ++i) {
        current->next = current + 1;
        current = current + 1;
        current->prev = current - 1;
        current->value = (int)i;
    }

    current->next = NULL;
    list->tail = current;
    list->size = size;

    return list;
}