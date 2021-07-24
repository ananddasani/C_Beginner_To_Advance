// Write a program to find a character from given string
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[10], ch, found = 0, i = 0;
    printf("\nenter the string: ");
    gets(s);

    printf("\nenter the character you want to search: ");
    ch = getche();

    while (s[i] != '\0')
    {
        if (s[i] == ch)
        {
            found = 1;
            break;
        }
        i++;
    }

    if (!found)
        printf("\n'%c' is not present in '%s'", ch, s);
    else
        printf("\n'%c' is present in '%s'", ch, s);

    return 0;
}