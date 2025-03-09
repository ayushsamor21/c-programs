#include <stdio.h>
int main(){
    int age[5]={10, 20, 55, 34, 76};
    int i;

    for (i = 0; i <= 4; i++){
        printf("%d %d\n", i, age[i]);
    }
    printf("index : %d \nsize of array : %d", age[2], sizeof(age));
    return 0;

} 
