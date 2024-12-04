// ax + b = 0

#include <stdio.h>

int main()

{

    printf("\n");
    printf("====================================");
    printf("\n");
    printf("Solving Linear Equation (ax + b = 0)");
    printf("\n");
    printf("====================================");
    printf("\n");
    printf("\n");

    printf("Enter the coefficient \"a\" for the equation (ax + b = 0) : ");
    int a = 0;
    scanf("%d", &a);
    printf("Enter the constant \"b\" for the equation (ax + b = 0)    : ");
    int b = 0;
    scanf("%d", &b);

    printf("\n");

    float result = -b / (float)a;
    printf("The value of x in the equation ax + b = 0               : %.2f", result);

    printf("\n");

    return 0;
}