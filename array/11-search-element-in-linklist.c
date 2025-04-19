#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* node  = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

bool searchValueInList(struct Node* head, int search){
    bool isExist;
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        if(search == temp->data){
            isExist = true;
            break;
        }
        temp = temp->next;
    }
    return isExist;
}

int main(){
    int number1 = 100;
    int number2 = 200;
    int number3 = 300;

    struct Node* head = createNode(number1);
    struct Node* first = createNode(number2);
    struct Node* second = createNode(number3);

    head->next = first;
    first->next = second;
    
    int search;
    printf("Please enter the number you want to search:");
    scanf("%d", &search);

    bool isPresent= searchValueInList(head, search);
    if(isPresent == true){
        printf("the value %d does exist in the list", search);
    }else{
        printf("the value %d does not exist in the list", search);
    }
}
