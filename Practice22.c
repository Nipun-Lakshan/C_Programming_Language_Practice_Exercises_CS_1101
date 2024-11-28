// CS1101 - Day 02 - Exercise 12

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 15;

    int sum = a + b;
    printf("\na + b = ");
    printf("%d", sum);

    int sub = a - b;
    printf("\na - b = ");
    printf("%d", sub);

    int mul = a * b;
    printf("\na * b = ");
    printf("%d", mul);

    float div = a / b;
    printf("\na / b = ");
    printf("%.2f", div);

    printf("\n");

    return 0;
}