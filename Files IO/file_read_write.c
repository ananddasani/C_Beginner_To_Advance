/* A file named data contains series of integer numbers. Write a c program to read all
numbers from file and then write all odd numbers into file named “odd” and write all
even numbers into file named “even”. Display all the contents of these file on screen
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int num;

    printf("enter content of data file (-1 to terminate):\n");
    fp1 = fopen("file_read_write_data.txt", "w");

    for (;;)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        putw(num, fp1);
    }
    fclose(fp1);

    /* opening all the file and checking the condition */
    fp1 = fopen("file_read_write_data.txt", "r");
    fp2 = fopen("file_read_write_even.txt", "w");
    fp3 = fopen("file_read_write_odd.txt", "w");

    /* Read from DATA file */
    while ((num = getw(fp1)) != EOF)
    {
        if (num % 2 == 0)
            putw(num, fp2); /* write to even file */
        else
            putw(num, fp3); /* write to odd file */
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    fp2 = fopen("file_read_write_even.txt", "r");
    fp3 = fopen("file_read_write_odd.txt", "r");

    /* printing content of odd and even file */
    printf("\ncontent of odd file:\n");
    while ((num = getw(fp3)) != EOF)
        printf("%d  ", num);

    printf("\ncontent of even file:\n");
    while ((num = getw(fp2)) != EOF)
        printf("%d  ", num);

    fclose(fp2);
    fclose(fp3);
    return 0;
}