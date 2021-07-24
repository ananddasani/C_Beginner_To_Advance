// use of lable to print first n numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i = 0;
    printf("\nenter the limit: ");
    scanf("%d", &num);

loop:
    if (i <= num)
    {
        printf("%d\n",i);
        i++;
        goto loop;
    }
    return 0;
}

/*
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("\nenter the limit: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/