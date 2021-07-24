//Write a program to calculate average and total of 5 students for 3 subjects (use nested for
//loops)
#include <stdio.h>
#include <conio.h>

int main()
{
    int student, subject,count = 0;
    float marks, sum, avg = 0;

    for (student = 0; student < 5; student++)
    {
        printf("\t\tstudent %d\n", student + 1);
        sum = count = 0;
        for (subject = 0; subject < 3; subject++)
        {
            printf("enter the marks of subject %d: ", subject + 1);
            scanf("%f", &marks);
            count++;
            sum = sum + marks;
        }
        avg = sum / count;
        printf("\ntotal marks of student:%d is %f\n",student + 1, sum);
        printf("average of student:%d is %f\n",student + 1, avg);
        printf("\n");
    }
    return 0;
}