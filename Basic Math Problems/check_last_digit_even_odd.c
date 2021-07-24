//Write a C program to input an integer number and check the last digit of number is even
// or odd.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, temp;
    printf("enter the digit: ");
    scanf("%d", &num);
    temp = num;
    temp = num % 10;

    if (temp % 2 == 0)
        printf("%d's last digit %d is even number", num, temp);
    else
        printf("%d's last digit %d is odd number", num, temp);

    return 0;
}