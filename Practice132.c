// CS 1101 - Day 07 - Exercise 05

#include <stdio.h>

// Function Declaration
int getSqaure(int val);

int main(void)
{
    // Calling the Functions with Print
    printf("\nValue : %d\n", getSqaure(6));
    return 0;
}

// Function for Find Square
int getSqaure(int val)
{
    int sqVal;
    sqVal = val * val;
    return sqVal;
}