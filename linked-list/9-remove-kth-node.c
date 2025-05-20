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

void printList_KthElement(struct Node* head, int k_node){
    struct Node* temp = head;
    int i = 1;
    while(temp != NULL){
        if(i % k_node != 0){
            printf("%d->", temp->data);
        }
        i++;
        temp = temp->next;
    }
}

int main(){
    int num , value, k_node;
    printf("Please enter the number of node : ");
    scanf("%d", &num);

    struct Node* head = NULL;
    for(int i = 1; i <= num; i++){
        printf("Please enter the elements : ");
        scanf("%d", &value);
        head = append(head, value);
    }

    printList(head);
    printf("\n");
    printf("Please enter the kth note : ");
    scanf("%d", &k_node);

    printList_KthElement(head, k_node);
    free(head);
    return 0;
}
