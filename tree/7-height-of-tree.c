#include <stdio.h>
#include <stdlib.h>

// this programs calculates the number of nodes not the number of edges for height//
struct Tree{
    int value;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* createTree(int value){
    struct Tree* tree = (struct Tree*)malloc(sizeof(struct Tree));
    tree->value = value;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

int height(struct Tree* node){
    if(node == NULL) {
        return 0;
    }
    int left_height = height(node->left);
    int right_height = height(node->right);

    if (left_height > right_height) {
        return left_height + 1;
    } else {
        return right_height + 1;
    }
}

void freeTree(struct Tree* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main(){
    int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50, num6 = 60;
    struct Tree* root = createTree(num1);
    struct Tree* left_parent = createTree(num2);
    struct Tree* right_parent = createTree(num3);
    struct Tree* left_left_parent =  createTree(num4);
    struct Tree* right_left_parent =  createTree(num5);
    struct Tree* right_parent_child =  createTree(num6);

    root->left = left_parent;
    root->right = right_parent;
    left_parent->left = left_left_parent;
    left_parent->right = right_left_parent;
    right_parent->left = right_parent_child;


    int height_of_tree = height(root);
    printf("The height of the tree : %d\n", height_of_tree);
    freeTree(root);
}
