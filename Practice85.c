// CS 1101 - Day 04 - Exercise 14

#include <stdio.h>

int main()
{

    // Header String Formatting

    printf("\n=======================");
    printf("\nDraw a Box Using a Loop");
    printf("\n=======================\n\n");

    // Variable Declaration

    long long i;
    long long number_of_stars;

    // Request Data From User

label1:
    printf("Enter the number of stars you want to print for one side of the box : ");
    scanf("%lld", &number_of_stars);

    if (number_of_stars <= 0)
    {
        printf("Invalid Input! Enter an integer which is greater than 0\n\n");
        goto label1;
    }
    printf("\n");

    // Print The Box of Stars

    for (i = 1; i <= (number_of_stars * number_of_stars); i++)
    {
        printf("*");
        if (i % number_of_stars == 0)
        {
            printf("\n");
        }
    }

    return 0;
}