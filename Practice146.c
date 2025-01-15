// CS 1101 - Programming Task with Continue, Break and Return

#include <stdio.h> // Library with printf() & scanf()

// Main Function
int main()
{
    // Variable Declaration
    long long number; // User Input

    // Print Negative Odd Numbers
    printf("\n");
    while (1)
    {
        printf("Enter a Number : ");
        scanf("%lld", &number);
        if (number < 0 && (number % 2) == 0)
        {
            printf("Negative Even.\n\n");
            continue;
        }
        if (number > 0)
        {
            printf("Positive Value.\n");
            break;
        }
        if (number == 0)
        {
            printf("0 is not positive or negative.\n\n");
        }
        if (number != 0)
        {
            printf("%lld\n\n", number);
        }
    }

    return 0;
}