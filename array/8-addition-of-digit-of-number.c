#include <stdio.h>
int main(){
    int num;
    printf("please enter a number: ");
    scanf("%d", &num);
    int sum = 0;               //532
    while(num > 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("%d\n", sum);
}
