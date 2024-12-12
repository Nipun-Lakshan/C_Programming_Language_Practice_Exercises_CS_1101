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

    printf("\n");

    for (int i = 0; i < number_of_stars; i++)
    {
        for (int j = (number_of_stars-(i+1)); j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    /*
       *
      ***
     *****
    *******

    */
    return 0;
}