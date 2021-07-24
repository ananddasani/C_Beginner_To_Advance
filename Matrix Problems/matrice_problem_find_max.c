// take 5*5 matrice and find the max num with its row and column index
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5][5];

    // getting matrice input
    printf("\nenter the elements in 5 X 5 matrices:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // printing matrice
    printf("you entered:\n ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d  ", a[i][j]);

        printf("\n");
    }

    // finding max num from matrice
    int max = a[0][0], row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max <= a[i][j])
            {
                max = a[i][j];

                row = i + 1;
                col = j + 1;
            }
        }
    }

    // printing result
    printf("\n MAX = %d", max);
    printf("\n a[%d][%d] = %d", row, col, max);
    return 0;
}