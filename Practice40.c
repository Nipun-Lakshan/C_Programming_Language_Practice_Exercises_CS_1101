// CS1101 - Day 03 - Exercise 02

#include <stdio.h>

int main()

{

    float temperature = 1;
    printf("\n");
    puts("Enter the Temperature in Celsius  : - ");
    scanf("%f", &temperature);

    float Fahrenheit = 1;
    Fahrenheit = ((temperature * 9) / 5) + 32;
    printf("Entered Temperature in Fahrenheit : - \n%.1f\n", Fahrenheit);

    printf("\n%.2f°C = %.2f°F\n", temperature, Fahrenheit);

    return 0;
}