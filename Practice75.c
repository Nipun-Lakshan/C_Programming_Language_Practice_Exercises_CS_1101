// CS1101 - Day 04 - Exercise 08

#include <stdio.h>

int main()

{

    // Declaring and Initializing Variables

    int number_of_stars;

    // Header String Formatting

    printf("\n===========================");
    printf("\nPrinting Stars in a Pattern");
    printf("\n===========================\n\n");

    // Request Data from the user

    printf("Enter the number of lines you want to go in the pattern : ");
    scanf("%d", &number_of_stars);

    // Print the Line using for Loop

    if (number_of_stars <= 0)
    {
        printf("Error Input! Please input an positive interger starting from 1\n");
    }
    else
    {
        printf("\n");
        for (int i = 1; i <= number_of_stars; i++)
        {
            for (int j = (number_of_stars - (i)); j >= 1; j--)
            {
                printf(" ");
            }
            for (int k = 1; k <= ((2 * i) - 1); k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}