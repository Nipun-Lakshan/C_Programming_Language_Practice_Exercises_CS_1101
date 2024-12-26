// CS 1101 - Day 05 - Exercises - Finding the Maximum Element of an Array

#include <stdio.h>

int main()

{
    // Variable Declaration
    int n, i;
    int max_index;
    int max_value;

    // Array Declaration
    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size
    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print the Array
    printf("\nArray of Elements : [");
    for (i = 0; i < n; i++)
    {
        printf("%d", myArray[i]);
        (n - 1 != i) ? printf(", ") : printf("");
    }
    printf("]\n\n");

    // Find the Maximum Element Position
    max_index = 0;
    max_value = myArray[0];
    for (i = 1; i < n; i++)
    {
        if (max_value < myArray[i])
        {
            max_value = myArray[i];
            max_index = i;
        }
    }

    // Print the Maximum Value in Array
    printf("The largest value is %d.\n", max_value);
    printf("The largest value of the array is at position %d.\n", (max_index + 1));

    return 0;
}