// Circle Calculations

#define PI 3.14159265359
#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n");
    puts("===================");
    puts("Circle Calculations");
    puts("===================");
    printf("\n");

    // Variables Declaration

    float radius;
    float circumference;
    float area;

    // Getting Input from the User for radius

    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    // Calculating Circumference and Area of the Circle

    circumference = (2 * PI * radius);
    area = (PI * radius * radius);

    // Print radius, circumference and area of the circle

    printf("\n");
    printf("Radius of the circle : %.2f cm", radius);
    printf("\n");
    printf("Circumference        : %.2f cm", circumference);
    printf("\n");
    printf("Area                 : %.2f cmˆ2", area);
    printf("\n");

    return 0;
}