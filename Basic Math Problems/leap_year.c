// write a function to check the leap year
#include <stdio.h>
#include <conio.h>

int leap(int);

int main()
{
    int num;
    printf("\nenter the year: ");
    scanf("%d", &num);

    if (leap(num))
        printf("\nLEAP YEAR");
    else
        printf("\nNOT LEAP YEAR");

    return 0;
}

int leap(int num)
{
    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
        return 1;

    return 0;
}