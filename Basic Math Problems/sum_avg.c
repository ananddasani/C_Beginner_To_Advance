//Write a C program to find the sum and average of different numbers which are accepted
//by user as many as user wants

#include <stdio.h>
#include <conio.h>

int main()
{
    float avg = 0, num, sum = 0;
    int count = 0;
    printf("enter -1 to exit \n");
    scanf("%f", &num);

    while (num != -1)
    {
        sum = sum + num;
        count++;
        scanf("%f", &num);
    }
    avg = sum / count;

    printf("sum = %f\n", sum);
    printf("avg = %f\n", avg);

    return 0;
}