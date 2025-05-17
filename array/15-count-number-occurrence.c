#include <stdio.h>
int main(){
    int arr[5] = {10, 20, 56, 56, 20};
    int num;
    int count = 0;
    printf("Please enter a value:");
    scanf("%d", &num);
    for(int i = 0; i <= 4; i++){
        if(arr[i] == num){
            count++;
        }
    }
    printf("The element %d exist %d times in the array\n", num, count);
}
