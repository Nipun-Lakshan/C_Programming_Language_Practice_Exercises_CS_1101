// CS 1101 - Day 02 - Interactive Videos - Exercises Set 01

#include <stdio.h>

int main()

{
    // Exercise 01

    printf("\n===========");
    printf("\nExercise 01");
    printf("\n===========\n\n");

    printf("Hello World!\n");
    printf("This is our C course.\n");

    // Exercise 02

    printf("\n===========");
    printf("\nExercise 02");
    printf("\n===========\n\n");

    printf("To print special characters like \\, \?, \', \" and %% in C, escape sequences must be used appropriately.\n");
    printf("This is our C course :\tCS 1101.\a\n");
    printf("The null character in C is 0 and it is used as a string terminator - \"\\0\".\n");
    printf("This is backspace\b.\n");
    printf("This is an example to return carriage.\rreturn the cursor.\n");
    printf("Hello\vWorld\n");
    printf("Hello\fWorld\n");

    // Exercise 03 - Simple Interest Calculation

    printf("\n===========");
    printf("\nExercise 03");
    printf("\n===========\n\n");

    float principal_amount;
    float rate_of_interest;
    float time_period;
    float interest;

    printf("Enter the Principal Amount          : Rs. ");
    scanf("%f", &principal_amount);
    printf("Enter the Rate of Interest per Year : ");
    scanf("%f", &rate_of_interest);
    printf("Enter the Time Period (In Years)    : ");
    scanf("%f", &time_period);
    printf("\n");

    interest = (((principal_amount * rate_of_interest) / 100) * time_period);

    printf("The Total Interest at the End       : Rs. %.2f\n", interest);

    return 0;
}