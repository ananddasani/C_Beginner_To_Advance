// write a program to store a character string in a memory block ceated using malloc() function and then modify it to store a larger size string
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char *s, *sptr;
    int n;
    printf("\nenter the size of string you want to insert: ");
    scanf("%d", &n);
    _flushall();

    s = (char *)malloc(n * sizeof(char));
    if (s == NULL)
    {
        printf("\nUNABME TO ALLOCATE THE MEMORY\n");
        return 0;
    }

    printf("\nenter the string upto %d length: ", n);
    gets(s);
    printf("\nyou entered: %s", s);

    printf("\ngive increased size for string input: ");
    scanf("%d", &n);
    _flushall();

    s = (char *)realloc(s, n * sizeof(char));
    if (s == NULL)
    {
        printf("\nUNABME TO ALLOCATE THE MEMORY\n");
        return 0;
    }

    printf("\nnewly allocated block still contain old string '%s'", s);
    printf("\nnow enter the string upto %d length: ", n);
    gets(s);
    printf("\nyou entered: %s", s);

    return 0;
}