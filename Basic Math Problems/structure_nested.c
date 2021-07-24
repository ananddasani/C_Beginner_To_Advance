// write a program demonstrating the use of nested structure
#include <stdio.h>
#include <conio.h>

struct address
{
    char add1[20];
    char add2[20];
    char city[20];
    char state[20];
} a;

struct emp
{
    char name[20];
    int salary;
    struct address a;
} e;

int main()
{
    printf("\nenetr name of employee: ");
    scanf("%s", &e.name);
    fflush(stdin);
    printf("\nenetr salary of employee: ");
    scanf("%d", &e.salary);
    fflush(stdin);
    printf("\nenetr address (address line 1,address line 2,city,state) of employee:\n");
    gets(e.a.add1);
    fflush(stdin);
    gets(e.a.add2);
    fflush(stdin);
    scanf("%s", &e.a.city);
    fflush(stdin);
    scanf("%s", &e.a.state);
    fflush(stdin);

    printf("\n\t\tDETALIS OF EMPLOYEE\n");
    printf("\nname of employee = ");
    puts(e.name);
    printf("salary of employee = %d", e.salary);
    fflush(stdin);
    printf("\naddress of employee:- ");
    puts(e.a.add1);
    puts(e.a.add2);
    puts(e.a.city);
    puts(e.a.state);
    return 0;
}