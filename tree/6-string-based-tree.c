#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tree{
    char data[10];
    struct Tree* left;
    struct Tree* right;
};

struct Tree* createTree(char name[]){
    struct Tree* tree = (struct Tree*)malloc(sizeof(struct Tree));
    strcpy(tree->data, name);
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

int main(){
    char name1[10] = "AYUSH";
    char name2[10] = "RAJVEER";
    char name3[10] = "RUDRA";

    struct Tree* root = createTree(name1);
    struct Tree* leftChild = createTree(name2);
    struct Tree* rightChild = createTree(name3);

    root->left = leftChild;
    root->right = rightChild;

    printf("%s\n", root->data);
    printf("%s\n", leftChild->data);
    printf("%s\n", rightChild->data);

    free(root);
    free(leftChild);
    free(rightChild);
}
