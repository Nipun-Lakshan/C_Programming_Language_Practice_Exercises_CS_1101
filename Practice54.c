// Celsius to Fahrenheit Converter

#include <stdio.h>

int main()

{
    /* Declaring Variables */

    float temperature = 0;
    float Fahrenheit = 1;
    char degree_symbol = 248;

    /* Requesting a temperature from user */

    printf("\n");
    printf("Enter the Temperature in Celsius : ");
    scanf("%f", &temperature);

    /* Calculating Fahrenheit Temperature based on Input and Print the Value */

    Fahrenheit = ((temperature * 9) / 5) + 32;
    printf("%.2f %cC = %.2f %cF\n", temperature, degree_symbol, Fahrenheit, degree_symbol);

    return 0;
}