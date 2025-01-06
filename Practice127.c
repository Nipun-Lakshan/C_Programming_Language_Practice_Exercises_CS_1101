// CS 1101 - Day 06 - Exercise 10 - Functions

#include <stdio.h>

float add(float number1, float number2){ // Scope is add() Function
    return number1+number2;
}

int main()
{
    // Variable Declaration
    float sum; // Scope is Main Function

    // Logic and Call for the Function
    printf("\nFunction Test\n");
    sum = add(1.00, 2.00);
    printf("Sum = %f\n",sum);
    printf("Sum = %f\n", add(100.556, 456.9));
    return 0;
}