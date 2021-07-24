// Write a program to read structure elements from keyboard.
#include <stdio.h>
#include <conio.h>

struct student
{
    char name[10];
    int roll_no;
    int age;
} s1;

int main()
{
    printf("\nenter name of student: ");
    gets(s1.name);
    printf("\nenter roll number of student: ");
    scanf("%d", &s1.roll_no);
    printf("\nenter age of student: ");
    scanf("%d", &s1.age);

    printf("\nstudent name = %s", s1.name);
    printf("\nstudent roll number = %d", s1.roll_no);
    printf("\nstudent age = %d", s1.age);
    return 0;
}