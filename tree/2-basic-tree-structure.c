#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* createTree(int value){
    struct Tree* tree = (struct Tree*)malloc(sizeof(struct Tree));
    tree->data = value;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}


void printTree(struct Tree* root){
    if(root == NULL){
        return;
    }
    printTree(root->left);
    printf("%d->", root->data);
    printTree(root->right);
}


int main(){
    int num1 = 100, num2 = 10, num3 = 20, num4 = 1, num5 = 2, num6 = 4, num7 = 5;

    struct Tree* root = createTree(num1);
    struct Tree* leftParent = createTree(num2);
    struct Tree* rightParent = createTree(num3);
    struct Tree* leftChild = createTree(num4);
    struct Tree* rightChild = createTree(num5);
    struct Tree*  leftCh = createTree(num6);
    struct Tree* rightCh = createTree(num7);

    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftChild;
    leftParent->right = rightChild;
    rightParent->left = leftCh;
    rightParent->right = rightCh;

    printTree(root);

    free(root);
}
