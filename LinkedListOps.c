// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>


// Creating a node
struct node{
    int data;
    struct node *next;
};

struct node *head;
// print the linked list value
void printLinkedlist(struct node *p) {
    while(p !=NULL){
        printf("%d\t", p->data);
        p = p->next;
    }
}

void addNewNodeAtBegining(struct node *p){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 18;
    newNode->next = p;
    printf("\nLinked list after adding element at beginging\n ");
    printLinkedlist(newNode);
}

void addNewNodeAtEnd(struct node *p){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 16;
    struct node *temp = p;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    printf("\nLinked list after adding element at end\n ");
    printf("temp->data : %d\n", temp->data);
    printLinkedlist(p);
}

void addNewNodeInmiddle(struct node *p, int position){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 7;
    struct node *temp = p;
    for(int i=0; i<position-1; i++){
        if (temp->next != NULL)
            temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("\nLinked list after adding element at position : %d\n ", position);
    printLinkedlist(p);
}

void deleteNodeAtbegining(struct node *p){
    head = head->next;
    printf("\nLinked list after deleting node at begining..\n ");
    printLinkedlist(head);
}

void deleteNodeAtend(){
    struct node *temp = head;
    printf("\nLinked list after deleting node at end..\n ");
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL; 
    printLinkedlist(head);
}

int isNodeValuePresent(value){
    struct node *temp = head;
    printf("\nSerching for node %d..\n ", value);
    while(temp != NULL){
        if (temp->data == value){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main() {
  // Initialize nodes
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->data = 1;
  two->data = 2;
  three->data = 3;
  

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;
 

  // printing node-value
   printLinkedlist(head);
   addNewNodeAtBegining(head);
   addNewNodeAtEnd(head);
   addNewNodeInmiddle(head, 2);
   deleteNodeAtbegining(head);
   deleteNodeAtend();
   int isvaluePresent = isNodeValuePresent(7);
   printf("%d", isvaluePresent);
   
}
