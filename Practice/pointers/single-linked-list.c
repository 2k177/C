// Online C compiler to run C program online
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

Node* createNode(int data){
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
    }
void insertNode(Node **head, int data){
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node *head) {
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

int main() {
    // Write C code here
   struct Node *head = NULL;
   insertNode(&head, 1);
   insertNode(&head, 2);
   insertNode(&head, 5);
   printList(head);
   free(head); 
    return 0;
}
// output : 5 2 1
