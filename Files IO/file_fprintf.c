// write a program to creat a file of five student record : rollno,name,branch name
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
    FILE *fp;
    int n;
    fp = fopen("file_fprintf.txt", "w");
    if (fp == NULL)
    {
        printf("\nUNABLE TO OPEN FILE\n");
        return 0;
    }

    printf("\nhow many students ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n\tenter record of student %d\n", i + 1);
        printf("\nrollno = ");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("name = ");
        // scanf("%s",s[i].name);
        gets(s[i].name);
        fflush(stdin);
        printf("branch name = ");
        gets(s[i].bname);
        fflush(stdin);

        fprintf(fp, "\n%d \n%s \n%s\n", s[i].roll, s[i].name, s[i].bname);
    }
    fclose(fp);
    return 0;
}