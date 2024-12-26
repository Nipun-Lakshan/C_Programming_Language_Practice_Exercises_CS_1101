// CS1101 - Day 05 - Plotting the array with stars

#include <stdio.h>

int main()

{

    // Variable Declaration
    int n, i, j;

    // Array Declaration
    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size
    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print the Array
    printf("\nArray Elements : [");
    for (i = 0; i < n; i++)
    {
        printf("%d", myArray[i]);
        ((n - 1) != i) ? printf(", ") : printf("");
    }
    printf("]\n\n");

    // Header String Formatting
    printf("=========================\n");
    printf("Plot The Array With Stars\n");
    printf("=========================\n\n");

    // Print Stars
    for (i = 0; i < n; i++)
    {
        if (myArray[i] < 10)
        {
            printf(" %d : ", myArray[i]);
        }
        else if (myArray[i] < 100)
        {
            printf("%d : ", myArray[i]);
        }

        for (j = 0; j < myArray[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
