// CS 1101 - Break, Continue & Return Statements

#include <stdio.h> // Library Printf() & Scanf()

int main()
{

    // Variable Declaration
    int i;      // Outer Loop's Index
    int number; // User Input

    // Print Even Numbers
    printf("\n");
    while (1)
    {
        printf("Enter a Number : ");
        scanf("%d", &number);
        if (number < 0)
        {
            printf("The break command has been initiated.\n");
            break;
        }
        if (number % 2 != 0)
        {
            continue;
        }
        printf("%d\n\n", number);
    }

    return 0;
}