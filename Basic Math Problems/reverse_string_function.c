// user define function to reverse the string
#include <stdio.h>
#include <conio.h>

int length(char *);
char *reverse(char *, int);

int main()
{
    char s[10];
    printf("\nenter the string to reverse: ");
    gets(s);

    int len = length(s);
    printf("\nreverse of '%s' is --> ", s);
    puts(reverse(s, len));
    return 0;
}

int length(char *s)
{
    int count = 0;
    while (*s != 0)
    {
        count++;
        s++;
    }
    return count;
}

char *reverse(char *s, int len)
{
    int i, j = len - 1, temp;
    for (i = 0; i < j; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
    return s;
}