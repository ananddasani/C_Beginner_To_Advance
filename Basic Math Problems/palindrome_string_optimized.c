// program to find the entered string is palindrome o not
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    int len = 0, l, h;
    printf("\nenter the string to check it is palindrome or not: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    l = 0;
    h = len - 1;
    while (l < h)
    {
        if (str[l++] != str[h--])
        {
            printf("\nNOT PALINDROME");
            return;
        }
        printf("\nPALINDROME");
    }
    return 0;
}