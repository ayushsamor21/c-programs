#include <stdio.h>

int main(){
    int number, sum = 0, original;
    printf("Please enter the number : ");
    scanf("%d", &number);
    original = number;
    while (number != 0){
        original = number % 10;
        sum = sum + original;
        number /= 10;
    }
    printf("The sum of the number %d : %d\n", original, sum);
    return 0;
}
