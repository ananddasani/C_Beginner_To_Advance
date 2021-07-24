// program to print every third character of the inputed string
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[10];
    printf("\nenter the string to get every third character form it: ");
    gets(s);

    for (int i = 2; s[i] != NULL; i += 3)
    {
        if (islower(s[i]))
            printf("%c  ", s[i]);
    }

    return 0;
}