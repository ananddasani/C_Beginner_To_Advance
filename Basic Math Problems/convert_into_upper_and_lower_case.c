// program to convert the given string into upper and lower case
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[10], sup[10], slo[10];
    int i;

    printf("\nenter the string to convert into the upper and lower case: ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            sup[i] = s[i] - 32;
        else
            sup[i] = s[i];
    }
    sup[i] = '\0';

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            slo[i] = s[i] + 32;
        else
            slo[i] = s[i];
    }
    slo[i] = '\0';

    printf("\nORIGINAL STRING = %s", s);
    printf("\nLOWER CASE STRING = %s", slo);
    printf("\nUPPER CASE STRING = %s", sup);
    return 0;
}