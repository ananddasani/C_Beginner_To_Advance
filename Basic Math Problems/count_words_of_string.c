// program to count the number of words in the inputed string and print each word in new line
#include <stdio.h>
#include <conio.h>

int main()
{
    char s[100], count = 1;
    printf("\nenter the string: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)    
    {
        if (s[i] == ' ' || s[i] == '\t')
        {
            printf("\n");
            count++;

            if (s[i + 1] == '\0')
                count--;
        }
        else
            printf("%c", s[i]);
    }
    printf("\ntoal number of words = %d ", count);
    return 0;
}