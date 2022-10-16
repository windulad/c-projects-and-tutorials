#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    char stu_no[50];
    int age;
    float gpa;
}stu_1;

void main()
{
    printf("Enter your student name: ");
    scanf("%s", stu_1.name);
    printf("Enter your student number: ");
    scanf("%s", stu_1.stu_no);
    printf("Enter your student age: ");
    scanf("%d", &stu_1.age);
    printf("Enter your student gpa: ");
    scanf("%f", &stu_1.gpa);

    printf("Student Name: %s\n", stu_1.name);
    printf("Student No. : %s\n", stu_1.stu_no);
    printf("Student age : %d\n", stu_1.age);
    printf("Student age : %f\n", stu_1.gpa);
}
