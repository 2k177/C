// Online C compiler to run C program online
#include <stdio.h>
typedef struct node{
        int data;
        struct node *prev;
        struct node *next;
}Node;
Node *head = NULL;

void insertAtBeginning(data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head == NULL){
        head = newNode;
    }
    else{
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtEnd(data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    // newNode->prev = NULL;
    newNode->next = NULL;
    Node *temp = head; 
    while (temp->next != NULL){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

void deleteAtBegin(){
    if (head == NULL){
        printf("Empty linked list");
        return;
    }
    head = head->next;
    head->prev = NULL;
}

void deleteAtEnd(){
    if (head == NULL){
        printf("Empty linked list");
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
  }
//   printf("%d\n", temp->data);
  temp->next = NULL;
//   printf("%d\n", head->data);
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
    // Write C code here
    insertAtBeginning(11);
    insertAtBeginning(10);
    insertAtBeginning(9);
    insertAtEnd(12);
    
    printList();
    deleteAtEnd();
    printf("Linked list after deleting at end..\n");
    printList();
    deleteAtBegin();
    printf("Linked list after deleting at begining..\n");
    printList();
    return 0;
}

// output
// 9->10->11->12->
// Linked list after deleting at end..
// 9->10->11->
// Linked list after deleting at begining..
// 10->11->
