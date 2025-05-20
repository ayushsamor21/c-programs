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

struct Node* append(struct Node* head, int value){
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

void printList(struct Node* head){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
}

void searchLinkedList(struct Node* head, int search){
    struct Node* temp = head;
    int occurrence = 0;
    while(temp != NULL){
        if(search == temp->data){
            occurrence++;
        }
        temp = temp->next;
    }
    if(occurrence == 0){
        printf("the element %d does not exist in the linked list", search);
    }else{
         printf("the element %d exist : %d times", search, occurrence);
    }
}


int main(){
    int num , value, search;
    printf("Please enter the number of node : ");
    scanf("%d", &num);

    struct Node* head = NULL;
    for(int i = 1; i <= num; i++){
        printf("Please enter the elements : ");
        scanf("%d", &value);
        head = append(head, value);
    }
    printf("\n");
    printf("Please enter the element you want to search :");
    scanf("%d", &search);
    printList(head);
    printf("\n");
    searchLinkedList(head, search);
    free(head);
    return 0;
}
