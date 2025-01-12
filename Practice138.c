// CS 1101 - Building a Bridge - Code 02

// Libraries
#include <stdio.h>
#include <math.h>

// Constants
#define BRIDGE_KM_COST 60 // Building Cost of Bridge For 1 Km in LKR Million
#define ROAD_KM_COST 40   // Building Cost of Road For 1 Km in LKR Million
#define WATER_WIDTH 6     // Width Of The Water
#define MAX_ROAD_LEN 8    // Max Length Of The Road

// Function Declaration
double getBridgeLen(double x);
void printDetails(double x, double bLen);

// Main Function
int main()
{
    // Variable Declaration
    double x;    // Point On The Road That Represents X = 0 to X = 8
    double bLen; // Length on Water

    // Header String Formatting
    printf("\n=================");
    printf("\nBuilding a Bridge");
    printf("\n=================\n\n");

    // Request Data From User & Check Whether it is a Numerical Value and within the range
    printf("The Length Of The X : ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }
    if (x < 0 || x > MAX_ROAD_LEN)
    {
        printf("Invalid Input! Please enter a value which is in [0, 8] range.\n");
        return 1;
    }

    // Call The Function To Calculate The Bridge Length
    bLen = getBridgeLen(x);

    // Call The Function to Calculate The Cost Based on User Input and Print It
    printDetails(x, bLen);

    return 0;
}

// Function 01
double getBridgeLen(double x)
{
    return (sqrt(pow(WATER_WIDTH, 2) + pow(x, 2)));
}

// Function 02
void printDetails(double x, double bLen)
{
    // Variable Declaration
    double cost; // Total Cost

    // Logic
    cost = (ROAD_KM_COST * (MAX_ROAD_LEN - x)) + (BRIDGE_KM_COST * bLen);
    printf("\nX: %.2lf Km, Bridge: %.2lf Km, Road: %.2lf Km, Cost: %.2lf M\n", x, bLen, (MAX_ROAD_LEN - x), cost);
}