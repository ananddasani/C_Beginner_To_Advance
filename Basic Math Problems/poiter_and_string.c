// program to manuplate string
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[20], *cptr;
    int count = 0;

    printf("\nenter the string: ");
    gets(s);

    // counting length of string using pointer
    cptr = s;
    while (*cptr != '\0')
    {
        count++;
        cptr++;
    }
    cptr--;
    printf("\nlength of %s is %d", s, count);

    // printing string in reverse order using pointer
    printf("\nreverse of %s is ", s);
    while (count > 0)
    {
        putchar(*cptr);
        cptr--;
        count--;
    }
    return 0;
}
