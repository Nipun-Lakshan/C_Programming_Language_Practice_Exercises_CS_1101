// CS 1101 - Day 06 - Exercise 07 - Finding PI - Part 02

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Header String Formatting
    printf("\n===================================");
    printf("\nSafe or Not from a Volcano Eruption");
    printf("\n===================================\n\n");

    // Variable Declaration
    double x_origin = 0;
    double y_origin = 0;
    double distance;
    int i;         // Loop's Index
    double temp;   // Temporary Variable
    int count = 0; // Unsafe Points

    // Arrays Declarations
    double x_coordinates[10];
    double y_coordinates[10];

    // Generate Random Numbers and Print it
    srand(time(NULL)); // Current Time in Seconds

    for (i = 0; i < 10; i++)
    {
        temp = ((double)rand() / RAND_MAX) * 2 - 1; // Generate From -1 to 1
        x_coordinates[i] = temp;
        temp = ((double)rand() / RAND_MAX) * 2 - 1; // Generate From -1 to 1
        y_coordinates[i] = temp;
    }

    // Print The Points
    printf("Coordinates : ");
    for (i = 0; i < 10; i++)
    {
        printf("(%.2lf, %.2lf)", x_coordinates[i], y_coordinates[i]);
        (i != 9) ? printf(", ") : printf("");
    }
    printf("\n\n");

    // Check Whether Safe or Not and Count the Unsafe Points
    for (i = 0; i < 10; i++)
    {
        distance = sqrt(pow((x_coordinates[i] - x_origin), 2) + pow((y_coordinates[i] - y_origin), 2));
        if (distance > 1)
        {
            printf("Safe Point   : (%.2lf, %.2lf)\n", x_coordinates[i], y_coordinates[i]);
            printf("Distance : %.2lf\n", distance);
        }

        else
        {
            printf("Unsafe Point : (%.2lf, %.2lf)\n", x_coordinates[i], y_coordinates[i]);
            printf("Distance : %.2lf\n", distance);
            count++;
        }
    }

    printf("\nUnsafe Points Count : %d\n", count);

    return 0;
}