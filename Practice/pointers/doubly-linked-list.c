#include <stdio.h>
typedef struct node{
        int data;
        struct node *prev;
        struct node *next;
}Node;
Node *head = NULL;
Node *tail = NULL;

void insertAtBeginning(data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        head->prev = newNode;
        head = newNode;
    }
}

void printList() {
  Node *temp = head;

  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main() {
    insertAtBeginning(11);
    insertAtBeginning(10);
    insertAtBeginning(9);
    printList();
    return 0;
}
