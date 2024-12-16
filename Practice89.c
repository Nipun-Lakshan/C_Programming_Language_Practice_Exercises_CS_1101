// CS 1101 - Day 04 - Exercise 18

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n============================");
    printf("\nDraw a Rectangle Using Loops");
    printf("\n============================\n\n");

    // Variable Declaration

    long long i, j, k, length, height;

    // Request Data From User

label1:
    printf("Enter the length of the rectangle : ");
    scanf("%lld", &length);
    printf("Enter the height of the rectangle : ");
    scanf("%lld", &height);

    // Validate the Input

    if (length <= 0 || height <= 0)
    {
        printf("Invalid Input! Enter an integer which is greater than 0\n\n");
        goto label1;
    }

    // Validate the Requirement to be a Rectangle

    if (length <= height)
    {
        printf("Invalid input! The length value must be greater than the height value\n\n");
        goto label1;
    }
    printf("\n");

    // Print The Rectangle

    for (i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n");

    for (j = 0; j < height; j++)
    {
        printf("|");
        for (k = 0; k < (length - 2); k++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    for (i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}