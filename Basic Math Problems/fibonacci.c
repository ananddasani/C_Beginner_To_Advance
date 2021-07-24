// Write a program to generate first n number of Fibonacci series
#include <stdio.h>
#include <conio.h>

long int fib(int);
/*
//using recursion
int main()
{
    int num;
    printf("enter the limit till which you want fibonacci number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        printf("%d  ", fib(i));

    return 0;
}

long int fib(int num)
{

    if (num == 1 || num == 2)
        return 1;
    else
        return fib(num - 1) + fib(num - 2);
}
*/
//using iteration
int main()
{
    int num;
    printf("\nenter the position at which you want fibonacci number: ");
    scanf("%d", &num);

    fib(num);

    return 0;
}

long int fib(int num)
{
    int previous = 1, current = 1, next;

    for (int i = 0; i < num; i++)
    {
        printf("%d ", previous); // if we write printf here then full series will be printed

        next = previous + current; // c = a + b
        previous = current;        //  a = b
        current = next;            //   b = c
    }
    // return previous;
    // printf("\n%d \n", previous); // the exact number will be printed here
}