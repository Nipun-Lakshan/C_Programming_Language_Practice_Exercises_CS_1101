// CS 1101 - Day 04 - Exercise 13

#include <stdio.h>

int main()
{

    // Header String Formatting

    printf("\n========================");
    printf("\nDraw a Line Using a Loop");
    printf("\n========================\n\n");

    // Variable Declaration

    long long i;
    long long number_of_stars;

    // Request Data From User

    printf("Enter the number of stars you want to print in one line : ");
    scanf("%lld", &number_of_stars);
    printf("\n");

    // Print The Line of Stars

    for (i = 0; i < number_of_stars; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}