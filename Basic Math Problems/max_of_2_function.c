// program to find maximum number form 2 number using function and ternary operator
#include <stdio.h>
#include <conio.h>

int max(int n1, int n2)
{
    int m;
    return m = (n1 > n2) ? n1 : n2;
}

int main()
{
    int n1, n2;
    printf("\nEnter two numbers :: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("max is %d ", max(n1, n2));

    return 0;
}
