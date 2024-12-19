// CS1101 - Day 05 - Exercise 07

#include <stdio.h>

int main()

{

    // Variable Declaration

    int n, i;
    int max_position;
    int max;
    int temp;

    // Array Declaration

    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size

    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print the Array

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }
    printf("\b\b \n");

    // Find the Maximum Element Position

    max_position = 0;
    for (i = 1; i < n; i++)
    {
        if (max < myArray[i])
        {
            max = myArray[i];
            max_position = i;
        }
    }

    // Swap the Largest Element to Last Element

    temp = myArray[(n - 1)];
    myArray[n-1] = myArray[max_position];
    myArray[max_position] = temp;

    // Print the Array

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }
    printf("\b\b \n");

    return 0;
}