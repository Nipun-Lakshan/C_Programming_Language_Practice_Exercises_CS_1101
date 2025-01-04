// CS 1101 - Day 06 - Exercise 09 - Finding PI - Part 03

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Header String Formatting
    printf("\n=======================================================");
    printf("\nEstimating the Value of Pi Using the Monte Carlo Method");
    printf("\n=======================================================\n\n");

    // Variable Declaration
    double distance;
    int i;                       // Loop's Index
    double temp;                 // Temporary Variable
    int count = 0;               // Points Inside The Circle
    double PI_Value;             // Estimated Value
    int total_points = 10000000; // Total number of random points

    // Generate Random Numbers and Print it
    srand(time(NULL)); // Current Time in Seconds as the Seed

    // Run a Loop to Find the Result
    for (i = 0; i < total_points; i++)
    {
        // Generate random coordinates between -1 and 1
        double x = ((double)rand() / RAND_MAX) * 2 - 1;
        double y = ((double)rand() / RAND_MAX) * 2 - 1;

        // Calculate distance from origin
        distance = sqrt(x * x + y * y);

        // Check if the point lies inside the circle
        if (distance <= 1)
        {
            count++;
        }
    }

    // Calculate the estimated value of Pi
    PI_Value = ((4.0 * count) / total_points);
    printf("Total Points         : %d\n", total_points);
    printf("Inside Circle Points : %d\n", count);
    printf("Estimated PI Value   : %lf\n", PI_Value);

    return 0;
}