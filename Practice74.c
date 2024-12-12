// CS1101 - Day 04 - Exercise 07

#include <stdio.h>

int main()

{

    // Declaring and Initializing Variables

    long long number;
    long long factorial = 1;

    // Header String Formatting

    printf("\n=====================");
    printf("\nFactorial of a Number");
    printf("\n=====================\n\n");

    // Request Data from the user

    printf("Enter the number : ");
    scanf("%lld", &number);

    // Calculate the Factorial

    if (number < 0)
    {
        printf("Error! Input should be a natural number.\n");
    }

    else
    {
        for (int i = number; i > 0; i--)
        {
            factorial *= i;
        }

        // Print the Result

        printf("The Factorial of %lld : %lld\n", number, factorial);
    }

    return 0;
}