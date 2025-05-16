#include <stdio.h>

int main(){
    char str[30], ch;
    int count = 0;
    printf("Please enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character you want to search: ");
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++){
        if(ch == str[i]){
            count++;
        }
    }
    printf("The number of occurence : %d", count);
    return 0;
}
