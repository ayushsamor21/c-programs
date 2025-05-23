#include <stdio.h>
#include <stdlib.h>

struct Tree{
    char character;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* createTree(char character){
    struct Tree* tree = (struct Tree*)malloc(sizeof(struct Tree));
    tree->character = character;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

int main(){
    char ch1 = 'a', ch2 = 'b', ch3 = 'b', ch4 = 'd', ch5 = 'e', ch6 = 'f', ch7 = 'g';

    struct Tree* root = createTree(ch1);
    struct Tree* leftParent = createTree(ch2);
    struct Tree* rightParent = createTree(ch3);
    struct Tree* leftLeftChild = createTree(ch4);
    struct Tree* leftRightChild = createTree(ch5);
    struct Tree* rightLeftChild = createTree(ch6);
    struct Tree* rightRightChild = createTree(ch7);

    root->left = leftParent;
    root->right = rightParent;
    leftParent->left = leftLeftChild;
    leftParent->right = leftRightChild;
    rightParent->left = rightLeftChild;
    rightParent->right = rightRightChild;

    printf("%c\n", root->character);
    printf("%c\n", leftParent->character);
    printf("%c\n", rightParent->character);
    printf("%c\n", leftLeftChild->character);
    printf("%c\n", leftRightChild->character);
    printf("%c\n", rightLeftChild->character);
    printf("%c\n", rightRightChild->character);
    
    free(root);
}
