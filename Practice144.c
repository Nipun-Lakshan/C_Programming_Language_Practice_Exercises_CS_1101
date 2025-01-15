// CS 1101 - Break, Continue & Return Statements

#include <stdio.h> // Library Printf() & Scanf()

int main()
{

    // Variable Declaration
    int i;         // Outer Loop's Index
    double number; // User Input

    // Loop to Print From 1 to 5 - Code 01
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", (i + 1));
    }
    printf("\n");

    // Loop to Print From 1 to 5 - Code 02
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", (i + 1));
        break;
        printf("\nAfter Break\n");
    }
    printf("\n");

    // Loop to Print From 1 to 5 - Code 03
    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("\n%d", (i + 1));
    }
    printf("\n\n");

    // Loop to Input Numbers - Code 04
    while (1)
    {
        printf("Enter a Number : ");
        scanf("%lf", &number);
        if (number < 0)
        {
            printf("The break command has been initiated.\n");
            break;
        }
    }

    // Loop to Print From 1 to 5 - Code 05
    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
            ;
        }
        printf("\n%d", (i + 1));
    }
    printf("\n");

    return 0;
}