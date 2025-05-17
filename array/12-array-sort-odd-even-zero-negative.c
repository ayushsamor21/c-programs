#include <stdio.h>
int main(){
    int arr[] = {1, -2, 0, 3, 9, 0, -5, 4, 0, 9, -2, 5, -3, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int odd = 0, even = 0, negative = 0, zero = 0; 
    for(int i = 0; i < length; i++){
        if(arr[i] % 2 == 0 && arr[i] > 0){
            even++;
        }
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i] % 2 != 0 && arr[i] > 0){
            odd++;
        }
        if(arr[i] < 0){
            negative++;
        }
    }
    printf("The number of even numbers: %d\n", even);
    printf("The number of odd numbers: %d\n", odd);
    printf("The number of negative numbers: %d\n", negative);
    printf("The number of zero numbers: %d\n", zero);
}
