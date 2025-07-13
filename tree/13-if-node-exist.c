#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool isNodeExist(struct Tree* root, int targetKey){
    if (root == NULL){
        return false;
    }
    if (root->data == targetKey){
        return true;
    }
    return isNodeExist(root->left, targetKey) || isNodeExist(root->right, targetKey);
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

    int targetKey;
    printf("Please enter the node: ");
    scanf("%d", &targetKey);

    if (!isNodeExist(root, targetKey)){
        printf("The Node %d does not exist in the tree.\n", targetKey);
    } else{
        printf("The Node %d exist in the tree.\n", targetKey);
    }

    freeTree(root);
    return 0;
}
