// Write a program to delete a character in given string.

#include <stdio.h>
#include <conio.h>

int main()
{
    char s[10], ch, del;
    int found = 0, i = 0;
    printf("\nenter the string: ");
    gets(s);

    printf("\nyou entered: %s", s);
    printf("\nwhich character you want to delete: ");
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
    {
        for (int j = i; s[j] != '\0'; j++)
            s[j] = s[j + 1];

        printf("\nnow string is '%s'", s);
    }
    return 0;
}