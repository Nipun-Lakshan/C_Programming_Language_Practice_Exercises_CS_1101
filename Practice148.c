// CS 1101 - Day 08 - Exercise 02

/* Libraries */
#include <stdio.h>

/* Function Declarations */
void printArray(int myArray[], int n);

/* Main Function */
int main(void)
{
    // Variable Declaration
    int n, i;

    // Array Declaration
    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16, 25, 19, 10, 9, 6, 1};

    // Array Size Calculation
    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print Array
    printArray(myArray, n);

    return 0;
}

/* Functions */
void printArray(int myArray[], int n)
{ // n - Array Size

    // Variable Declaration
    int i; // Loop's Index

    // Print Array
    printf("\n[");
    for (i = 0; i < n; i++)
    {
        printf("%d", myArray[i]);
        if (i != (n - 1))
        {
            printf(", ");
        }
        else
        {
            printf("]\n");
        }
    }
}