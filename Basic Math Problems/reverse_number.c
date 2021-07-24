//Write a program to reverse a number.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, n, r, sum = 0;
    printf("enter the number to reverse: ");
    scanf("%d", &num);
    n = num;

    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("reverse of %d is %d", num, sum);

    return 0;
}