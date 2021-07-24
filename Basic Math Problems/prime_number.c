//Write a program to check whether the given number is prime or not
//prime number means , the number which is having only 2 divisors (1 and itself)
#include <stdio.h>
#include <conio.h>
#include <math.h>
/*
int main()
{
    int num, n, count = 1;
    printf("\nenter the number to check it is prime or not: ");
    scanf("%d", &num);
    n = num;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("\n%d is a prime number", num);
    else
        printf("\n%d is not a prime number", num);
    return 0;
*/
// to print all prime number in range

int prime(int);

int main()
{
    int n;
    printf("\nenter the limit to see the prime number series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (prime(i))
            printf("%d ", i);
        else
            printf("");
    }

    return 0;
}

int prime(int n)
{

    int count = 1;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        return 1;
    // printf("%d  ",n);
    else
        return 0;
    // printf("");
}