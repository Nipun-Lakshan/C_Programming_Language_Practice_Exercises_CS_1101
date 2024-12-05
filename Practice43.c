// CS1101 - Day 03 - Exercise 05

#include <stdio.h>

#include <math.h>

int main()

{
    printf("\n================================================================================\n");

    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;

    printf("Enter the points 1 and 2: ");
    scanf("(%f, %f), (%f, %f)", &x1, &y1, &x2, &y2);

    double distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The distance between points (%.2f, %.2f) and (%.2f, %.2f) is %.2lf", x1, y1, x2, y2, distance);

    printf("\n================================================================================\n");

    return 0;
}