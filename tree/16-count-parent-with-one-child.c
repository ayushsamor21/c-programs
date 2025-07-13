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

int countSingleChildParent(struct Tree* root){
    if (root == NULL){
        return 0;
    }
    int countParent = 0;
    if ((root->left != NULL && root->right == NULL) || (root->right != NULL && root->left == NULL)){
        countParent = 1;
    }
    countParent += countSingleChildParent(root->left);
    countParent += countSingleChildParent(root->right);

    return countParent;
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
    struct Tree* leftRightChild = createTree(50);
    struct Tree* rightLeftChild = createTree(60);

    root->left = leftParent;
    root->right = rightParent;
    leftParent->right = leftRightChild;
    rightParent->left = rightLeftChild;

    int singleChildParent = countSingleChildParent(root);
    printf("The number Single child Parent Node : %d\n", singleChildParent);



    freeTree(root);
    return 0;
}
