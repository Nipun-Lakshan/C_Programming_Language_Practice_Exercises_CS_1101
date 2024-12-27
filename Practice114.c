// CS 1101 - Day 05 - Exercises - Move the Maximum Value to the End

#include <stdio.h>

int main()

{
    // Variable Declaration
    int n;              // Array Size
    int i;              // Loop Index
    int max_index = -1; // Max Value's Index
    int max_value;      // Max Value
    int temp;           // Temporary Variable

    // Array Declaration
    int array[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size
    n = sizeof(array) / sizeof(array[0]);

    // Print the Array
    printf("\nOriginal Array : [");
    for (i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        (n - 1 != i) ? printf(", ") : printf("");
    }
    printf("]\n\n");

    // Find Maximum Element and Its Index
    max_value = array[i];
    for (i = 1; i < n; i++)
    {
        if (max_value < array[i])
        {
            max_value = array[i];
            max_index = i;
        }
    }

    // Swap the Maximum Element with Last Element
    temp = array[n - 1];
    array[n - 1] = max_value;
    array[max_index] = temp;

    // Print the Array
    printf("\nSwapped Array  : [");
    for (i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        (n - 1 != i) ? printf(", ") : printf("");
    }
    printf("]\n");

    return 0;
}