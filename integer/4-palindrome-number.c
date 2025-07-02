#include <stdio.h>

void palindrome(int number){
    int original = number, remainder = 0;
    while (number != 0){
        int digit = number % 10;
        remainder = remainder * 10 + digit;
        number /= 10;
    }
    if (remainder == original){
        printf("The number %d is palindrome\n", remainder);
    } else {
        printf("The number %d is not palindrome\n", remainder);
    }
}

int main(){
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);
    palindrome(number);
    return 0;
}