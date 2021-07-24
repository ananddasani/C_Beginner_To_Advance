// write a program to display or read five students record : rollno,name,branch name
#include <stdio.h>
#include <conio.h>
#define size 10

struct student
{
    int roll;
    char name[10];
    char bname[10];
} s[size];

int main()
{
    int n;
    FILE *fp;

    fp = fopen("file_fprintf.txt", "r");
    if (fp == NULL)
    {
        printf("\nunable to open the file \n");
        return 0;
    }

    printf("\nenter the number of students to fetch data: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d, %s, %s", &s[i].roll, s[i].name, s[i].bname);
        _flushall();
        printf("\n\t\tSTUDENT %d", i + 1);
        printf("\nroll no. = %d", s[i].roll);
        printf("\nname = %s", s[i].name);
        printf("\nbranch name = %s", s[i].bname);
    }
    fclose(fp);
    return 0;
}