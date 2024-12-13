// CS1101 - Day 04 - Exercise 10

#include <stdio.h>
#include <math.h>

int main()

{

    // Header String Formatting

    printf("\n================");
    printf("\nDraw a Rectangle");
    printf("\n================\n\n");

    // Variable Declaration

    long long height;
    long long length;

    // Request Input From User

    printf("Enter the length of the rectangle : ");
    scanf("%lld", &length);
    printf("Enter the height of the rectangle : ");
    scanf("%lld", &height);
    printf("\n");

    // Print the Rectangle using given data

    for (int i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < height; i++)
    {
        printf("|");
        for (int j = 0; j < (length - 2); j++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    for (int i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}