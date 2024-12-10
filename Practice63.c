// Assignment 02 - Demo on Code Runner - Interest Calculator

#include <stdio.h>

int main()
{

    float principal_amount, interest_percentage, years, interest;
    scanf("%f", &principal_amount);
    scanf("%f", &interest_percentage);
    scanf("%f", &years);

    interest = principal_amount * interest_percentage * years;

    printf("%.2f", interest);

    return 0;
}