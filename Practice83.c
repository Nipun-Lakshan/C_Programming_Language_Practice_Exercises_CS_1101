// CS 1101 - Day 04 - Exercise 12

#include <stdio.h>  // printf(), scanf() functions
#include <string.h> // strlen() function

int main()

{

    // Header String Formatting

    printf("\n=========================================================================");
    printf("\nDisplay Months and Their Corresponding Number of Days in a Tabular Format");
    printf("\n=========================================================================\n\n");

    // Declaring and Initializing an Array

    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month_name[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Declaring Variables

    int year;
    int i;
    int j;
    int leap_year = 0; // Leap Year -> 1 / Not a Leap Year -> 0
    size_t length;

    // Request input from User

    printf("Enter any year : ");
    scanf("%d", &year);

    // Check Whether year is a leap year or not

    if (year % 4 == 0 && year % 100 != 0)
    {
        leap_year = 1;
    }

    else if (year % 400 == 0)
    {
        leap_year = 1;
    }

    if (leap_year == 1)
    {
        printf("%d is a leap year\n\n", year);
    }

    else
    {
        printf("%d is not a leap year\n\n", year);
    }

    // Print The Table

    printf("+--------------+----+\n");
    printf("|Month         |Days|\n");
    printf("+--------------+----+\n");

    for (i = 0; i < 12; i++)
    {
        if (i < 9)
        {
            printf("|0%d - ", (i + 1));
        }

        else
        {
            printf("|%d - ", (i + 1));
        }

        length = strlen(month_name[i]);
        printf("%s", month_name[i]);

        for (j = 0; j < (9 - length); j++)
        {
            printf(" ");
        }

        if (i == 1 && leap_year == 1)
        {
            printf("| %d |\n", (days_in_month[i] + 1));
        }

        else
        {
            printf("| %d |\n", (days_in_month[i]));
        }
    }
    printf("+--------------+----+\n");

    return 0;
}
