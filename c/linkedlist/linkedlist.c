#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *previous;
};

void insert_at_beginning(struct Node **pheadNode, int value);
void insert_at_end(struct Node **pheadNode, int value);

void print_list(struct Node *headNode);
void print_list_backwards(struct Node *headNode);

void free_list(struct Node *headNode);

int main()
{
    struct Node *head = NULL;
    
    printf("Insert a node at the beginning of the list.\n");
    insert_at_beginning(&head, 5);
    print_list(head);
    
    printf("Insert a node at the beginning, and then print list backward.\n");
    insert_at_beginning(&head, 10);
    print_list_backwards(head);
    
    printf("Insert a node at the end, and then print list forward.\n");
    
    insert_at_end(&head, 15);
    for (int i = 1; i <= 999999; i ++) {
        insert_at_beginning(&head, i);
    }
    print_list(head);
    
    free_list(head);
    
    return 0;
}

void insert_at_beginning(struct Node **pheadNode, int value)
{
    struct Node *currentNode;

    if (NULL == pheadNode) {
        return;
    }
    currentNode = malloc(sizeof *currentNode);
    currentNode->next = NULL;
    currentNode->previous = NULL;
    currentNode->data = value;
    
    if (*pheadNode == NULL) {
        *pheadNode = currentNode;
        return;
    }
    currentNode->next = *pheadNode;
    (*pheadNode)->previous = currentNode;
    *pheadNode = currentNode;
}

void print_list_backwards(struct Node *headNode)
{
    if (NULL == headNode) {
        return;
    }
    struct Node *i = headNode;
    while (i->next != NULL) {
        i = i->next;
    }
    while (NULL != i) {
        printf("Value: %d\n", i->data);
        i = i->previous;
    }
}

void print_list(struct Node *headNode)
{
    struct Node *i;
    i = headNode;
    while(NULL != i) {
        printf("Value: %d\n", i->data);
        i = i->next;
    }
//    for (i = headNode; i != NULL; i = i->next) {
//        printf("Value: %d\n", i->data);
//    }
}

void insert_at_end(struct Node **pheadNode, int value) {
    struct Node *currentNode;
    if (NULL == pheadNode) {
        return;
    }
    currentNode = malloc(sizeof *currentNode);
    struct Node *i = *pheadNode;
    currentNode->data = value;
    currentNode->next = NULL;
    currentNode->previous = NULL;
    
    if (*pheadNode == NULL) {
        *pheadNode = currentNode;
        return;
    }
    
    while (i->next != NULL) {
        i = i->next;
    }
    i->next = currentNode;
    currentNode->previous = i;
}

void free_list(struct Node *node) {
    while (node != NULL) {
        struct Node *next = node->next;
        free(node);
        node = next;
    }
}