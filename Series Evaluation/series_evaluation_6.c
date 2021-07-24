// evaluate x - x^3/3! + x^5/5! - x^7/7! + .......
#include <stdio.h>
#include <conio.h>
#include <math.h>

long int fact(long int num);

int main()
{
    int n, x, flag = 1;
    float sum = 0, term = 1;
    printf("\nenter the value of x and n: ");
    scanf("%d%d", &x, &n);

    for (int i = 1; i <= n; i += 2)
    {
        term = (i / fact(i));
        sum = flag * (sum - pow(x, term));
        flag = -flag;
    }
    printf("\nsum = %f", sum);
    return 0;
}

long int fact(long int num)
{

    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}