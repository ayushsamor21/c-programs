#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp{
    int empId;
    char name[50];
    float salary;
};

int main(){
    struct emp *ptr;
    int n;
    printf("Enter number of employee :");
    scanf("%d", &n);
    
    ptr = (struct emp*)malloc(n * sizeof(struct emp));

    for(int i = 0; i < n; i++){
        printf("Enter the employee %d id : ", i + 1);
        scanf("%d", &(ptr + i)->empId);
        getchar();
        
        printf("Enter the employee %d name : ", i + 1);
        fgets((ptr + i)->name, sizeof((ptr + i)->name), stdin);

        size_t len = strlen((ptr + i)->name);
        if(len > 0 && (ptr + i)->name[len - 1] == '\n'){
            (ptr + i)->name[len - 1] = '\0';
        }

        printf("Enter the employee %d salary :", i + 1);
        scanf("%f", &(ptr + i)->salary);
        printf("\n");
    }

    printf("-----EMPLOYEE DETAIL------\n");
    for(int i = 0; i < n; i++){
        printf("Enter the employee %d id : %d \n", i + 1, (ptr + i)->empId);
        printf("Enter the employee %d name : ", i + 1);
        puts((ptr + i)->name);
        printf("Enter the employee %d salary : %f\n", i + 1, (ptr + i)->salary);
        printf("\n");
    }
    free(ptr);
    return 0;
}
