#include <stdio.h>
#include <ctype.h>

int main(){
    char str[30];
    int vowels = 0, space = 0, digits = 0, consonants = 0;
    printf("Please enter the string : ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] !='\0'; i++){
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowels++;
        }else if(str[i] >= 'a' && str[i] <='z'){
            consonants++;;
        } else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        } else if(str[i] == ' '){
            space++;
        }
    }
    printf("The number of vowels : %d\n", vowels);
    printf("The number of digits : %d\n", digits);
    printf("The number of consonants : %d\n", consonants);
    printf("The number of space : %d\n", space);
    return 0;
}
