// CS 1101 - Day 02 - Interactive Videos - Exercises Set 02

#include <stdio.h>
#include <stdbool.h>

int main()

{
    // Exercise 01

    printf("\n===========");
    printf("\nExercise 01");
    printf("\n===========\n\n");

    float pi = 3.14f;
    printf("Declaration and Initialization of Float Variable : float pi = %.2ff\n", pi);

    // Exercise 02

    printf("\n===========");
    printf("\nExercise 02");
    printf("\n===========\n\n");

    int x, y, z;
    x = -15;
    y = 23;
    z = 24.56;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z); // Only 24 will be print!

    // Exercise 03

    printf("\n===========");
    printf("\nExercise 03");
    printf("\n===========\n\n");

    _Bool isEven = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            isEven = 1;
        }
        if (isEven)
        {
            printf("%d ", i);
            isEven = 0;
        }
    }

    printf("\n");

    // Exercise 04

    printf("\n===========");
    printf("\nExercise 04");
    printf("\n===========\n\n");

    bool isEven1 = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            isEven1 = 1;
        }
        if (isEven1)
        {
            printf("%d ", i);
            isEven1 = 0;
        }
    }

    printf("\n");

    return 0;
}