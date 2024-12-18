// CS 1101 - Day 02 - Interactive Videos - Exercises Set 05

/*
Question
========

Write a C program that takes an integer input between 1 and 7 and prints the corresponding day of the week (1 for Sunday and 2 for Monday and etc)
using a "switch" statement. If the number is outside this range, print "Invalid input".

*/

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n===================================================================");
    printf("\nUsing Switch Statement to Print Day of the Week Based on User Input");
    printf("\n===================================================================\n\n");

    // Declaring the Variables

    int number;

    // Request Data From User

label1:
    printf("Enter a number from 1 to 7 : ");
    scanf("%d", &number);

    // Use the switch statement

    switch (number)
    {
    case 1:
        printf("The First Day of The Week is Monday!\n");
        break;
    case 2:
        printf("The Second Day of The Week is Tuesday!\n");
        break;
    case 3:
        printf("The Third Day of The Week is Wednesday!\n");
        break;
    case 4:
        printf("The Fourth Day of The Week is Thursday!\n");
        break;
    case 5:
        printf("The Fifth Day of The Week is Friday!\n");
        break;
    case 6:
        printf("The Sixth Day of The Week is Saturday!\n");
        break;
    case 7:
        printf("The Seventh Day of The Week is Sunday!\n");
        break;
    default:
        printf("Invalid Input! Please enter a number from 1 to 7.\n\n");
        goto label1;
    }

    return 0;
}
