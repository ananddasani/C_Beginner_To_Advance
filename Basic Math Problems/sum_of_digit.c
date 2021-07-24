// write a program using function which recieve number as an argument and return sum of digits
#include <stdio.h>
#include <conio.h>

int sum_digit(int);

int main()
{
    int num, ans;
    printf("\nenter the number: ");
    scanf("%d", &num);
    printf("\ndigit sum of %d is %d", num,sum_digit(num));
    return 0;
}

int sum_digit(int num)
{
    int n, r, sum = 0;
    n = num;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}