#include <stdio.h>

int main(){
    char name[30];
    printf("Enter the name: ")
    fgets(name, sizeof(name), stdin); //read string
    printf("The name entered :");
    puts(name);                       //display string
    return 0;
}
