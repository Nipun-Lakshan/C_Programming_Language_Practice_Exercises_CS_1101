// Assignment 03 - Demo on Code Runner - Area & Circumference Calculator of a Circle

#include <stdio.h>

int main()
{

    float area, circumference, radius;
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("%.2f\n", circumference);
    printf("%.2f", area);

    return 0;
}