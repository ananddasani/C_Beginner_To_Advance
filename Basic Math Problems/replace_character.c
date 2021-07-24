// Write a program to replace a character in given string
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[10], ch, rep;
    int found = 0, i = 0;
    printf("\nenter the string: ");
    gets(s);

    printf("\nyou entered: %s", s);
    printf("\nwhich the character you want to replace: ");
    ch = getche();

    while (s[i] != '\0')
    {
        if (s[i] == ch)
        {
            printf("\nenter the character in raplacement of '%c': ", ch);
            rep = getche();
            found = 1;
            break;
        }
        i++;
    }

    if (!found)
        printf("\n'%c' is not present in '%s'", ch, s);
    else
    {
        s[i] = rep;
        printf("\nnow string is '%s'", s);
    }
    return 0;
}