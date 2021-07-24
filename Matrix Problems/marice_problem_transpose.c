// program to read NxN matrice and print its transose as well as original
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10][10], m, n;
    printf("\nenter the number of ROWS and COLUMNS in the matrices: ");
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("\t\tORIGINAL MATRICE\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", arr[i][j]);

        printf("\n");
    }

    // METHOD 1:
    // printf("\t\tTRANSPOSE MATRICE\n");
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < m; i++)
    //         printf("%d  ", arr[i][j]);

    //     printf("\n");
    // }

    // METHOD 2:
    printf("\t\tTRANSPOSE MATRICE\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", arr[j][i]);

        printf("\n");
    }
    return 0;
}