// CS 1101 - Day 07 - Exercise 09

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
    long long i;                       // Loop's Index
    long count = 0;                    // Points Inside The Circle
    double PI_Value;                   // Estimated Value
    long long total_points = 100000000; // Total number of random points

    // Generate Random Numbers and Print it
    srand(time(NULL)); // Current Time in Seconds as the Seed

    // Run a Loop to Find the Result
    for (i = 0; i < total_points; i++)
    {
        // Generate random coordinates between -10 and 10
        double x = ((double)rand() / RAND_MAX) * 20 - 10;
        double y = ((double)rand() / RAND_MAX) * 20 - 10;

        // Calculate distance from origin
        distance = sqrt(x * x + y * y);

        // Check if the point lies inside the circle
        if (distance <= 10)
        {
            count++;
        }
    }

    // Calculate the estimated value of Pi
    PI_Value = ((4.0 * count) / total_points);
    printf("Total Points         : %lld\n", total_points);
    printf("Inside Circle Points : %lld\n", count);
    printf("Estimated PI Value   : %lf\n", PI_Value);

    return 0;
}