#include <stdio.h>
int main(){
    int age[5] = {24, 45, 67, 9, 8};
    int max = age[0];
    for(int i = 0; i <= 4; i = i+1){
        if (max < age[i]){
            max = age[i];
        }
    }
    printf("the max value of the array is : %d", max);
    return 0;
}
