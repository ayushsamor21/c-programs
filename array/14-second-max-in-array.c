#include <stdio.h>
int main(){
    int arr[4] = {2, 9, 5, 7};
    int first_max = arr[0];
    int second_max = arr[0];
    for(int i = 0; i <= 3; i++){
        if (first_max < arr[i]){
            second_max = first_max;
            first_max = arr[i];
        }else if(second_max < arr[i]){ /*compare when array value is less than first max but more than
            second max array example array = 2, 9, 5*/
            second_max = arr[i]; 
        }
    }
    printf("the max value of the array is : %d\n", second_max);
}
