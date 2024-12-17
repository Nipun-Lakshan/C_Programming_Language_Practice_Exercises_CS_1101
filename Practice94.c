// CS 1101 - Day 02 - Interactive Videos - Exercises Set 03

#include <stdio.h>

int main()

{

    // Exercise 01

    printf("\n===========");
    printf("\nExercise 01");
    printf("\n===========\n\n");

    int x = 5;
    float y;

    y = x / 2;
    printf("5/2 -> %f\n", y); // 2.000000
    y = x / 3;
    printf("5/3 -> %f\n", y); // 1.000000
    y = x / 4;
    printf("5/4 -> %f\n", y); // 1.000000
    y = x / 2.0;
    printf("5/2.0 -> %f\n", y); // 2.500000

    // Exercise 02

    printf("\n===========");
    printf("\nExercise 02");
    printf("\n===========\n\n");

    x = 6;
    int z;

    z = x % 3;
    printf("5 %% 3 -> %d\n", z); // 0

    z = x % 4;
    printf("5 %% 4 -> %d\n", z); // 2

    z = x % 5;
    printf("5 %% 5 -> %d\n", z); // 1

    return 0;
}