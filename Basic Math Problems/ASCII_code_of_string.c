// input the string and dispay the ASCII code of the individual character
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    printf("\nenter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        printf("\n%c = %d", str[i], str[i]);

    return 0;
}