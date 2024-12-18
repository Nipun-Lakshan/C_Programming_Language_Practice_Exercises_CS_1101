// CS 1101 - Day 02 - Interactive Videos - Exercises Set 04

#include <stdio.h>

int main()

{

    // Exercise 01

    printf("\n===========");
    printf("\nExercise 01");
    printf("\n===========\n\n");

    // Variable Declaration

    int x = 20;
    int y = 16;
    int m = 20;
    int n = 16;

    // Prefix Modes in Increment and Decrement

    printf("X : %d, Y : %d\n", x, y); // Before
    y = ++x;
    printf("X : %d, Y : %d\n\n", x, y); // After

    printf("X : %d, Y : %d\n", x, y); // Before
    y = --x;
    printf("X : %d, Y : %d\n\n", x, y); // After

    printf("X : %d, Y : %d\n", x, y); // Before
    y = x++;
    printf("X : %d, Y : %d\n\n", x, y); // After

    printf("X : %d, Y : %d\n", x, y); // Before
    y = x--;
    printf("X : %d, Y : %d\n", x, y); // After

   // Exercise 02

    return 0;
}
