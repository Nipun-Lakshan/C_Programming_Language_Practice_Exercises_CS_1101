/* Variables & Operations */

#include <stdio.h>

int main()

{

    // Declaring the Variables

    float a;
    float b;
    float addition;
    float subtraction;
    float multiplication;
    float division;

    // Request values for a and b from user

    printf("\nEnter value for a and b (Comma Separated) : ");
    scanf("%f, %f", &a, &b);

    // Calculate the values

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;

    // Print the result

    printf("\n%.2f + %.2f = %.2f", a, b, addition);
    printf("\n%.2f - %.2f = %.2f", a, b, subtraction);
    printf("\n%.2f * %.2f = %.2f", a, b, multiplication);
    printf("\n%.2f / %.2f = %.2f\n", a, b, division);

    return 0;
}