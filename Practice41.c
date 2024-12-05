// CS1101 - Day 03 - Exercise 03

#include <stdio.h>

int main()

{

    printf("\n");
    printf("=====================================================\n");

    int num1 = 0;
    printf("Enter Number 01: ");
    scanf("%d", &num1);

    int num2 = 0;
    printf("Enter Number 02: ");
    scanf("%d", &num2);

    if (num1 >= num2)
    {
        printf("\nOf the two, the larger is %d\n", num1);
    }

    else
    {
        printf("\nOf the two, the larger is %d\n", num2);
    }

    printf("=====================================================\n");

    return 0;
}