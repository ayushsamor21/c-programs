#include <stdio.h>
int main(){
    int marks[4] = {20, 30, 40, 40};
    int search = 30;
    for(int i = 0; i <= 3; i = i+1){
        if (marks[i] == search){
            printf("the element %d is present in the array at index[%d]", search, i);
            return 0;
        }
    }
    printf("the element %d does not exist in the array", search);
    return 0;
}
