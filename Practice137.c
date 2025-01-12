// CS 1101 - Building a Bridge - Code 01

// Libraries
#include <stdio.h>

// Constants
#define BRIDGE_KM_COST 60 // Building Cost of Bridge For 1 Km in LKR Million
#define ROAD_KM_COST 40   // Building Cost of Road For 1 Km in LKR Million
#define WATER_WIDTH 6     // Width Of The Water
#define MAX_ROAD_LEN 8    // Max Length Of The Road

// Function Declaration
void printDetails(double rLen, double bLen);

// Main Function
int main()
{
    // Variable Declaration
    double rLen; // Length On Road
    double bLen; // Length on Water

    // Header String Formatting
    printf("\n=================");
    printf("\nBuilding a Bridge");
    printf("\n=================\n\n");

    // Request Data From User & Check Whether it is a Numerical Value and within the range
    printf("The Length Of The Road in Km   : ");
    if (scanf("%lf", &rLen) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }
    if (rLen < 0 || rLen > MAX_ROAD_LEN)
    {
        printf("Invalid Input! Please enter a value which is in [0, 8] range.\n");
        return 1;
    }

    printf("The Length Of The Bridge in Km : ");
    if (scanf("%lf", &bLen) != 1)
    {
        printf("Invalid Input! Please enter a numerical value.\n");
        return 1;
    }
    if (bLen < WATER_WIDTH || bLen > 10)
    {
        printf("Invalid Input! Please enter a value which is in [6, 10] range.\n");
        return 1;
    }

    // Call The Function to Calculate The Cost Based on User Input and Print It
    printDetails(rLen, bLen);

    return 0;
}

// Function
void printDetails(double rLen, double bLen)
{
    // Variable Declaration
    double cost; // Total Cost

    // Logic
    cost = (ROAD_KM_COST * rLen) + (BRIDGE_KM_COST * bLen);
    printf("\nBridge: %.2lf Km, Road: %.2lf Km, Cost: %.2lf M\n", bLen, rLen, cost);
}