// program to evaluate 1 + x + x^2 + x^3 + ......
#include <stdio.h>
#include <conio.h>
#include <math.h>

int series(int, int);

int main()
{
    int x, n, sum;
    printf("\nenter the value of X: ");
    scanf("%d", &x);
    printf("\nenter the limmit: ");
    scanf("%d", &n);
    printf("\nsum = %d", series(x, n));
    return 0;
}

int series(int x, int n)
{
    int sum = 1, term = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", sum);
        sum += pow(x, i);
    }
    return sum;
}