#include <stdio.h>
#include <stdbool.h>

int main() {
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("Prime number : %d\n", i);
        }
    }
    return 0;
}