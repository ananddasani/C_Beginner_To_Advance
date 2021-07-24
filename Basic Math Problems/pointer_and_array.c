// program to access array element using pointer
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], n, *ptr;
    printf("\nenter the size of array: ");
    scanf("%d", &n);

    ptr = a;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element: ");
        scanf("%d",ptr);
        ptr++;
    }

    ptr = a; // initializing ptr to first location 
    printf("\narray elements in forward are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",*ptr);
        ptr++;
    }
    printf("\n");

    // printing in reverse order
    ptr = a + n - 1;
    printf("array elements in reverse are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",*ptr);
        ptr--;
    }
    return 0;
}