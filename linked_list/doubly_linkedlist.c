/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
};

void add_at_begin(struct Node **head, int data){
    printf("Add at begin : %d\n", data);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->prev = NULL;
    
    if (*head == NULL) {
        // If the list is empty, the new node is both the head and tail
        newNode->next = NULL;
        // No need to update (*head)->prev as head is NULL
    } else {
        // If the list is not empty, link the new node to the old head
        newNode->next = *head;
        (*head)->prev = newNode; // The old head's prev points to the new node
    }

    *head = newNode;
    
}

void add_at_end(struct Node **head, int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head; 
    
    printf("Add at end : %d\n", data);
    new_node->next = NULL;
    new_node->data = data;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}

void print_list(struct Node *head) {
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d<=>", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void insert_at_n(struct Node *head, int n, int data) {
    printf("Insert node %d at pos : %d\n", data, n);
    struct Node *node = head;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp;
    int i = 1;
    while(i< n-1) {
        node = node->next;
        i++;
    }
    temp = node->next;
    new_node->data = data;
    new_node->prev =  node;
    node->next = new_node;
    new_node->next = temp;
    temp->prev = new_node;
}

void delete_at_n(struct Node *head, int n) {
    printf("Delete node  at pos : %d\n", n);
    struct Node *node = head;
    struct Node *temp;

    int i = 1;
    while(i< n-1 && node->next) {
        node = node->next;
        i++;
    }
    if (!node->next->next){
         node->next = NULL;
    }
    else {
        temp = node->next->next;
        node->next = temp;
        temp->prev = node;
    }
    
}

int main()
{
    struct Node* head = NULL;
    add_at_begin(&head, 4);
    print_list(head);
    add_at_begin(&head, 6);
    print_list(head);
    add_at_begin(&head, 7);
    print_list(head);
    add_at_end(&head, 9);
    print_list(head);
    insert_at_n(head, 2, 3);
    print_list(head);
    delete_at_n(head, 3);
    print_list(head);
    delete_at_n(head, 4);
    print_list(head);

    return 0;
}

/**
 * Add at begin : 4
4<=>

Add at begin : 6
6<=>4<=>

Add at begin : 7
7<=>6<=>4<=>

Add at end : 9
7<=>6<=>4<=>9<=>

Insert node 3 at pos : 2
7<=>3<=>6<=>4<=>9<=>

Delete node  at pos : 3
7<=>3<=>4<=>9<=>

Delete node  at pos : 4
7<=>3<=>4<=>
 */