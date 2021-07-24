// program to print the third character form the string
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[10];
    printf("\nenter the string: ");
    gets(s);

    if (islower(s[3]))
        printf("\nthird character of '%s' is %c", s, s[2]);
    else
        printf("\ncan't print the third character , string is not in lower case fully :(");

    return 0;
}