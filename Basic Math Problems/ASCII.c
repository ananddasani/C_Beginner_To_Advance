// program to display ASCII code of the entered character

#include <stdio.h>
#include <conio.h>
/*
int main()
{
    char ch;
    printf("\nenter the character you want ASCII code: ");
    scanf("%c", &ch);

    printf("\n%c = %d\n", ch, ch);

    return 0;
}
*/
/*
// program to display ASCII code of the entered character in range

int main()
{
    printf("\n\there is the table of all ASCII code\n ");

    for (int i = 0; i <= 256; i++)
        printf("%c = %d\n", i, i);

    return 0;
}
*/
// using getchar()
int main()
{
    char ch;
    printf("\nenter the character you want ASCII code: ");
    ch = getchar();

    printf("\n%c = %d\n", ch, ch);

    return 0;
}