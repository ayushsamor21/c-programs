#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Tree{
    int data;
    struct Tree* right;
    struct Tree* left;
};

struct Tree* createTree(int value){
    struct Tree* newNode = (struct Tree*)malloc(sizeof(struct Tree));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorderTraversal(struct Tree* root){
    if (root == NULL){
        return;
    }
    inorderTraversal(root->left);
    printf("%d->", root->data);
    inorderTraversal(root->right);
}

bool searchElementInTree(struct Tree* root, int element){
    if (root == NULL){
        return false;
    }
    if (root->data == element){
        return true;
    }
    return searchElementInTree(root->left, element) || searchElementInTree(root->right, element);
}

void freeTree(struct Tree* root){
    if (root == NULL){
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main(){
    int element, num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50, num6 = 60, num7 = 70;

    struct Tree* root = createTree(num1);
    struct Tree* leftParent = createTree(num2);
    struct Tree* rightParent = createTree(num3);
    struct Tree* leftLeftChild = createTree(num4);
    struct Tree* leftRightChild = createTree(num5);
    struct Tree* rightLeftChild = createTree(num6);
    struct Tree* rightRightChild = createTree(num7);



    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftLeftChild;
    leftParent->right = leftRightChild;
    rightParent->left = rightLeftChild;
    rightParent->right = rightRightChild;


    printf("InOrder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Please enter the node value to search: ");
    scanf("%d", &element);

    bool isExist = searchElementInTree(root, element);

    if(isExist == true){
        printf("The value %d is present in the tree\n", element);
    } else{
        printf("The value %d is not present in the tree\n", element);
    }

    freeTree(root);
    return 0;
}