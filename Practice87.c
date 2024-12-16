// CS 1101 - Day 04 - Exercise 16

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n===============================");
    printf("\nDraw a Star Pattern Using Loops");
    printf("\n===============================\n\n");

    // Variable Declaration

    long long i;
    long long j;
    long long number_of_stars;

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

    // Start Here

    return 0;
}