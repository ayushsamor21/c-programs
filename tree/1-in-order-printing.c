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

void printInorder(struct Tree* node){
    if (node == NULL)
        return;

    // First recur on left subtree
    printInorder(node->left);

    // Now deal with the node
    printf("%d ", node->data);

    // Then recur on right subtree
    printInorder(node->right);
}



int main(){
    int num1 = 100, num2 = 200, num3 = 300, num4 = 400, num5 = 500;

    struct Tree* root = createTree(num1);
    struct Tree* leftParent = createTree(num2);
    struct Tree* rightParent = createTree(num3);
    struct Tree* leftChild = createTree(num4);
    struct Tree* rightChild = createTree(num5);
    
    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftChild;
    rightParent->right = rightChild;

    printInorder(root);
    free(root);
    return 0;
}
