#include "linkedlist.h"

/**init a new linked list */
List *init_list(size_t data_size) {
    List *l = (List *) malloc(LIST_SIZE);
    l->head = (Node *) malloc(NODE_SIZE);
    l->size = data_size;
    l->head->next = NULL;
    l->length = 0;
    return l;
}

/**add new node to the linked list */
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

/**insert a new node to the list */
void insert(List *list, Node *node, void *data) {
    Node *new_node = (Node *) malloc(NODE_SIZE);
    new_node->data = data;
    new_node->next = node->next;
    node->next = new_node;
    ++list->length;
}

/**get data from linked list by position */
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

/**get node from linked list by position */
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

/**remove node from linked list by data */
void removeNode(List *list, void *data) {
    if(list->length == 0) return;
    Node *head = list->head;
    while (head->next->data != data) {
        head = head->next;
        if(NULL == head->next) return;
    }
    Node *newNext = head->next->next;
    free(head->next->data);
    free(head->next);
    head->next = newNext;
    --list->length;
}

/**remove node from linked list without */
void removeNodeOnly(List *list, void *data){
    if(list->length == 0) return;
    Node *head = list->head;
    while (head->next->data != data) {
        head = head->next;
        if(NULL == head->next) return;
    }
    Node *newNext = head->next->next;
    free(head->next);
    head->next = newNext;
    --list->length;
}

/**remove node from linked list by position */
void removePos(List *list, int position){
    Node *head = list->head;
    while(position--){
        head = head->next;
    }
    Node *newNext = head->next->next;
    free(head->next->data);
    free(head->next);
    head->next = newNext;
    --list->length;
}

/**get the first node in the linked list */
Node *getFirst(List *list) {
    return list->head->next;
}

/**append a list to the end to anthor list  */
void appendList(List *dst, List *src){
    Node *head = dst->head;
    while (NULL != head->next) {
        head = head->next;
    }
    Node *target = src->head->next;
    while(NULL != target){
        Node *newNode = (Node*) malloc(sizeof(Node));
        newNode->data = target->data;
        newNode->next = NULL;
        head->next = newNode;
        head = head->next;
        ++dst->length;
        target = target->next;
    }
}