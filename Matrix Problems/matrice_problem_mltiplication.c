// program to multiplay two matrices
// multiplication can only be performed if "NUM OF COL OF 'A' AND NUM OF ROW OF 'B' SHOULD MATCH"
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10], b[10][20], c[20][20];
    int m, n, p, q, i, j, sum;

    printf("\nenter number of rows and columns in the MATRICE A: ");
    scanf("%d%d", &m, &n);
    printf("\nenter number of rows and columns in the MATRICE B: ");
    scanf("%d%d", &p, &q);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("b[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\t\tMATRICE A\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d  ", a[i][j]);

        printf("\n");
    }

    printf("\t\tMATRICE B\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d  ", b[i][j]);

        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                c[i][j] += (a[i][k] * b[k][i]);
            }
        }
    }

    printf("\t\tMATRICE A * B\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d  ", c[i][j]);

        printf("\n");
    }
    return 0;
}