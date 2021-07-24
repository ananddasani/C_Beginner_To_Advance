// take the input of month number and group them according to their number of days
#include <stdio.h>
#include <conio.h>
// #define size 100
enum day
{
    t8,
    t0,
    t1
};

int main()
{
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month_no[12], grp[] = {0, 0, 0};
    int n;
    // grp[t8] = 0, no30 = 0, no31 = 0;

    printf("\nhow many times you want to insert month number ? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter month number: ");
        scanf("%d", &month_no[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        if (month[month_no[i] - 1] == 28)
            grp[t8]++;
        else if (month[month_no[i] - 1] == 30)
            grp[t0]++;
        else if (month[month_no[i] - 1] == 31)
            grp[t1]++;
    }
    printf("\n28 days month = %d", grp[t8]);
    printf("\n30 days month = %d", grp[t0]);
    printf("\n31 days month = %d", grp[t1]);

    return 0;
}