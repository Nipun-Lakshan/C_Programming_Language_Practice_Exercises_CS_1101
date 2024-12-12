// CS1101 - Day 04 - Exercise 03

#include <stdio.h>

int main()

{

    // Declaring and Initializing Variables

    int number_of_stars;
    int i = 1;

    // Header String Formatting

    printf("\n========================");
    printf("\nPrinting Stars at a Line");
    printf("\n========================\n\n");

    // Request Data from the user

    printf("Enter the number of stars you want to print : ");
    scanf("%d", &number_of_stars);

    // Print the Line using While Loop

    while (i <= number_of_stars)
    {
        printf("*");
        i++;
    }
    
    //End the Programme

    printf("\n");

    return 0;

}