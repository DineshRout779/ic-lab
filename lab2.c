/*
Write a program which reads a set of marks in an examination, count the number of pass marks,
number of fail marks, percentage of pass and fail.
*/

#include<stdio.h>

int main()
{
    int n, i, marks[100], pass_count = 0, fail_count = 0;
    float pass_perc, fail_perc;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n;i++) {
        printf("\nEnter mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n;i++) {

        if (marks[i] >= 33) {
            printf("passed");
            pass_count++;
        }
        else {
            printf("failed");
            fail_count++;
        }
    }

    pass_perc = ((float)pass_count / n);
    fail_perc = ((float)fail_count / n);

    printf("\nThe number of students passed: %d", pass_count);
    printf("\nThe number of students failed: %d", fail_count);

    printf("\nThe percentage of students passed: %lf", pass_perc);
    printf("\nThe percentage of students failed: %lf", fail_perc);

    return 0;
}