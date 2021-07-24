// Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9!
#include <stdio.h>
#include <conio.h>
#include <math.h>

double fact(int);

int main()
{
    int num;
    float ans = 1.0;
    printf("\nenter the limit: ");
    scanf("%d", &num);

    for (float i = 1; i <= num; i++)
    {
        if ((int)i % 2 == 0)
            ans = ans + pow(i, (i / fact((int)i)));
        else
            ans = ans - pow(i, (i / fact((int)i)));
    }

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            printf("%d^%d/%d! + ", i, i, i);
        else
            printf("%d^%d/%d! - ", i, i, i);
    }
    printf("= %f", ans);

    return 0;
}

double fact(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}