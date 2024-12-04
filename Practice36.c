// Quadratic Equation Solver

#include <stdio.h>
#include <math.h>

int main()

{

    printf("\n");
    printf("=============================================");
    printf("\n");
    printf("Solving Quadratic Equation (ax² + bx + c = 0)");
    printf("\n");
    printf("=============================================");
    printf("\n");
    printf("\n");

    printf("Enter the coefficient \"a\" for the equation (ax² + bx + c = 0) : ");
    int a = 0;
    scanf("%d", &a);

    printf("Enter the coefficient \"b\" for the equation (ax² + bx + c = 0) : ");
    int b = 0;
    scanf("%d", &b);

    printf("Enter the constant \"c\" for the equation (ax² + bx + c = 0)    : ");
    int c = 0;
    scanf("%d", &c);

    printf("\n");

    float discriminant = (((float)b * (float)b) - (4 * (float)a * (float)c));

    if (discriminant < 0)

    {
        printf("The equation has no real roots!\n");
    }

    else

    {
        long double sqrt_discriminant = sqrt(discriminant);
        float answer1 = (-b + sqrt_discriminant) / (2 * a);
        float answer2 = (-b - sqrt_discriminant) / (2 * a);

        printf("The First  Root of the Equation : %.2f\n", answer1);
        printf("The Second Root of the Equation : %.2f\n", answer2);
    }

    return 0;
}