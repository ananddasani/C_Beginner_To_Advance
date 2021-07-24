// size of aray will specified at runtime
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr, *a;
    printf("\nenter the size of array: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("\nUNABLE TO GET MEMORY BLOCK\n");
        return 0;
    }

    for (ptr = a; ptr < a + n; ptr++)
    {
        printf("\nenter the element: ");
        scanf("%d", ptr);
    }

    printf("\nyou entered: ");
    for (ptr = a; ptr < a + n; ptr++)
        printf("\n%d is located at %u location", *ptr, ptr);

    return 0;
}