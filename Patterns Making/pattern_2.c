// to print following pattern
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("enter the number of row: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i + 2)
                printf("* ");
            else
                printf("");
        }
        printf("\n");
    }
    return 0;
}