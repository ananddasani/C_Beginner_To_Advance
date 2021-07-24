// program for perfect numbers
// perfect number means sum of its divisor must be the number itself
#include <stdio.h>
#include <conio.h>
/*
int main()
{
    int num, n, sum = 0;
    printf("\nenter the number to check it is perfect or not: ");
    scanf("%d", &num);

    n = num;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == num)
        printf("\n%d is a perfect number\n", num);
    else
        printf("\n%d is a perfect number\n", num);

    return 0;
}
*/
// perfect number in range
#include <stdio.h>
#include <conio.h>

int perfect(int);

int main()
{
    int n, sum = 0;
    printf("\nenter the limit till you want to see perfect numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d    ", i);
        else
            printf("");
    }
    return 0;
}