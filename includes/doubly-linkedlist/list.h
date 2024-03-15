#ifndef DOUBLY_LINKEDLIST
#define DOUBLY_LINKEDLIST

#include <stdlib.h>

typedef struct node {
    struct node * next;
    struct node * prev;
    int value;
} node;

typedef struct linkedlist {
    struct node * head;
    struct node * tail;
    size_t size;
} linkedlist;

linkedlist * new_list(size_t size);

#endif // DOUBLY_LINKEDLIST