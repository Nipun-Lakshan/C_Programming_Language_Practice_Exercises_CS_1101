// CS1101 - Day 03 - Exercise 08

#include <stdio.h>

int main()

{

    printf("\n======================================\n");

    float weight = 0.0;
    float height = 0.0;

    printf("Enter your weight in Kg :- ");
    scanf("%f", &weight);

    printf("Enter your height in m  :- ");
    scanf("%f", &height);

    float bmi = (weight) / (height * height);

    printf("BMI Value :- %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Your BMI Category :- Underweight");
    }
    else if (bmi < 25)
    {
        printf("Your BMI Category :- Normal");
    }
    else if (bmi < 30)
    {
        printf("Your BMI Category :- Overweight");
    }
    else
    {
        printf("Your BMI Category :- Obese");
    }

    printf("\n======================================\n");

    return 0;
}