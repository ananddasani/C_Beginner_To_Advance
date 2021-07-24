// getting nd printing matrix
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int m, n, p, q;

    // printf("\t\t\tMATRICE A\n");
    printf("\nenter how many row you want in matrice A: ");
    scanf("%d", &m);
    printf("enter how many column you want in matrice A: ");
    scanf("%d", &n);

    // printf("\t\t\tMATRICE B\n");
    printf("\nenter how many row you want in matrice B: ");
    scanf("%d", &p);
    printf("enter how many column you want in matrice B: ");
    scanf("%d", &q);

    if (m != p || n != q)
    {
        printf("\nSIZE UNMATCH cant add :\\");
        return 0;
    }

    // getting input for matrice A
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //getting input for matrice B
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("b[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // printing matrice A
    printf("\t\tMATRICE A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);

        printf("\n");
    }

    // printing matrice B
    printf("\t\tMATRICE B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d  ", b[i][j]);

        printf("\n");
    }

    // adding matrice A and B
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }

    // printing result
    printf("\tMATRICE A + MATRICE B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d  ", c[i][j]);

        printf("\n");
    }
    return 0;
}