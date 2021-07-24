// evaluate 1 - x^2/2! + x^4/4! - x^6/6! + .......
#include <stdio.h>
#include <conio.h>
#include <math.h>

long int fact(long int num);

int main()
{
    int n, x, flag = 1;
    float sum = 1, term = 1;
    printf("\nenter the value of x and n: ");
    scanf("%d%d", &x, &n);

    for (int i = 2; i <= n; i += 2)
    {
        term = flag * (i / fact(i));
        sum = sum - pow(x, term);
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