#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("\ngive any decimal number: ");
    scanf("%d", &num);

    printf("\ndecimal = %d", num);
    printf("\noctal = %o", num);
    printf("\nhexa = %x", num);
    return 0;
}