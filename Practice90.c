// CS 1101 - Day 04 - Exercise 19

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n============================");
    printf("\nFactorial Number Calculation");
    printf("\n============================\n\n");

    // Variable Declaration

    long long i, number;
    long long factorial = 1;

    // Request Data From User

label1:
    printf("Enter any integer that is greater than or equal to zero and less than or equal to 20 : ");
    scanf("%lld", &number);

    // Validate the Input

    if (number < 0)
    {
        printf("Invalid Input! Enter an integer which is greater than or equal to zero\n\n");
        goto label1;
    }

    // Check the Limit that the programme will run smoothly

    if(number > 20){printf("Invalid input! This programme calculates the factorial of numbers from 0 to 20 only.\n\n");
        goto label1;}

    // Calculate the Factorial Number

    for (i = number; i > 0; i--)
    {
        factorial *= i;
    }

    printf("The factorial of %lld : %lld\n", number, factorial);

    return 0;
}