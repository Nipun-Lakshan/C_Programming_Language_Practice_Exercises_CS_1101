// CS 1101 - Day 07 - Exercise 07

// C Libraries
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Symbolic Variables
#define RADIUS 8

// Function Declarations
void headerStringPrinting();
double calculateDistance(double x1, double y1, double x2, double y2);
double getSquare();
bool isSafe(double distance);
void printSafeOrNotStatement(double distance);

// Main Function
int main()
{
    // Header String Formatting
    headerStringPrinting();

    // Variable Declaration
    double x1, y1, x2 = -1, y2 = 2;
    double distance;

    // Requesting data from the user
    printf("Enter the coordinates of your location as (X1, Y1) : ");
    scanf("(%lf, %lf)", &x1, &y1);

    // Calculating the distance between two points
    distance = calculateDistance(x1, y1, x2, y2);

    // Check Whether you location is safe or not and Print it
    printSafeOrNotStatement(distance);

    return 0;
}

// Functions
void headerStringPrinting()
{
    printf("\n===================================");
    printf("\nSafe or Not from a Volcano Eruption");
    printf("\n===================================\n\n");
}

double calculateDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(getSquare(x1 - x2) + getSquare(y1 - y2));
}

double getSquare(double num)
{
    return num * num;
}

bool isSafe(double distance)
{
    return distance > RADIUS;
}

void printSafeOrNotStatement(double distance)
{
    if (isSafe(distance))
    {
        printf("You are in the safe range!\n");
    }

    else
    {
        printf("You are not in the safe range!\n");
    }
}