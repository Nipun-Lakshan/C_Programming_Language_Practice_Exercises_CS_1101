// CS1101 - Day 04 - Exercise 04

#include <stdio.h>

int main()

{

    // Declaring and Initializing Variables

    int number_of_stars;
    int i = 1;

    // Header String Formatting

    printf("\n=======================");
    printf("\nPrinting Stars in Lines");
    printf("\n=======================\n\n");

    // Request Data from the user

    printf("Enter the number of stars you want to print in one line : ");
    scanf("%d", &number_of_stars);

    // Print the Line using for Loop

    printf("\n");

    for (i; i <= (number_of_stars * number_of_stars); i++)
    {
        printf("*");
        if (i % number_of_stars == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    // Print the Line using While Loop

    i = 1;

    while (i <= (number_of_stars * number_of_stars))

    {
        printf("*");
        if (i % number_of_stars == 0)
        {
            printf("\n");
        }
        i++;
    }
    
    return 0;
}