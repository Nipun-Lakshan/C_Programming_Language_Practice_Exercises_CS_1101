// CS 1101 - Day 07 - Exercise 06

#include <stdio.h>
#include <math.h>

// Function Declarations
float distance(float x, float y);
float getSquare(float num);

int main(void)
{
    // Variable Declaration
    float x, y, distance1;

    // Header String Formatting
    printf("\n========");
    printf("\nDistance");
    printf("\n========\n\n");

    // Request Data From User
    printf("Enter the coordinate point (x, y)    : ");
    scanf("(%f, %f)", &x, &y);

    // Function Calling with Print
    distance1 = distance(x, y);
    printf("Distance to (%.2f, %.2f) from origin : %.2f\n", x, y, distance1);
}

// Function to Find Distance
float distance(float x, float y)
{
    // Variable Declaration
    float distance;
    float temp1;
    float temp2;

    // Calculate and Return
    temp1 = getSquare(x);
    temp2 = getSquare(y);
    distance = sqrt(temp1 + temp2);
    return distance;
}

// Function to Find Square
float getSquare(float num)
{
    return (num * num);
}