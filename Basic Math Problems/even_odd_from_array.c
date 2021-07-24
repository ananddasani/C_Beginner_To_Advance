// Write a program to find out which number is even or odd from list of 10 numbers using
// array
#include <stdio.h>
#include <conio.h>
#define size 20

int main()
{
    int arr[size], n;
    printf("\nenter the size of array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the element: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("even = %d   \n", arr[i]);
        else
            printf("odd = %d    ", arr[i]);
    }
    return 0;
}