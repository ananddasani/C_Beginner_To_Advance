// program to store n number of string and then search the given string
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define size 10

int main()
{
    int n, found = 0;
    char s[10][20], loc[10];
    printf("\nenter how many strings you want to insert: ");
    scanf("%d", &n);
    // fflush();

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the string: ");
        scanf("%s",s[i]);
    }

    printf("\nstrings you entered:\n");
    for (int i = 0; i < n; i++)
        printf("\t%s\n", s[i]);

    printf("\nenter the string you want yo search: ");
    scanf("%s",loc);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i], loc) == 0)
        {
            printf("\nstring present at location: %d ", i += 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\n%s not present in the strings entered by you :(", loc);
    return 0;
}