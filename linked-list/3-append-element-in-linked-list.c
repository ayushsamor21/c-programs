#include <stdio.h>
#include <stdlib.h>

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

void printList(struct Node* head){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* append(struct Node* head, int value){
    struct Node* newNode = createNode(value);
    if(head == NULL){                         //when the list is empty
        head = newNode;
        return head;
    }
    struct Node* last;                        //to check for last node 
    last = head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;                     //to append the new node 
    return head;
}

int main(){
    struct Node* root = NULL;
    root = append(root, 10);
    root = append(root, 25);
    root = append(root, 30);
    root = append(root, 40);
    root = append(root, 50);
    printList(root);
}
