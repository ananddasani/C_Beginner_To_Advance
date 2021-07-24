// using the third variable
/*
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n\t\tbefore swap\nA = %d\nB = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n\t\tafter swap\nA = %d\nB = %d\n", a, b);

    return 0;
}
*/
//without using the third variable
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n\t\tbefore swap\nA = %d\nB = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\t\tafter swap\nA = %d\nB = %d\n", a, b);

    return 0;
}