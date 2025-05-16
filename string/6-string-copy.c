#include <stdio.h>
int main(){
    char str1[30], str2[30];
    printf("Please enter the string :");
    fgets(str1, sizeof(str1), stdin);
    for(int i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    printf("The copied string : ");
    puts(str2);
}
