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

void *get(List *list, unsigned position) {
    if (position >= list->length) {
        return NULL;
    }
    Node *head = list->head;
    head = head->next;
    if (position == 0) {
        return head->data;
    }
    while (position--) {
        head = head->next;
    }
    return head->data;
}

int main(void) {
    List *l = init_list(sizeof(int));
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++) {
        add(l, a + i);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(int *) get(l, (unsigned int) i));
    }
    return 0;
}
