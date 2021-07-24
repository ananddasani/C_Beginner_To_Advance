// write a program to find nCr using recusion
//  nCr =  n! / (r! * (n - r)!)
#include <stdio.h>
#include <conio.h>

long int fact(int num);
int nCr(int, int);

int main()
{
    int n, r, ans;
    printf("\nenter the value of 'n' & 'r': ");
    scanf("%d%d", &n, &r);

    if(n <= 0 || r <= 0 || n < r){
        printf("\nentered data is invalid :( \n");
        return 0;
    }

    ans = nCr(n, r);
    printf("%dC%d = %d", n, r, ans);
    return 0;
}

int nCr(int n, int r)
{
    int sum = fact(n) / (fact(r) * fact(n - r));
    return sum;
}

long int fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
}