/* write a program using function and stucture to accept item information such as name , quantity ,
unit and cost . then print the details of each item */
#include <stdio.h>
#include <conio.h>
#define size 10

float calculate(int, int);

struct item
{
    char name[20];
    int quantity;
    float price;
    float cost;
};

int main()
{
    int n;
    struct item it[size];

    printf("\nhow many products ? ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        printf("\n\t\tPRODUCT %d", i + 1);

        printf("\nproduct name = ");
        gets(it[i].name);
        printf("\nproduct quantity = ");
        scanf("%d", &it[i].quantity);
        printf("\nproduct price = ");
        scanf("%f", &it[i].price);
        _flushall();
    }

    printf("\n\t\tPRODUCT DETAILS\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nname\t\tquantity\t\tprice\t\tcost");
        printf("\n%s\t%d\t%f\t%f\n", it[i].name, it[i].quantity, it[i].price, calculate(it[i].quantity, it[i].price));
    }
    return 0;
}

float calculate(int q, int p)
{
    return q * p;
}