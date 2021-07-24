// program to insert the element at the array index
#include <stdio.h>
#include <conio.h>
#define size 11

int main()
{
    int arr[size], n, num, i, loc;
    printf("\nenter the size of array (not more than 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nenter the number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nyou entered: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    printf("\nnow enter the number you wan to insert: ");
    scanf("%d", &num);

    printf("\nenter the location (in between 1 to %d): ", n);
    scanf("%d", &loc);

    if (loc > n)
    {
        printf("\nyou entered the location out of range :(\n");
        return 0;
    }

    if (loc == n)
        arr[n] = num;
    else
    {
        for (i = n - 1; i >= loc; i--)
            arr[i + 1] = arr[i];
    }
    arr[loc] = num;

    printf("\narray elements: ");
    for (i = 0; i <= n; i++)
        printf("%d  ", arr[i]);

    return 0;
}