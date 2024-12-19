// CS1101 - Day 05 - Exercise 03

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

    do
    {

        // Request Data From The User

        printf("Enter the Temperature in %cC  : ", degree_symbol);
        scanf("%f", &temperature);

        // Calculation Process

        Fahrenheit = ((temperature * 9) / 5) + 32;

        // Print the Result

        printf("%.2f%cC = %.2f%cF\n\n", temperature, degree_symbol, Fahrenheit, degree_symbol);

        // Check Whether Programme need to run again and again

        getchar();
        printf("Do you want to do another conversion (y/n) : ");
        scanf("%c", &user_input);
        printf("\n");
        getchar();

    } while (user_input == 'Y' || user_input == 'y');

    return 0;
}