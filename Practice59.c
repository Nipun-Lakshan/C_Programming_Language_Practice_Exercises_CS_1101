// Swapping Numbers

#include <stdio.h>

int main()

{

    // Declaring two variables

    float num1;
    float num2;

    // Requesting the values for num1 and num2 from user

    printf("\nEnter a value for num1 : ");
    scanf("%f", &num1);
    printf("Enter a value for num2 : ");
    scanf("%f", &num2);

    // Swapping the Values of the variables

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Print the Result

    printf("\nSwapped Value for num1 : %.2f", num1);
    printf("\nSwapped Value for num2 : %.2f\n", num2);

    return 0;
}