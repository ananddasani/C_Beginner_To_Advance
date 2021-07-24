// write a function that round off the given number into nearst int
#include <stdio.h>
#include <conio.h>

int round_off(float);

int main()
{
    float n;
    printf("\nenter any real number to round off: ");
    scanf("%f", &n);
    printf("\n%d", round_off(n));
    return 0;
}

int round_off(float n)
{
    int num = n;
    float temp;
    temp = n - num;

    if (temp >= 0.5)
        return num + 1;
    else
        return num;
}
