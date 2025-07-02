#include <stdio.h>

void reverse(int number){
    int original = number, remainder = 0;
    while (number != 0){
        int digit = number % 10;
        remainder = remainder * 10 + digit;
        number /= 10;
    }
    printf("The number %d reversed : %d\n", original, remainder);
}

int main(){
    int number;
    printf("Please enter the number : ");
    scanf("%d", &number);
    reverse(number);
    return 0;
}