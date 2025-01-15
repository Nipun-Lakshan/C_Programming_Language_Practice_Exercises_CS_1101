// CS 1101 - Standard Library Functions - Programming Task

#include <stdio.h> // Library Of Header File with printf() and scanf()
#include <math.h>  // Library Of Header File with sqrt(), pow() and cbrt()

// Main Function
int main()
{
    // Variable Declarations
    double user_input;

    // Header String Formatting
    printf("\n===============================");
    printf("\nProgramming Task - Math Library");
    printf("\n===============================\n\n");

    // Request Input From User and Check Whether it is a Numerical Value
    printf("Enter a Positive Number : ");
    if (scanf("%lf", &user_input) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }

    // Check Whether Input is in Correct Range
    if (user_input <= 0)
    {
        printf("Invalid Input! Please enter a value which is greater than zero.\n");
        return 1;
    }

    // Find and Print The Square Root of User Input
    printf("\nSquare Root of %.2lf : %.2lf\n", user_input, sqrt(user_input));
    printf("%.2lf to The Power %.2lf : %.2lf\n", user_input, sqrt(user_input), pow(user_input, sqrt(user_input)));

    return 0;
}