// program to calculate nPr
// nPr =  n! / (n - r)!
#include <stdio.h>
#include <conio.h>

long int fact(int num);
int nPr(int, int);

int main()
{
    int n, r, ans;
    printf("\nenter the value of 'n' & 'r': ");
    scanf("%d%d", &n, &r);

    // if (n <= 0 || r <= 0 || n < r)
    // {
    //     printf("\nentered data is invalid :( \n");
    //     return 0;
    // }

    ans = nPr(n, r);
    printf("%dP%d = %d", n, r, ans);
    return 0;
}

int nPr(int n, int r)
{
    int sum = fact(n) / (fact(n - r));
    return sum;
}

long int fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
}