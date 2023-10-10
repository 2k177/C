SinglyLinkedListNode {
     int data;
     SinglyLinkedListNode* next;
 };

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *temp = NULL;
    SinglyLinkedListNode *temp2 = NULL;
    
    while (llist != NULL){
        temp2 = llist->next;
        llist->next = temp;
        temp = llist;
        llist = temp2;
    } 
    llist = temp; 
    while (llist != NULL){
        printf("%d\t", llist->data);
        llist = llist->next;
    }
    return llist;
}
