#include <stdio.h>
int main()
{
    printf("\n");
    printf("==================================\n");
    printf("Calculate the area of a rectangle.\n");
    printf("==================================\n\n");
    float length = 0.0;
    float width = 0.0;
    printf("Enter the length of the rectangle (m):- ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle  (m):- ");
    scanf("%f", &width);
    float area = length * width;
    printf("\n");
    printf("The calculated area of the rectangle: ");
    printf("%.2f sqm", area);
    printf("\n");
    printf("===============================================");
    printf("\n");
    return 0;
}