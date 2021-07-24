// evaluate 1/x - 2/x^2 + 3/x^3 - .....
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    float x, sum = 0.0, term = 1;
    printf("\nenter the value of X: ");
    scanf("%f", &x);
    printf("\nenter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        term = term * 1 / x;
        sum = sum + (i * term);
        term = -term;
    }
    printf("\nsum = %f", sum);

    return 0;
}