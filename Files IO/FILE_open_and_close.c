// program to demonstrate file open and close
#include <stdio.h>

int main()
{
    FILE *fp;
    int roll;
    char name[20];

    fp = fopen("FILE_STUDENT.txt", "w"); // opening file in write mode
    if (fp == NULL)
    {
        printf("File can't be opened :(\n");
        exit(1);
    }

    // writting data to the file
    printf("Enter roll number and name of the student :: ");
    scanf("%d %s", &roll, &name);       // asking user to enter the data
    fprintf(fp, "%d %s", &roll, &name); // writing data to the file

    // reading data from the file
    fscanf(fp, "%d %s", &roll, &name);                 // getting data from the file
    printf("\nRead data is :: %d , %s\n", roll, name); // printing the read data

    return 0;
}