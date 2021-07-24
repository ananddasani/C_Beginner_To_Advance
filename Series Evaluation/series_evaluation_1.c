// Write a C program to find 1+1/2+1/3+1/4+....+1/n.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    float ans = 0;

    printf("\nenter thr limit: ");
    scanf("%d", &num);

    for (float i = 1; i <= num; i++)
        ans = ans + (1 / i);

    for (int i = 1; i <= num; i++)
        printf("1/%d + ", i);

    printf("= %f", ans);

    return 0;
}