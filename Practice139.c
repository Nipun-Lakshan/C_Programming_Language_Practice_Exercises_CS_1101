// CS 1101 - Building a Bridge - Code 03

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
double printDetails(double x, double bLen);
double calculateCost(double x, double bLen);

// Main Function
int main()
{
    // Variable Declaration
    double x;                  // Case
    double bLen;               // Length on Water
    int i;                     // Loop Index
    int minimum_cost_index;    // Minimum Cost Index
    double minimum_cost = 700; // Minimum Cost
    double cost;               // Cost at Each Occurrence of The Loop

    // Header String Formatting
    printf("\n================================");
    printf("\nBuilding a Bridge - Minimum Cost");
    printf("\n================================\n\n");

    // Run a Loop From X = 0 to X = 8 in 20 Steps
    for (i = 0; i <= 20; i++)
    {
        // Assigning Value For X
        x = ((MAX_ROAD_LEN / (double)20) * (i));

        // Call The Function To Calculate The Bridge Length
        bLen = getBridgeLen(x);

        // Call The Function to Calculate The Cost
        cost = calculateCost(x, bLen);

        // Find Minimum Cost
        if (minimum_cost > cost)
        {
            minimum_cost_index = i;
            minimum_cost = cost;
        }
    }

    // Print Minimum Cost
    x = ((MAX_ROAD_LEN / (double)20) * (minimum_cost_index));
    bLen = getBridgeLen(x);
    cost = printDetails(x, bLen);

    return 0;
}

// Function 01
double getBridgeLen(double x)
{
    return (sqrt(pow(WATER_WIDTH, 2) + pow(x, 2)));
}

// Function 02
double printDetails(double x, double bLen)
{
    // Variable Declaration
    double cost; // Total Cost

    // Logic
    cost = (ROAD_KM_COST * (MAX_ROAD_LEN - x)) + (BRIDGE_KM_COST * bLen);
    if (bLen == 10)
    {
        printf("X: 0%.2lf Km, Bridge: %.2lf Km, Road: 0%.02lf Km, Cost: %.2lf M\n", x, bLen, (MAX_ROAD_LEN - x), cost);
    }
    else
    {
        printf("X: 0%.2lf Km, Bridge: 0%.2lf Km, Road: 0%.2lf Km, Cost: %.2lf M\n", x, bLen, (MAX_ROAD_LEN - x), cost);
    }
    return cost;
}

// Function 03
double calculateCost(double x, double bLen)
{
    return (ROAD_KM_COST * (MAX_ROAD_LEN - x)) + (BRIDGE_KM_COST * bLen);
}