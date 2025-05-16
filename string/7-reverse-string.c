#include <stdio.h>
#include <string.h>

int main(){
    char str[30], rev[30];
    printf("Please enter the string : ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        rev[i] = str[len - 1 - i];
    }
    printf("The revese string : %s\n", rev);
}
