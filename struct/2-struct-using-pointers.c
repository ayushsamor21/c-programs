#include <stdio.h>
#include <string.h>


struct student {
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct student s1, *studentid;
    studentid = &s1;

    printf("Enter the student roll number :");
    scanf("%d", &studentid->rollNo);
    getchar();           

    printf("Enter the student name :");
    fgets(studentid->name, sizeof(studentid->name), stdin);

    size_t len = strlen(studentid->name);            
    if (len > 0 && studentid->name[len - 1] == '\n') {
        studentid->name[len - 1] = '\0';
    }

    printf("Enter the student marks of subject 1 :");
    scanf("%f", &studentid->marks);

    printf("---------Student details--------\n");
    printf("Roll Number : %d\n", studentid->rollNo);
    printf("name : ");
    puts(studentid->name);
    printf("marks subject 1 : %f\n", studentid->marks);
    return 0;
}
