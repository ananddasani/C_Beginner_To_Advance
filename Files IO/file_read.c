// program to display text of given file
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("file_test.txt", "r");
    if (fp == NULL)
    {
        printf("\nfile cant be opened: ");
        return 0;
    }

    while (ch != EOF)
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
    return 0;
}