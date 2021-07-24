// program to sum the major diagonal using function
// major diognal means row number and column number is same
#include <stdio.h>
#include <conio.h>
#define size 10

int sum_diag(int a[][size], int, int);

int main()
{
    int a[10][size], m, n, sum = 0;
    printf("\nenter the number of rows and column in matrix: ");
    scanf("%d%d", &m, &n);

    // getting input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // printing matrix
    printf("\n\t\tMATRIX A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("= %d", sum_diag(a, m, n));
    return 0;
}

int sum_diag(int a[][size], int m, int n)
{
    int sum = 0;
    // calcuating the sum of diagonal elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += a[i][j];
        }
    }

    // printing the sum
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d +", a[i][j]);
        }
    }
    return sum;
}