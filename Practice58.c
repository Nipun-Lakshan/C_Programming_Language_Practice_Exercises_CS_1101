// Smallest Number from Three inputs

#include <stdio.h>

int main()
{
    // Header String Formatting

    printf("\n===============\n");
    printf("Smallest Number\n");
    printf("===============\n\n");

    // Declaring Variables

    float num1;
    float num2;

    // Requesting the values for num1 and num2 from user

    printf("Enter number 01 : ");
    scanf("%f", &num1);
    printf("Enter number 02 : ");
    scanf("%f", &num2);

    // Calculate the Largest Number and Print it

    if (num1 > num2)
    {
        printf("\nOf the two, the larger is %.2f\n", num1);
    }

    else if (num1 == num2)
    {
        printf("\nThe inserted two numbers are equal!\n");
    }

    else
    {
        printf("\nOf the two, the larger is %.2f\n", num2);
    }

    return 0;
}