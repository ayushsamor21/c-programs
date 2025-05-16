#include <stdio.h>
#include <string.h>

struct grade{
    float grade1;
    float grade2;
    float grade3;
};

struct student {
    int rollNo;
    char name[50];
    struct grade marks;
};

void print(struct student s1){
    printf("---------Student details--------\n");
    printf("Roll Number : %d\n", s1.rollNo);
    printf("name : ");
    puts(s1.name);
    printf("marks subject 1 : %f\n", s1.marks.grade1);
    printf("marks subject 2 : %f\n", s1.marks.grade2);
    printf("marks subject 3 : %f\n", s1.marks.grade3);
}

int main(){
    struct student s1;

    printf("Enter the student roll number :");
    scanf("%d", &s1.rollNo);
    getchar();           

    printf("Enter the student name :");
    fgets(s1.name, sizeof(s1.name), stdin);

    size_t len = strlen(s1.name);            
    if (len > 0 && s1.name[len - 1] == '\n') {
        s1.name[len - 1] = '\0';
    }

    printf("Enter the student marks of subject 1 :");
    scanf("%f", &s1.marks.grade1);
    printf("Enter the student marks of subject 2 :");
    scanf("%f", &s1.marks.grade2);
    printf("Enter the student marks of subject 3 :");
    scanf("%f", &s1.marks.grade3);

    print(s1);

    return 0;
}
