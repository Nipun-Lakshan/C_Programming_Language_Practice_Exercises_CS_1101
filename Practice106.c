// CS1101 - Day 05 - Exercise 10

#include <stdio.h>

int main()

{

    // Variable Declaration

    int n, i;
    int max_position;
    int max;
    int temp;
    int j;

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
    printf("\b\b]\n");

    // Heap Sort

    for (j = n; j > 0; j--)

    {

        // Find the Maximum  Element

        max = myArray[0];
        max_position = 0;

        for (i = 1; i < j; i++)
        {
            if (max < myArray[i])
            {
                max = myArray[i];
                max_position = i;
            }
        }

        // Swap the Largest Element to Last Element

        temp = myArray[(j - 1)];
        myArray[(j - 1)] = myArray[max_position];
        myArray[max_position] = temp;

        // Print the Array

    printf("\n[");

    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }

    printf("\b\b]\n");
    }

    // Print the Array

    printf("\n[");

    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }

    printf("\b\b]\n\n");

    // Print Stars

    printf("================================================================================\n\n");

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