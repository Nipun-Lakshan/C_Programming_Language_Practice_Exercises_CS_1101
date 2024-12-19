// CS1101 - Day 05 - Exercise 06

#include <stdio.h>

int main()

{
    // Variable Declaration

    int n, i;
    int user_input;
    int max;
    int position;

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

    // Find the Maximum Element

    max = myArray[0];
    for (i = 1; i < n; i++)
    {
        if (max < myArray[i])
        {
            max = myArray[i];
        }
    }

    // Search The Position of Max

    for (i = 0; i < n; i++)
    {
        if (max == myArray[i])
        {
            position = i;
            break;
        }
    }

    printf("The Position of the Largest Value of the Array : %d\n", (position + 1));

    return 0;
}