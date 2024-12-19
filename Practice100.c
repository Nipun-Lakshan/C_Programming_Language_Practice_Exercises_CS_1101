// CS1101 - Day 05 - Exercise 04

#include <stdio.h>

int main()

{
    // Variable Declaration

    int n, i;

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

    return 0;
}