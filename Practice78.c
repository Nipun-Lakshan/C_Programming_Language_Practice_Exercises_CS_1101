/* Week 05 - CS Videos - Practice 01 - Find the Largest Element in an Array */

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n====================================");
    printf("\nFind the Largest Element in an Array");
    printf("\n====================================\n\n");

    // Variable Declaration

    long long array_size;
    long long i;
    long long max;

    // Request Data from User

label1:
    printf("Enter the preferred array length (Integer value only) : ");
    scanf("%lld", &array_size);

    // Validation the Input

    if (array_size <= 0)
    {
        printf("Incorrect input! Please enter an integer that is larger than 0.\n\n");
        goto label1;
    }

    // Defining the Array

    long long array[array_size];

    // Request Data from the User for the Array

    printf("\n");

    for (i = 0; i < array_size; i++)
    {
        if (i <= 8)
        {
            printf("Enter number 0%lld : ", (i + 1));
        }

        else if (i <= 98)
        {
            printf("Enter number %lld : ", (i + 1));
        }

        scanf("%lld", &array[i]);
    }

    printf("\n");

    // Print the Array with Inserted Data

    printf("Array : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n\n");

    // Calculate the Largest Element
    
    max = array[0];

    for (i = 1; i < array_size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    // Print the Largest Element

    printf("The Largest Element of the Array : %lld\n", max);

    return 0;
}