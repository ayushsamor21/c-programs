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

void printPreOrder(struct Tree* node){   // node -> left -> right
    if (node == NULL)
        return;
        
    printf("%d->", node->data);
    printPreOrder(node->left);
    printPreOrder(node->right);
}



int main(){
    int num1 = 100, num2 = 200, num3 = 300, num4 = 400, num5 = 500;

    struct Tree* root = createTree(num1);
    struct Tree* leftParent = createTree(num2);
    struct Tree* rightParent = createTree(num3);
    struct Tree* leftLeftChild = createTree(num4);
    struct Tree* rightRightChild = createTree(num5);
    
    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftLeftChild;
    leftParent->right = rightRightChild;

    printPreOrder(root);
    free(root);
    return 0;
}
