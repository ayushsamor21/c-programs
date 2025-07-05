#include <stdio.h>

int main(){
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);
    for(int i = 2; i <= number/2; i++){
        if (number % i == 0){
            printf("The divisior of %d: %d\n", number, i);
        }
    }
    return 0;
}