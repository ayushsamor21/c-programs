#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str1[30] = "Ayush";
    printf("the length of the string : %zu\n", strlen(str1)); //length of string

    char str2[30];
    strcpy(str2, str1);                  //copying str to str2;
    printf("The copied string : ");
    puts(str2);

    strcat(str1, str2); // concatenates str1 and str2 the resultant string is stored in st1
    printf("The concatenated string : ");
    puts(str1);

    char str3[] = "Ayush";                //ASCII value
    char str4[] = "Ayush";
    char str5[] = "AYUSH";
    int compare1, compare2;
    compare1 = strcmp(str3, str4);
    compare2 = strcmp(str4, str5);
    printf("strcmp(str3, str4) = %d\n", compare1);
    printf("strcmp(str4, str5) = %d\n", compare2);

    for(int i = 0; str3[i] != '\0'; i++){   //uppercase 
        str3[i] = toupper(str3[i]);
    }
    printf("Uppercase : ");
    puts(str3);

    for(int i = 0; str5[i] != '\0'; i++){   //lowercase
        str5[i] = tolower(str5[i]);
    }
    printf("lowercase : ");
    puts(str5);
    return 0;
}
