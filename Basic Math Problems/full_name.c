// program to take full name form the user and print on the console
#include <stdio.h>
#include <conio.h>
#define size 100

int main()
{
    char fName[size], mName[size], lName[size];
    printf("\nEnter your first name :: ");
    gets(fName);
    printf("\nEnter your middle name :: ");
    gets(mName);
    printf("\nEnter your last name :: ");
    gets(lName);

    printf("\nHi ! %s %s %s :)\n", fName, mName, lName);
    return 0;
}