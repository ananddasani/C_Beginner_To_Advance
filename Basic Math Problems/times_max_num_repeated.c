// program to find the maximum number and how many times maximum number is repeated in the array
#include <stdio.h>
#include <conio.h>
#define size 100

int main()
{
    int arr[size];
    int max, max_count = 0, n;
    printf("\nenter size of array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the element: ");
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i])
            max = arr[i];
    }
    printf("\nMAX = %d", max);

    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
            max_count++;
    }
    printf("\ntimes MAX repeated = %d", max_count);

    return 0;
}