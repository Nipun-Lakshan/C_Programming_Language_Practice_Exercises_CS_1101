/* Week 05 - CS Videos - Practice 04 - Bubble Sort Algorithm */

#include <stdio.h>
#include <stdbool.h>

/* Function Declarations */

void ascending_order(long long array[], long long array_size);
void print_sorted_array(long long array[], long long array_size);
void descending_order(long long array[], long long array_size);

/* Main Method */

int main()

{

    // Header String Formatting

    printf("\n=====================");
    printf("\nBubble Sort Algorithm");
    printf("\n=====================\n\n");

    // Variable Declaration

    long long array_size;
    long long i;
    long long array_length;

    // Request Data from User

label1:
    printf("Enter the preferred array length (Integer value greater than 1) : ");
    scanf("%lld", &array_size);

    // Validation the Input

    if (array_size <= 1)
    {
        printf("Incorrect input! Please enter an integer that is larger than 1.\n\n");
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

    printf("Original Array : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n\n");

    // Call the Ascending Order Method

    ascending_order(array, array_size);

    // Call the Sorted Array Print Method

    print_sorted_array(array, array_size);
    printf("\n");

    // Call the Descending Order Method

    descending_order(array, array_size);

    // Call the Sorted Array Print Method

    print_sorted_array(array, array_size);
    printf("\n");

    // Find and Print Array Length

    array_length = sizeof(array) / sizeof(array[0]);
    printf("Array's Length : %lld\n", array_length);

    return 0;
}

// Ascending Order Method

void ascending_order(long long array[], long long array_size)

{

    // Variable Declaration

    long long i;
    long long j;
    long long temp;

    // Sort the Array - Ascending Order

    for (i = 0; i < array_size - 1; i++)
    {
        for (j = 0; j < array_size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Sorted Array Printing Method

void print_sorted_array(long long array[], long long array_size)
{

    // Variable Declaration

    long long i;

    // Print the Sorted Array

    printf("Sorted Array   : [");

    for (i = 0; i < array_size; i++)
    {
        printf("%lld, ", array[i]);
    }

    printf("\b\b]\n");
}

// Descending Order Method

void descending_order(long long array[], long long array_size)

{

    // Variable Declaration

    long long i;
    long long j;
    long long temp;

    // Sort the Array - Descending Order

    for (i = 0; i < array_size - 1; i++)
    {
        for (j = 0; j < array_size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
