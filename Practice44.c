// CS1101 - Day 03 - Exercise 06

#include <stdio.h>

#include <math.h>

int main()

{
    printf("\n================================================================================\n");

    double x1 = -1;
    double y1 = 2;

    double x2 = 0;
    double y2 = 0;

    printf("Enter the coordinates of your location point: ");
    scanf("(%lf, %lf)", &x2, &y2);

    double radius = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    radius > 8 ? printf("You are safe range!") : printf("You are not in safe range!");

    printf("\n================================================================================\n");

    return 0;
}