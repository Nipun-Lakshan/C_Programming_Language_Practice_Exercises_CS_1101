// CS 1101 - Day 04 - Exercise 17

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n===============================");
    printf("\nDraw a Star Pattern Using Loops");
    printf("\n===============================\n\n");

    // Variable Declaration

    long long i, j, k, number_of_stars;

    // Request Data From User

label1:
    printf("Enter the height you want to print the star pattern in lines : ");
    scanf("%lld", &number_of_stars);

    if (number_of_stars <= 0)
    {
        printf("Invalid Input! Enter an integer which is greater than 0\n\n");
        goto label1;
    }
    printf("\n");

    // Print The Star Pattern

    for (i = 0; i < number_of_stars; i++)
    {
        if (number_of_stars == 1)
        {
            printf(" ");
        }
        for (j = (number_of_stars - 1); j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < (2 * (i + 1) - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}