// Distance Between Two Points

#include <stdio.h>
#include <math.h>

int main()

{
    // Header String Formatting

    printf("\n===========================");
    printf("\nDistance Between Two Points");
    printf("\n===========================\n\n");

    // Declaring the variables

    float x1;
    float x2;
    float y1;
    float y2;
    double distance;

    // Requesting data from the user

    printf("Enter the points 1 and 2 as (X1, Y1), (X2, Y2) : ");
    scanf("(%f, %f), (%f, %f)", &x1, &y1, &x2, &y2);

    // Calculating the distance between two points

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    // Print the Result
    printf("The distance between points (%.2f, %.2f) and (%.2f, %.2f) is %.2lf\n", x1, y1, x2, y2, distance);

    return 0;
}