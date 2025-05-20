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

void middleTerm(struct Node* head, int num){
    int position = num / 2;
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL){
        if(position == count){
            printf("the middle node : %d", temp->data);
        }
        temp = temp->next;
        count++;
    }
}

int main(){
    int num, value;
    printf("Please enter the number of elements : ");
    scanf("%d", &num);

    struct Node* head = NULL;
    for(int i = 0; i < num; i++){
        printf("Please enter the element : ");
        scanf("%d", &value);
        head = append(head, value);
    }
    middleTerm(head, num);
    free(head);
    return 0;
}
