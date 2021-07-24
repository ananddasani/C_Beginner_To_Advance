//Read five persons height and weight and count the number of person having height
//greater than 170 and weight less than 50,
#include <stdio.h>
#include <conio.h>

int main()
{
    int person, count = 0;
    float height, weight;

    for (person = 0; person < 5; person++)
    {
        printf("\nenter heigth of person %d: ", person + 1);
        scanf("%f", &height);
        printf("\nenter weight of person %d: ", person + 1);
        scanf("%f", &weight);

        if (height >= 170 && weight <= 50)
            count++;
    }
    printf("\n%d person having height >= 170 && weight <= 50\n", count);
    return 0;
}