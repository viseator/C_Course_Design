#include "linkedlist.h"

List *init_list(size_t data_size) {
    List *l = (List *) malloc(LIST_SIZE);
    l->head = (Node *) malloc(NODE_SIZE);
    l->size = data_size;
    l->head->next = NULL;
    l->length = 0;
    return l;
}

void add(List *list, void *data) {
    Node *head = list->head;
    while (NULL != head->next) {
        head = head->next;
    }
    head->next = (Node *) malloc(NODE_SIZE);
    head->next->data = data;
    head->next->next = NULL;
    ++list->length;
}

void insert(List *list, Node *node, void *data) {
    Node *new_node = (Node *) malloc(NODE_SIZE);
    new_node->data = data;
    new_node->next = node->next;
    node->next = new_node;
    ++list->length;
}

void *getData(List *list, unsigned position) {
    if (position >= list->length) {
        return NULL;
    }
    Node *head = list->head->next;
    if (position == 0) {
        return head->data;
    }
    while (position--) {
        head = head->next;
    }
    return head->data;
}

Node *getNode(List *list, unsigned position) {
    if (position >= list->length) {
        return NULL;
    }
    Node *head = list->head;
    head = head->next;
    if (position == 0) {
        return head;
    }
    while (position--) {
        head = head->next;
    }
    return head;
}

void removeNode(List *list, Node *node) {
    Node *head = list->head;
    while (head->next != node) {
        head = head->next;
    }
    head->next = node->next;
    free(node->data);
    free(node);
    --list->length;
}

Node *getFirst(List *list) {
    return list->head->next;
}

//int main(void) {
//    List *l = init_list(sizeof(int));
//    int *a[10];
//    for (int i = 0; i < 10; i++) {
//        a[i] = (int *) malloc(sizeof(int));
//        *a[i] = i;
//        add(l, *(a + i));
//    }
//    Node *head = l->head;
//    removeNode(l, head->next->next);
//    for (int i = 0; i < 9; i++) {
//        printf("%d ", *(int *) get(l, (unsigned int) i));
//    }
//    return 0;
//}
