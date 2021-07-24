// checking the entered character is vowel or not
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\nenter the character: ");
    ch = getche();

    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'z')))
    {
        switch (ch)
        {
        case 'A':

        case 'E':

        case 'I':

        case 'O':

        case 'U':

        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u':
            printf("\n%c is vowel", ch);
            break;

        default:
            printf("\n%c is not a vowel\n", ch);
            break;
        }
    }
    else
        printf("\nNOT AN ALPHABET :( \n");

    return 0;
}