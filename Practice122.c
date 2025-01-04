// CS1101 - Day 06 - Exercise 05 - rand() Function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable Declaration
    int i, x;

    // Seed Generation
    srand(time(NULL)); // Current Time in Seconds used as seed

    printf("\nMaximum Random Number : %d\n", RAND_MAX); // RAND_MAX will give maximum number will it generate

    // Printing 10 random integers based on current time
    for (i = 0; i < 10; i++)
    {
        x = rand(); // Generates a random number
        printf("%d\n", x);
    }

    return 0;
}
