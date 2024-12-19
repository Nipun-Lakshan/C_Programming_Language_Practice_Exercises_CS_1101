// CS 1101 - Day 05 - Exercise 01

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n=============================================");
    printf("\nStoring Values in an Array and Accessing Them");
    printf("\n=============================================\n\n");

    // Declaring the Variables

    long long number_of_inputs;
    long long i;

    // Request Data From The User

    printf("Enter the number of inputs you want to store in an array : ");
    scanf("%lld", &number_of_inputs);
    printf("\n");

    // Declaring the Array

    long long numbers[number_of_inputs];

    // Request Data From The User for The Array

    for (i = 0; i < number_of_inputs; i++)
    {
        if (i < 9)
        {
            printf("Enter the value 0%lld : ", (i+1));
        }
        else if (i < 99)
        {
            printf("Enter the value %lld : ", (i+1));
        }
        scanf("%lld", &numbers[i]);
    }
    printf("\n");

    // Print Data From The User of The Array

    printf("Values of the array elements : ");
    for (i = 0; i < number_of_inputs; i++)
    {
        printf("%lld, ", numbers[i]);
    }
    printf("\b\b \n");

    return 0;
}
