#include <stdio.h>
#include <stdlib.h>

//appending in the end of single linked list

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

void printLinkedList(struct Node* head){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
}

struct Node* append(struct Node* head,int value){
    struct Node* newNode = createNode(value);         //creating new Node
    if(head == NULL){                                 // Check if the list is empty
        head = newNode;                               // If empty, set head to the n
        return head;
    }
    struct Node* last;                                //  Pointer to traverse the list
    last = head;                                      // starting from head
    while(last->next != NULL){                        // traverse to last node
        last = last->next;
    }
    last->next = newNode;                             // Append the new node at the end
    return head;                                      // return head
}

int main(){
    int times, num;

    printf("Please enter the number of elements : ");
    scanf("%d", &times);

    struct Node* head = NULL;
    for(int i = 0; i < times; i++){
        printf("Please enter the elements : ");
        scanf("%d", &num);
        head = append(head, num);
    }
    printLinkedList(head);
    free(head);
}
