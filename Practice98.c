// CS1101 - Day 05 - Exercise 02

#include <stdio.h>

int main()

{

    // Variable Declaration

    float temperature;
    float Fahrenheit;
    char degree_symbol = 248;
    char user_input;

    // Header String Formatting

    printf("\n===============================");
    printf("\nCelsius to Fahrenheit Converter");
    printf("\n===============================\n\n");

    // Request Data From The User

label1:
    printf("Enter the Temperature in %cC  : ", degree_symbol);
    scanf("%f", &temperature);

    // Calculation Process

    Fahrenheit = ((temperature * 9) / 5) + 32;

    // Print the Result

    printf("%.2f%cC = %.2f%cF\n\n", temperature, degree_symbol, Fahrenheit, degree_symbol);

    // Convert this into Repetitive Programme

    getchar();
    label2 : printf("Do you want to do another conversion (y/n) : ");
    scanf("%c", &user_input);

    if (user_input == 'Y' || user_input == 'y')
    {
        printf("\n");
        goto label1;
    }

    else if (user_input == 'N' || user_input == 'n')
    {
        printf("Thank you! Come Again\n");
    }

    else
    {
        printf("Invalid Input! Please try again !\n");
        getchar();
        goto label2;
    }

    return 0;
}