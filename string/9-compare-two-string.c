#include <stdio.h>
#include <string.h>

int main(){
    char str1[25];
    char str2[25];

    printf("Please enter string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Please enter string : ");
    fgets(str2, sizeof(str2), stdin);

    if(strcmp(str1, str2) == 0){
        printf("The string are equal\n");
    }else{
        printf("The string are not equal\n");
    }
    return 0; 
}
