// program to find max of three number by using function
#include <stdio.h>
#include <conio.h>

int max(int, int, int);

int main()
{
    int i, j, k;
    printf("\nenter three numbers to find the largest number from them: ");
    scanf("%d%d%d", &i, &j, &k);
    printf("\n%d is larger from %d %d & %d",max(i, j, k), i, j, k);
    return 0;
}

int max(int a, int b, int c)
{
    int large = a;

    if (b > large)
        large = b;
    if (c > large)
        large = c;

    return large;
}