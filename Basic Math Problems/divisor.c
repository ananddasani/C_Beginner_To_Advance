// program to print all integer between start and end which is divisible by divisor
#include <stdio.h>
#include <conio.h>

int main()
{
    int start, end, divisor;
    printf("\nenter the start and end integer: ");
    scanf("%d%d", &start, &end);
    printf("enter the divisor: ");
    scanf("%d", &divisor);

    for (int i = start; i <= end; i++)
    {
        if (i % divisor == 0)
            printf("%d  ", i);
        else
            printf("");
    }

    // int a, i = 4;
    // a = 24 || --i;
    // i = i--;
    // printf("%d %d ", a, i);
    // return 0;
}
