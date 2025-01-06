// CS1101 - Day 06 - Exercise 05 - rand() Function

#include <stdio.h>  // Give printf() and scanf() for the code
#include <stdlib.h> // Give rand() and srand() for the code
#include <time.h>   // Give time(NULL) function to take current time in seconds

int main()
{
    // Variable Declaration
    int i, x;

    // Seed Generation
    srand(time(NULL)); // Current Time in Seconds used as seed [Best seed to change the sequence every time.]

    // Print Maximum Random Number
    printf("\nMaximum Random Number : %d\n", RAND_MAX); // RAND_MAX will give maximum number will it generate

    // Printing 10 random integers based on current time
    for (i = 0; i < 10; i++)
    {
        x = rand(); // Generates a random number
        printf("%d\n", x);
    }

    // The value of the `RAND_MAX` constant is not the same across all computers, as it depends on the system and the C standard
    // library implementation. While the C standard ensures that `RAND_MAX` is at least 32767, its actual value may vary and can be
    // larger depending on the platform and compiler.

    return 0;
}
