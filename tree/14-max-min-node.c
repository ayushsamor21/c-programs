#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* createTree(int value){
    struct Tree* node = (struct Tree*)malloc(sizeof(struct Tree));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int maximum(struct Tree* root){
    if (root == NULL){
        return INT32_MIN;
    }
    int currentMax = root->data;
    int leftMax = maximum(root->left);
    int rightMax = maximum(root->right);
    if(leftMax > currentMax){
        currentMax = leftMax; 
    }
    if(rightMax > currentMax){
        currentMax = rightMax;
    }
    return currentMax;
}

int minimum(struct Tree* root){
    if (root == NULL){
        return INT32_MAX;
    }
    int currentMin = root->data;
    int leftMin = minimum(root->left);
    int rightMin = minimum(root->right);
    if(leftMin < currentMin){
        currentMin = leftMin; 
    }
    if(rightMin < currentMin){
        currentMin = rightMin;
    }
    return currentMin;
}



void freeTree(struct Tree* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main(){
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

    int maxNode = maximum(root);
    printf("The Maximum value in Tree: %d\n", maxNode);

    int minNode = minimum(root);
    printf("The Minimum value in Tree: %d\n", minNode);

    freeTree(root);
    return 0;
}
