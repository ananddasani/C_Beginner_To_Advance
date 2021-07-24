// display the reverse string as well as the orignal string
#include <stdio.h>
#include <conio.h>

int str_len(char *s);

int main()
{
    char str[100], str_rev[100];
    int len = 0, i, j;

    printf("\nenter the string to reverse: ");
    gets(str);

    len = str_len(str);

    for (i = len - 1, j = 0; i >= 0; i--, j++)
        str_rev[j] = str[i];

    str_rev[j] = NULL;

    printf("\nORIGIAL STRING = %s",str);
    // puts(str);
    printf("\nREVERSED STRING = %s",str_rev);
    // puts(str_rev);

    return 0;
}

int str_len(char *s)
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
        len++;

    return len;
}