#include <stdio.h>
#include <string.h>
typedef struct{
    char name[50];
    char id[10];
    int age;
    int grade;
}Student;

void print_student(Student student);
void print_student(Student student)
 {
    printf("Name %s\n", student.name);
    printf("Id  %s\n", student.id);
   printf("Garde %d\n", student.grade);
   printf("%d\n", student.age);

 }


int main(void)
{
    Student s1, s2, s3;
    s1.age = 30;
    s2.age = 20;
    s3.age = 29;
    s1.grade = 89;
    s2.grade = 78;
    s3.grade = 56;
    strcpy(s1.name, "Ali");
    strcpy(s2.name, "Vali");
    strcpy(s3.name, "Jaha");
    strcpy(s1.id, "012222312");
    strcpy(s2.id, "213123213");
    strcpy(s3.id, "213213212");

    print_student(s1);
    print_student(s2);
    print_student(s3);

    return 0;
}
