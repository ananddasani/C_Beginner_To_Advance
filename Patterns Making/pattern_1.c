// to print following pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
#include <stdio.h>
#include <conio.h>

int main()
{
    int row;
    printf("enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
            printf("* ");
            
        printf("\n");
    }
    return 0;
}