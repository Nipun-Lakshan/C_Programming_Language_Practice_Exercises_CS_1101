// CS1101 - Day 06 - Exercise 04 - LCG Algorithm

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable Declaration
    int i, a = 5, b = 13, x = 20, MAX_VAL = 201;

    // LCG Algorithm
    x = time(NULL); // Current Time in Seconds
    for (i = 0; i < 10; i++)
    {
        x = (a * x + b) % MAX_VAL;
        printf("\n%d", (x - 100)); // Generate Numbers From -100 to 100.
        printf("\n");
    }

    return 0;
}
