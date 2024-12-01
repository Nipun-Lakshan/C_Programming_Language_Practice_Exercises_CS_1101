// CS1101 - Day 02 - Exercise 12

#include <stdio.h>
int main()
{
    float a = 10;
    float b = 15;

    float sum = a + b;
    printf("\na + b = ");
    printf("%.0f", sum);

    float sub = a - b;
    printf("\na - b = ");
    printf("%.0f", sub);

    float mul = a * b;
    printf("\na * b = ");
    printf("%.0f", mul);

    float div = a / b;
    printf("\na / b = ");
    printf("%.2f", div);

    printf("\n");

    return 0;
}