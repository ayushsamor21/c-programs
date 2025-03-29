#include <stdio.h>
int main(){
    int arr1[5] = {4, 6, 7, 8, 9};
    int arr2[5] = {11, 10, 7, 5, 1};
    int arr3[5] = {};
    for(int i = 0;i <= 4; i++){
        arr3[i] = arr1[i] + arr2[i]; //addition of array 1 and 2 
    }
    for(int i = 0; i <= 4; i++){
        printf("index[%d] : %d\n", i, arr3[i]); // printing the sum of the arrays 
    } 
}
