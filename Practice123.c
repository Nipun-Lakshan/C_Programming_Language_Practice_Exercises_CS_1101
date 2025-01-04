// CS1101 - Day 06 - Exercise 06 - rand() Function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable Declaration
    int i;
    double x;

    // Seed Generation
    srand(time(NULL)); // Current Time in Seconds used as seed

    printf("\nMaximum Random Number : %d\n", RAND_MAX); // RAND_MAX will give maximum number will it generate

    // Printing 10 random integers based on current time
    for (i = 0; i < 10; i++)
    {
        x = ((((double)rand() / RAND_MAX) * 2) - 1); // Generates a random number -1.0 to +1.0
        printf("%lf\n", x);
    }

    return 0;
}
