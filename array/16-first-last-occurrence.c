#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[10] = {10, 40, 50, 10, 40, 90, 70, 80, 90, 40};
    int firstPosition = -1;
    int finalPosition = -1;
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    for(int i = 0; i <= 9; i++){
        if(arr[i] == num){  
            if(firstPosition == -1){
                firstPosition = i;
            }
            finalPosition = i;
        }
    }
    printf("%d\n%d\n", firstPosition, finalPosition);
}
