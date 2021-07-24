// Define a structure type struct personal that would contain person name, date of joining
// and salary
#include<stdio.h>
#include<conio.h>
#define size 10

struct personal
{
    char name[10];
    int DOJ;
    float salary; 
};

int main()
{
    int n;
    struct personal emp[size];

    printf("\nhow many person ? ");
    scanf("%d",&n);
    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        printf("\n\t\tEMPLOYEE %d\n\n",i + 1);

        printf("enter name : ");
        gets(emp[i].name);
        printf("enter DOJ (only year): ");
        scanf("%d",&emp[i].DOJ);
        fflush(stdin);
        printf("enter salary : ");
        scanf("%f",&emp[i].salary);
        fflush(stdin);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("\t\tEMPLOYEE %d's DATA :\n\n",i + 1);

        printf("name = ");
        puts(emp[i].name);
        printf("DOJ = %d",emp[i].DOJ);
        printf("\nsalary = %f",emp[i].salary);
        printf("\n");
    }
    return 0;
}