// Assignment 01 - Demo on Code Runner - Calculate Area of a Rectangle

#include <stdio.h>

int main()
{

    float width, height, area;
    scanf("%f", &width);
    scanf("%f", &height);

    area = width * height;

    printf("%.2f", area);

    return 0;
}