#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define NODE_SIZE (sizeof(Node))
#define LIST_SIZE (sizeof(List))

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    void *data;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
    size_t size;
    int length;
} List;

List* init_list(size_t data_size);

void add(List* list, void* data);
#endif
