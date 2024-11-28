// CS1101 - Day 02 - Exercise 11

#define PI 3.14159265359
#include <stdio.h>
int main()
{
    printf("\n");
    puts("===================");
    puts("Circle Calculations");
    puts("===================");
    printf("\n");
    float radius;
    puts("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float circumference = (2 * PI * radius);
    float area = (PI * radius * radius);
    printf("\n");
    printf("Radius of the circle : %.2f cm", radius);
    printf("\n");
    printf("Circumference        : %.2f cm", circumference);
    printf("\n");
    printf("Area                 : %.2f cmˆ2", area);
    printf("\n");
    return 0;
}