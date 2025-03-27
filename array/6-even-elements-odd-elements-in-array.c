#include <stdio.h>
int main(){
    int arr1[5] = {11, 20, 31, 40, 51};
    for(int i = 0; i <= 4; i++){
        if(arr1[i] % 2 == 0){
            printf("index[%d] the even number: %d\n", i, arr1[i]);
        }else{
            printf("index[%d] the odd number: %d\n", i, arr1[i]);
        }
    }
    return 0;
}
