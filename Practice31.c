#include <stdio.h>

int main()

{

    printf("\n=========================================\n");
    printf("Input Three Numbers and Print the Largest");
    printf("\n=========================================\n\n");

    int num1 = 0;
    printf("Enter any integer number 01: ");
    scanf("%d", &num1);

    int num2 = 0;
    printf("Enter any integer number 02: ");
    scanf("%d", &num2);

    int num3 = 0;
    printf("Enter any integer number 03: ");
    scanf("%d", &num3);

    int result = num1 - num2;
    int temp = 0;

    if (result > 0)
    {
        temp = num1;
    }

    else if (result == 0)
    {
        temp = num1;
    }

    else
    {
        temp = num2;
    }

    if (temp < num3)
    {
        printf("\nThe Largest Number among the Three Numbers: %d\n", num3);
    }

    else if (temp == num3)
    {
        printf("\nThe Largest Number among the Three Numbers: %d\n", num3);
    }

    else
    {
        printf("\nThe Largest Number among the Three Numbers: %d\n", temp);
    }
    printf("================================================\n");
    return 0;
}