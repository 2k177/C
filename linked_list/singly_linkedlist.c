#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *next;
    int data;
};

void add_at_begin(struct Node **head, int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = *head;
    temp->data = data;
    *head = temp;
    
}

void add_at_end(struct Node **head, int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head; 
    
    new_node->next = NULL;
    new_node->data = data;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_list(struct Node *head) {
    struct Node *temp = head;
    
    while(temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_at_n(struct Node *head, int n, int data) {
    struct Node *node = head;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp;
    int i = 0;
    while(i< n-1) {
        node = node->next;
        i++;
    }
    temp = node->next;
    new_node->data = data;
    node->next = new_node;
    new_node->next = temp;
}

void delete_at_n(struct Node *head, int n) {
    struct Node *node = head;
    struct Node *temp;

    int i = 1;
    while(i< n && node->next->next) {
        node = node->next;
        i++;
    }
    temp = node->next->next;
    node->next = temp;
}

int main()
{
    struct Node* head = NULL;
    add_at_begin(&head, 4);
    add_at_begin(&head, 6);
    add_at_begin(&head, 7);
    add_at_end(&head, 9);
    insert_at_n(head, 2, 3);
    print_list(head);
    delete_at_n(head, 3);
    print_list(head);

    return 0;
}

/**
 * Output 
 * 7->6->3->4->9->
 * 7->6->3->9->
 */
