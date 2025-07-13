#include <stdio.h>
#include <stdlib.h>

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

int countLeaf(struct Tree* root){
    if (root == NULL){
        return 0;
    }
    int leafNode = 0;
    if (root->left == NULL && root->right == NULL){
        leafNode = 1;
    }

    leafNode += countLeaf(root->left);
    leafNode += countLeaf(root->right);

    return leafNode;
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

    int totalLeafNode = countLeaf(root);
    printf("Total Leaf: %d\n", totalLeafNode); 

    freeTree(root);
    return 0;
}

