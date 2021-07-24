// Write a program to write a string in file
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    FILE *fp;

    fp = fopen("file_write_string.txt", "w");
    if (fp == NULL)
    {
        printf("\nfile cant be opened\n");
        return 0;
    }
    printf("enter character by character (* to terminate)\n");
    while (1)
    {
        ch = getche();
        if (ch == '*')
            break;
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}
