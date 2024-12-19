// CS1101 - Day 05 - Exercise 08

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

    printf("\n[");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }
    printf("\b\b]\n\n");

    printf("================================================================================\n\n");

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

    printf("\n================================================================================\n");

    return 0;
}
