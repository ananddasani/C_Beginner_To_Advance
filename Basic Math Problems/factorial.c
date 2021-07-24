//Write a C program to find factorial of a given number.
#include <stdio.h>
#include <conio.h>

long int fact(long int);

int main()
{
    long int num;
    printf("enter the number you want factorial: ");
    scanf("%d", &num);
    printf("factorial of %d is %d", num,fact(num));
    return 0;
}
/*
// using recursion
long int fact(long int num)
{
    if (num == 1)
        return 1;
    else
        return num * fact(num - 1);
}
*/
// using iteration
long int fact(long int num){

        int factorial = 1;

        for (int i = 1; i<= num; i++)
        {
           factorial = factorial * i;
        }
        return factorial;
}