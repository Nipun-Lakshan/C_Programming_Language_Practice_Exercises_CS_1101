// CS 1101 - Day 04 - Exercise 11

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n==========================");
    printf("\nExtract the Date and Month");
    printf("\n==========================\n\n");

    // Variable Declaration

    int number_of_days;
    int i;
    int month;
    int day;

    // Array Declaration

    int days_in_a_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month_name[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Request Input from the User

label1:
    printf("Enter a number of days (1 - 366) : ");
    scanf("%d", &number_of_days);

    // Validate the Input

    if (number_of_days < 1 && number_of_days < 366)
    {
        printf("Invalid Input! Enter a Valid Input. (1 - 366)\n\n");
        goto label1;
    }

    printf("\n");

    // Calculate the Month and Date

    for (i = 0; i < 12; i++)
    {
        if (number_of_days <= days_in_a_month[i])
        {
            month = (i + 1);
            day = number_of_days;
            break;
        }
        number_of_days -= days_in_a_month[i];
    }

    // Print the Results

    printf("The month relevant to the value : %s\n", month_name[month - 1]);
    printf("The day relevant to the value   : %d\n", day);

    return 0;
}