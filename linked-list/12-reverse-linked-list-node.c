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

void printLinkedList(struct Node* head){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
}

struct Node* append(struct Node* head,int value){
    struct Node* newNode = createNode(value);         
    if(head == NULL){                                 
        head = newNode;                              
        return head;
    }
    struct Node* last;                              
    last = head;                                      
    while(last->next != NULL){                      
        last = last->next;
    }
    last->next = newNode;                             
    return head;                                   
}

void printInReverseOrder(struct Node* head){
    struct Node* temp = head;
    if(temp == NULL){
        return;
    }
    printInReverseOrder(temp->next);
    printf("%d->", temp->data); 
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
    printf("\n");
    printInReverseOrder(head);
    free(head);
}
