// Average Mark Calculator

#include <stdio.h>

int main()

{
    /* Variable Declaration */

    int number_of_subjects;
    int i;
    float total_marks;
    float average;

    /* Header String Formatting */

    printf("\n=======================\n");
    printf("Average Mark Calculator\n");
    printf("=======================\n\n");

    /* Request Data From the User */

    printf("Enter the number of subjects : ");
    scanf("%d", &number_of_subjects);

    getchar(); // Consume the newline character from the buffer.

    printf("\n");

    /* Defining an array to store marks */

    float mark_for_the_subject[number_of_subjects];

    /* Request the mark for the each subject */

    for (i = 0; i < number_of_subjects; i++)
    {
        if (i <= 8)
        {
            printf("Enter mark for subject 0%d : ", (i + 1));
            scanf("%f", &mark_for_the_subject[i]);
        }

        else
        {
            printf("Enter mark for subject %d : ", (i + 1));
            scanf("%f", &mark_for_the_subject[i]);
        }
    }

    /* Calculate the average mark and print it */

    for (i = 0; i < number_of_subjects; i++)
    {
        total_marks += mark_for_the_subject[i];
    }

    average = total_marks / number_of_subjects;
    printf("\nAverage Mark for a Subject : %.2f", average);
    printf("\n");

    return 0;
}