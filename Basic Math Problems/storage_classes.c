// program demonstrating static strage class
// when static is used that value is assigned to particular variable only once
#include <stdio.h>
#include <conio.h>

void fun();

int main()
{
    int num;
    printf("\nenter the linit: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        fun();

    return 0;
}

void fun()
{
    static int n = 2;
    n *= 2;
    printf("n = %d\n", n);
}