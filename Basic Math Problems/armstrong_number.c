// program to find armstrong numbrer
// armstrong num. means sum of cube of individual digit
#include <stdio.h>
#include <conio.h>
#define CUBE(r) r *r *r
/*
int main()
{
    int num, n, sum = 0, r;
    printf("\nenter the number to check wether it is armstrong or not: ");
    scanf("%d", &num);

    n = num;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + CUBE(r);
        n = n / 10;
    }

    if (sum == num)
        printf("\n%d is ARMSTRONG NUMBER", num);
    else
        printf("\n%d is NOT ARMSTRONG NUMBER", num);

    return 0;
}
*/

// armstrong number in range
long int armstrong(long int);

int main()
{
    int n;
    printf("\nenter the limit you want to see the armstrong number: ");
    scanf("%d", &n);

    for (long int i = 1; i <= n; i++)
    {
        if (armstrong(i))
            printf("%lu  ", i);
        else
            printf("");
    }
    return 0;
}

long int armstrong(long int num)
{
    long int n = num, r, sum = 0;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + CUBE(r);
        n = n / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}
