// Safe or Not from a Volcano Eruption

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()

{

    // Header String Formatting

    printf("\n===================================");
    printf("\nSafe or Not from a Volcano Eruption");
    printf("\n===================================\n\n");

    // Declaring the variables

    float x1;
    float y1;
    float x2 = -1;
    float y2 = 2;
    double distance;

    // Requesting data from the user

    printf("Enter the coordinates of your location as (X1, Y1) : ");
    scanf("(%f, %f)", &x1, &y1);

    // Calculating the distance between two points

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    // Check Whether you location is safe or not and Print it

    if (distance > 8)

    {
        printf("You are in the safe range!\n");
        Beep(600, 300); // Beep at 750 Hz for 300 ms
    }

    else
    {
        printf("You are not in the safe range!\n");
        Beep(1200, 500); // Beep at 750 Hz for 300 ms
    }

    return 0;
}