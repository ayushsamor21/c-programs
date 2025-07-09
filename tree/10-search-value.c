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
    int element;

    struct Tree* root = createTree(10);
    struct Tree* leftParent = createTree(20);
    struct Tree* rightParent = createTree(30);
    struct Tree* leftLeftChild = createTree(40);
    struct Tree* leftRightChild = createTree(50);
    struct Tree* rightLeftChild = createTree(60);
    struct Tree* rightRightChild = createTree(70);



    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftLeftChild;
    leftParent->right = leftRightChild;
    rightParent->left = rightLeftChild;
    rightParent->right = rightRightChild;


    printf("Inorder Traversal: ");
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