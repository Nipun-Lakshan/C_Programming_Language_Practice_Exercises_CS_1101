// CS 1101 - Create Own Header File - Part 01

#include <stdio.h> // Library For printf() and scanf()

// Function Declaration
long long findFactorial(long long user_input, long long factorial);

// Main Function
int main()
{
    // Variable Declaration
    double user_input;
    long long factorial;

    // Header String Formatting
    printf("\n====================");
    printf("\nFactorial Calculator");
    printf("\n====================\n\n");

    // Request an Input From User & Check Whether it is a Numerical Value or not
    printf("Enter a Positive Integer : ");
    if (scanf("%lf", &user_input) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }

    // Check Whether Input is an Integer or not
    if (user_input - (int)user_input != 0)
    {
        printf("Invalid Input! Please enter an integer value.\n");
        return 1;
    }

    // Check Whether Input is in Correct Range
    if (user_input < 0)
    {
        printf("Invalid Input! Please enter an integer value which is greater than or equal to 0.\n");
        return 1;
    }

    // Check Whether Input is out of range
    if (user_input > 20)
    {
        printf("Invalid Input! Please enter an integer value which is less than or equal to 12.\n");
        return 1;
    }

    // Call The Recursive Function
    factorial = findFactorial((long long)user_input, 1);

    // Print The Result
    if (user_input < 10)
    {
        printf("Factorial of %d           : %lld\n", (int)user_input, factorial);
    }
    else
    {
        printf("Factorial of %d          : %lld\n", (int)user_input, factorial);
    }

    return 0;
}

// Factorial Calculating Function
long long findFactorial(long long user_input, long long factorial)
{
    if (user_input < 1)
    {
        return factorial;
    }
    factorial *= user_input;
    user_input--;
    return findFactorial(user_input, factorial);
}