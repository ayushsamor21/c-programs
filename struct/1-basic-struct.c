#include <stdio.h>
#include <string.h>

struct student {
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct student s1;

    printf("Enter the student roll number :");
    scanf("%d", &s1.rollNo);
    getchar();           //consumes left over-line

    printf("Enter the student name :");
    fgets(s1.name, sizeof(s1.name), stdin);

    size_t len = strlen(s1.name);            
    if (len > 0 && s1.name[len - 1] == '\n') {
        s1.name[len - 1] = '\0';  //to remove the line after fgets
    }

    printf("Enter the student marks :");
    scanf("%f", &s1.marks);

    printf("---------Student details--------\n");
    printf("Roll Number : %d\n", s1.rollNo);
    printf("name : ");
    puts(s1.name);
    printf("marks : %f\n", s1.marks);
    return 0;
}
