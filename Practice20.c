/*
Program : Celsius to Fahrenheit
Author  : Nipun Lakshan
Date    : 2024/11/28
Version : 1.0
*/

// CS1101 - Day 02 - Exercise 10

#include <stdio.h>
int main()
{
    float temparatureC = 37, temparatureF;
    temparatureF = temparatureC * 9 / 5 + 32;

    printf("%0.2f C = %0.2f F", temparatureC, temparatureF);
    return 0;
}