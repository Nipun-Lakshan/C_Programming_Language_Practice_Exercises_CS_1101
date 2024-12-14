/* Week 05 - CS Videos - Practice 02 - Bubble Sort Algorithm */

#include <stdio.h>

int main()

{

    // Header String Formatting

    printf("\n=====================");
    printf("\nBubble Sort Algorithm");
    printf("\n=====================\n\n");

    // Variable Declaration

    long long array_size;
    long long i;
    long long j;
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

    printf("Array        : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n\n");

    // Sort the Algorithm - Ascending Order

    for (i = 0; i < array_size; i++)
    {
        for (j = 0; j < (array_size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                array[j] = array[j] + array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] = array[j] - array[j + 1];
            }
        }
    }

    // Print the Sorted Array

    printf("Sorted Array : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n\n");

    // Sort the Algorithm - Descending Order

    for (i = 0; i < array_size; i++)
    {
        for (j = 0; j < (array_size - 1); j++)
        {
            if (array[j] < array[j + 1])
            {
                array[j] = array[j] + array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] = array[j] - array[j + 1];
            }
        }
    }

    // Print the Sorted Array

    printf("Sorted Array : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n");

    return 0;
}