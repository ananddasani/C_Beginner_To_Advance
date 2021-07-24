// Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!.
#include <stdio.h>
#include <conio.h>

double fact(float);

int main()
{
    int num;
    float ans = 0;
    printf("\nenter the limit: ");
    scanf("%d", &num);

    for (float i = 1; i <= num; i++)
        ans = ans + (1 / fact(i));

    for (int i = 1; i <= num; i++)
        printf("1/%d! + ", i);

    printf("= %f", ans);

    return 0;
}

double fact(float n)
{

    long int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}