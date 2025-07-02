#include <stdio.h>
#include <math.h>

void armstrong(int number){
    int original = number, remainder = 0;
    while (number != 0){
        int digit = number % 10;
        remainder = remainder + pow(digit, 3);
        number /= 10;
    }
    if (remainder == original){
        printf("The number %d is Armstrong\n", original);
    } else{ 
        printf("The number %d is not Armstrong\n", original);
    }
}

int main(){
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);
    armstrong(number);
    return 0;
}