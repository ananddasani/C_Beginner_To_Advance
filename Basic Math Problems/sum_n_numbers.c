// program to sum the first n numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    float num, sum = 0.0;
    int n = 0;
    printf("\nenter the last number you want sum: ");
    scanf("%f", &num);

    while (n <= num)
    {
        sum = sum + n;
        n++;
    }

    // sum = (n * (n + 1)) / 2
    printf("\nsum = %f", sum);
    return 0;
}