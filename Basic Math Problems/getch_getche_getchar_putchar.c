#include <stdio.h>
#include <conio.h>
/*
// using getch (entered character NOT will echoed on screen)
int main()
{
    int ch1, ch2;
    printf("\nenter the first character: ");
    ch1 = getch();
    printf("\nenter the second character: ");
    ch2 = getch();

    printf("\nch1 = %c \nch2 = %c", ch1, ch2);

    return 0;
}
*/
/*
// using getche (entered character will echoed on screen)
int main()
{
    int ch1, ch2;
    printf("\nenter the first character: ");
    ch1 = getche();
    printf("\nenter the second character: ");
    ch2 = getche();

    printf("\nch1 = %c \nch2 = %c", ch1, ch2);

    return 0;
}
*/
/*
// usinf getchar (accept's character by character only)
int main()
{
    int ch1, ch2;
    printf("\nenter the first character: ");
    ch1 = getchar();
    printf("\nenter the second character: ");
    ch2 = getchar();

    printf("\nch1 = %c \nch2 = %c", ch1, ch2);

    return 0;
}
*/
// usinf putchar (it display one character on the screen)
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\nenter any lower case character: ");
    ch = getchar();

    printf("\nlower case = ");
    putchar(ch);

    printf("\nupper case = ");
    putchar(ch - 32);

    return 0;
}
/* 
// using puts
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\nenter any lower case character: ");
    ch = getchar();

    printf("\nlower case = ");
    putchar(ch);

    printf("\nupper case = ");
    putchar(ch - 32);

    return 0;
}
 */