// Write a program to write integers in file
#include <stdio.h>
#include <conio.h>
#define size 100

int main()
{
    int i = 0, n, arr[size];
    FILE *fp;

    fp = fopen("file_write_integer.txt", "w");
    if (fp == NULL)
    {
        printf("\nfile cant be opened\n");
        return 0;
    }

    //          inputing numbers manually
    // printf("enter numbers (-1 to terminate)\n");
    // do
    // {
    //     scanf("%d", &arr[i]);
    //     if (arr[i] == -1)
    //         break;
    //     fprintf(fp, "\n%d", arr[i]);
    //     i++;
    // } while (1);

    //          numbers are inputed automatically
    printf("enter limit: ");
    scanf("%d", &n);
    for (int j = 0; j <= n; j++)
    {
        arr[j] = j;
        fprintf(fp, "%d\n", arr[j]);
    }
    fclose(fp);
    return 0;
}
