// BMI Calculation

#include <stdio.h>

int main()

{

    // Variable Declaration

    float weight; // In Kg
    float height; // In m
    double bmi_value;

    // Header String Formatting

    printf("\n==============");
    printf("\nBMI Calculator");
    printf("\n==============\n\n");

    // Request height and weight from the user

    printf("Enter your weight (Kg) : ");
    scanf("%f", &weight);
    printf("Enter your height (m)  : ");
    scanf("%f", &height);

    // Calculate the BMI Value

    bmi_value = weight / (height * height);
    printf("\nYour BMI Value         : %.2f\n", bmi_value);

    // Select the BMI Category

    if (bmi_value < 18.5)
    {
        printf("Your BMI Category      : Underweight\n");
    }

    else if (bmi_value < 25)
    {
        printf("Your BMI Category      : Normal\n");
    }

    else if (bmi_value < 30)
    {
        printf("Your BMI Category      : Overweight\n");
    }

    else if (bmi_value >= 30)
    {
        printf("Your BMI Category      : Obese\n");
    }

    return 0;
}