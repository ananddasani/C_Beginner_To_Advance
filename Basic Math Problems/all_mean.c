// Write a C program to calculate the average, geometric and harmonic mean of n elements

// arithmatic mean is nothing bu t the average only
// geometry mean is multiply all the “n” numbers together and take the “nth root of them
// harmonic mean is the reciprocal of arithmatic mean

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float n, count = 0.0, sum = 0.0, a_mean = 0.0, g_mean = 0.0, h_mean = 0.0, reciprocal = 0.0, product = 1.0;

    printf("\nenter elements to calculate all mean (-1 to exit): ");
    scanf("%f", &n);

    while (n != -1.0)
    {
        printf("\nenter the element: ");
        sum = sum + n;
        product = product * n;
        reciprocal = reciprocal + (1 / n);
        count++;
        scanf("%f", &n);
    }
    a_mean = sum / count;
    g_mean = pow(product, (1 / count));
    h_mean = count / reciprocal;

    printf("\naritnmatic_mean = %f", a_mean);
    printf("\ngeometry mean = %f", g_mean);
    printf("\nharmonic mean = %f\n", h_mean);

    return 0;
}
