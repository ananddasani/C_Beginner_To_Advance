//Write a program to find out sum of first and last digit of a given number
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, n, first_digit, last_digit, temp, sum;
    printf("enter the number to know the sum of first and last digit: ");
    scanf("%d", &num);

    n = num;
    while (n != 0)
    {
        first_digit = n % 10;
        n = n / 10;
    }

    temp = num;
    last_digit = temp % 10;

    sum = first_digit + last_digit;
    printf("%d -> %d + %d = %d", num, first_digit, last_digit, sum);

    return 0;
}