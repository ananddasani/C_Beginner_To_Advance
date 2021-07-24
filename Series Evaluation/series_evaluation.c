//Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
#include <stdio.h>
#include <conio.h>
#include <math.h>
// usinf power function
/*
int main()
{
    int num, ans = 0;
    printf("\nenter the limit: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        ans = ans + pow(i, 2);

    for (int i = 1; i <= num; i++)
        printf("%d^2 + ", i);

    printf("= %d ", ans);

    return 0;
}
*/
// without use of power function
int main()
{
    int num, ans = 0;
    printf("\nenter the limit: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        ans = ans + i * i;

    for (int i = 1; i <= num; i++)
        printf("%d^2 + ", i);

    printf("= %d ", ans);

    return 0;
}
