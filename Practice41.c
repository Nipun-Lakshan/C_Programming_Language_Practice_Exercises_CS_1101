// CS1101 - Day 03 - Exercise 03

#include <stdio.h>

int main()

{

    printf("\n");
    printf("=====================================================\n");

    float num1 = 0;
    printf("Enter Number 01: ");
    scanf("%f", &num1);

    float num2 = 0;
    printf("Enter Number 02: ");
    scanf("%f", &num2);

    if (num1 >= num2)
    {
        printf("\nOf the two, the larger is %.2f\n", num1);
    }

    else
    {
        printf("\nOf the two, the larger is %.2f\n", num2);
    }

    printf("=====================================================\n");

    return 0;
}