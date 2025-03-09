#include <stdio.h>
int main(){
    int age[5] = {30, 5, 45, 76, 78};
    int min = age[0];
    for(int i = 0; i <= 4; i++){
        if (min > age[i]){
            min = age[i];
        }
    }
    printf("the min element of the array : %d", min);
    return 0;
}
