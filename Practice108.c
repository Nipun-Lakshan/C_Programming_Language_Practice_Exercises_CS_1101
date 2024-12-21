/* Average Mark Calculator */

#include <stdio.h>

int main()

{

    // Variable Declaration

    long number_of_subjects;
    long long i;
    long double sum_of_marks = 0;

    // Header String Formatting

    printf("\n=======================");
    printf("\nAverage Mark Calculator");
    printf("\n=======================\n\n");

    // Request Data From User

label1:
    printf("Enter the Number of Subjects : ");
    scanf("%lld", &number_of_subjects);

    // Validate the Input

    if (number_of_subjects < 2)
    {
        printf("Invalid input! The number of subjects should be greater than 1.\n\n");
        goto label1;
    }
    printf("\n");

    // Declaration of an Array

    float marks[number_of_subjects];

    // Request Subjects Marks from the User

    for (i = 0; i < number_of_subjects; i++)
    {
    label2:
        if (i < 9)
        {
            printf("Enter the mark for subject 0%lld : ", (i + 1));
        }
        else if (i < 99)
        {
            printf("Enter the mark for subject %lld : ", (i + 1));
        }
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid input! Please enter a mark between 0 and 100.\n\n");
            goto label2;
        }
    }
    printf("\n");

    // Calculate the Average Mark

    for (i = 0; i < number_of_subjects; i++)
    {
        sum_of_marks += (long double)marks[i];
    }

    long double average = sum_of_marks / (long double)number_of_subjects;

    // Print Mark

    printf("Average Marks Per Subject : %.2f\n", (float)average);
    return 0;
}