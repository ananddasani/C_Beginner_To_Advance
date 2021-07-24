// program to finf the length of the given string
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    int len = 0;
    printf("\nenter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    printf("\nentered string length is %d", len);

    return 0;
}