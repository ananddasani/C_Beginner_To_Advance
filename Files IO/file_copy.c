// write a program to copy one file "a.txt" to other "b.txt"
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("file_test.txt", "r");
    if (fp1 == NULL)
    {
        printf("\nunable to open the file\n");
        return 0;
    }

    fp2 = fopen("file_copy.txt", "w");
    if (fp2 == NULL)
    {
        printf("\nunable to open the file\n");
        return 0;
    }

    printf("\nCOPYING...\n");
    while (1)
    {
        ch = fgetc(fp1);

        if (ch == EOF)
            break;

        fputc(ch, fp2);
        printf("%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}