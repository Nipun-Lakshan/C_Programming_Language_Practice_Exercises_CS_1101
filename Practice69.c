// CS1101 - Day 04 - Exercise 02

#include <stdio.h>

int main()
{

    // Declaring the Variables and Arrays

    int days_in_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Header String Formatting

    printf("\n===============");
    printf("\nDays in a Month");
    printf("\n===============\n\n");

    // Print the Header of the Table

    printf("+---------------+----+\n");
    printf("|Month\t\t|Days|\n");
    printf("+---------------+----+\n");

    // Run a Loop for Print Details and Ending the Printing Table

    for (int i = 0; i < 12; i++)

    {
        if (i <= 8)
        {
            printf("|Month %d\t|%d  |\n", (i + 1), days_in_month[i]);
        }

        else if (i <= 11)
        {
            printf("|Month %d\t|%d  |\n", (i + 1), days_in_month[i]);
        }
    }

    printf("+---------------+----+\n");

    return 0;
}