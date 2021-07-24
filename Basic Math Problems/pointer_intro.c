// introduction to pointer
#include <stdio.h>
#include <conio.h>

int main()
{
    int *ptr, i = 100;
    ptr = &i;

    printf("\n%d", i);
    printf("\n%p", ptr);
    printf("\n%p", &i);
    printf("\n%p", &ptr);
    printf("\n%d", *ptr);
    printf("\n%d", *(&i));

    printf("\n\npointer size = %d",sizeof(ptr));
    printf("\nint size = %d",sizeof(int));
    printf("\nfloat size = %d",sizeof(float));
    printf("\ndouble size = %d",sizeof(double));
    printf("\nchar size = %d",sizeof(char));
    return 0;
}