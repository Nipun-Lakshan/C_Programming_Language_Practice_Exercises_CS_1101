#define PI 3.14159
#include <stdio.h>
int main()
{
    float circumference = 0.0;
    float area = 0.0;
    float radius = 0.0;
    printf("\n=====================");
    printf("\nCircular Calculations");
    printf("\n=====================");
    printf("\n\nEnter the radius of the circle: ");
    scanf("%f", &radius);
    printf("\n");
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The Radius of the Circle        : %.2f", radius);
    printf("\nThe Circumference of the Circle : %.2f", circumference);
    printf("\nThe Area of The Circle          : %.2f\n", area);
}