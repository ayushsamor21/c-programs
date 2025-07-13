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

int childOfNode(struct Tree* root, int key){
    if (root == NULL){
        return 0;
    }
    if(root->data == key){
        if (root->left != NULL){
            printf("The left child: %d\n", root->left->data);
        }else {
            printf("The left child: NULL\n");
        }
        if (root->right != NULL){
            printf("The right child: %d\n", root->right->data);
        } else {
            printf("The right child:  NULL\n");
        }
        return 1;
    }
    return childOfNode(root->left, key) || childOfNode(root->right, key);
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

    int key; 
    printf("Please enter the node: ");
    scanf("%d", &key);

    printf("The child of the Node: %d\n", key);
    if(childOfNode(root, key) == 0){
        printf("Node %d not found in the tree.\n", key);
    }

    freeTree(root);
    return 0;
}
