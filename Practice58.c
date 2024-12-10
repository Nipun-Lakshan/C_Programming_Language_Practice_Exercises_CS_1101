// Largest Number from three inputs

#include <stdio.h>

int main()
{

    // Header String Formatting

    printf("\n===============\n");
    printf("Largest Number\n");
    printf("===============\n\n");

    // Declaring Variables

    float num1, num2, num3, max;

    // Requesting the values for num1, num2, and num3 from the user

    printf("Enter number 01: ");
    scanf("%f", &num1);
    printf("Enter number 02: ");
    scanf("%f", &num2);
    printf("Enter number 03: ");
    scanf("%f", &num3);

    printf("The input numbers are %.2f, %.2f, and %.2f\n", num1, num2, num3);

    // Check if all numbers are equal

    if (num1 == num2 && num2 == num3)
    {

        printf("The inserted three numbers are equal!\n");
    }
    else
    {

        // Determine the largest number

        if (num1 > num2)
        {
            max = num1;
        }
        else
        {
            max = num2;
        }

        if (num3 > max)
        {
            max = num3;
        }

        printf("Of the three, the largest is %.2f\n", max);
    }

    return 0;
}
