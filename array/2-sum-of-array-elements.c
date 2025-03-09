#include <stdio.h>
int main(){
    int marks[5] = {10, 30, 40, 50, 90};
    int sum = 0;
    for(int i = 0; i <= 4; i++){
        //sum = sum + marks[i];
        sum += marks[i];
    }
    printf("Sum of marks : %d\n", sum);
    return 0;
}
