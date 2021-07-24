// check wether the entered string is plindrome or not
#include <stdio.h>
#include <conio.h>
#include <string.h>

int palidrome(char *);
char *reverse(char *, int);

int main()
{
    char str[100];
    printf("\nenter the string to check it is palindrome or not: ");
    gets(str);

    if (palindrome(str))
        printf("\n\tPALINDROME");
    else
        printf("\n\tNOT PALINDROME");
    return 0;
}

int palindrome(char *s)
{
    char str_rev[100];
    int len = 0, ans, i, j;

    for (int i = 0; s[i] != '\0'; i++)
        len++;
    printf("\nLENGTH = %d", len);

    for (i = len - 1, j = 0; i >= 0; i--, j++)
        str_rev[j] = s[i];
    str_rev[j] = '\0';

    // str_rev = reverse(s,len);

    printf("\nORIGINAL STRING = %s", s);
    printf("\nREVERSE STRING = %s", str_rev);

    ans = strcmp(s, str_rev);
    // printf("\n if s1 = s2 (0), if s1 > s2 (+ve num), else (-ve num) = %d", ans);
    if (ans == 0)
        return 1;
    else
        return 0;
}
/*
char *reverse(char *s, int len)
{
    char *str_rev;
    int i, j;

    for (i = len - 1, j = 0; i >= 0; i--, j++)
        str_rev[j] = s[i];
    str_rev[j] = '\0';

    return str_rev;
}
*/