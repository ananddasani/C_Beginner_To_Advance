// palindrome number is a number which is same after the reversal also
#include <stdio.h>
#include <conio.h>
/*
int main()
{
    int num, r, sum = 0, n;
    printf("\nenter the number to check it is palindrome or not: ");
    scanf("%d", &num);

    n = num;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }
    if (sum == num)
        printf("\n%d is a palindrome number", num);
    else
        printf("\n%d is a not palindrome number", num);

    return 0;
}
*/
// palindrome number in range

#include <stdio.h>
#include <conio.h>

int palindrome(int num);

int main()
{
    int n;
    printf("\neneter the range you want to see palindrome number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (palindrome(i))
            printf("%d  ", i);
        else
            printf("");
    }
    return 0;
}

int palindrome(int num)
{
    int n, r, sum = 0;

    n = num;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}