// getting nd printing matrix
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5][5];
    int m, n;
    printf("\nenter how many row you want: ");
    scanf("%d", &m);
    printf("\nenter how many column you want: ");
    scanf("%d", &n);
    // grtting input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // printing matrice
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);

        printf("\n");
    }
    return 0;
}