#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[20];
    char character;
    int count = 0;
    printf("Please enter the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Please enter the character : ");
    character = getchar();

    for(int i = 0; string[i] != '\0'; i++){   //to convert to lowercase
        string[i] = tolower(string[i]);
    }

    for(int i = 0; string[i] != '\0'; i++){   // to count occurrence
        if(string[i] == character){
            count++;
        }
    }
    if(count > 0){
        printf("the occurrence of %c :%d", character, count);
    }else{
        printf("the occurrence is : -1 ");
    }
}
