//Write a C program to find out the Maximum and Minimum number from given 10
// numbers
#include<stdio.h>
#include<conio.h>
#define SIZE 10

int max(int arr[], int size)
{
    int maximum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }
    return maximum;
}

int min(int arr[], int size)
{
    int minimum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];
    }
    return minimum;
}
int main()
{
    int arr[SIZE], i, MAX, MIN;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nenter number: ");
        scanf("%d", &arr[i]);
    }
    MAX = max(arr, SIZE);
    MIN = min(arr, SIZE);

    printf("%d is maximum\n", MAX);
    printf("%d is minimum\n", MIN);
    return 0;
}