#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[5] = {10, 50, 45, 78, 89};
    int num;
    printf("Please enter a value:");
    scanf("%d", &num);
    bool isExist = false;
    for(int i = 0; i <= 4; i++){
        if(arr[i] == num){
            isExist = true;
        }
    }
    if(isExist == true){
        printf("The element %d exist in the Array", num);
    }else{
        printf("The element %d does not exist in the Array", num);
    }
}
