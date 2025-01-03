/* Linear Search - Finding the Largest Element in a Given Integer Array */

#include <stdio.h>

int main()

{

    // Variable Declaration

    long long number_of_elements;
    long long i;
    long long max;
    long long max_index = 0;

    // Header String Formatting

    printf("\n====================================================");
    printf("\nFinding the Largest Element in a Given Integer Array");
    printf("\n====================================================\n\n");

    // Request Array Size From User

label1:
    printf("Enter the number of elements in the array : ");
    scanf("%lld", &number_of_elements);

    // Validate the Array Size Input

    if (number_of_elements < 1)
    {
        printf("Invalid input! Please enter an array size greater than 1.\n\n");
        goto label1;
    }
    printf("\n");

    // Declaration of the Array

    long long array[number_of_elements];

    // Request the Data From User for the Array

    for (i = 0; i < number_of_elements; i++)
    {
        if (i < 9)
        {
            printf("Enter number 0%lld : ", (i + 1));
        }
        else if (i < 99)
        {
            printf("Enter number %lld : ", (i + 1));
        }
        scanf("%lld", &array[i]);
    }
    printf("\n");

    // Print the Array

    printf("Array : [");
    for (i = 0; i < number_of_elements; i++)
    {
        printf("%lld", array[i]);
        (i == (number_of_elements - 1)) ? printf("") : printf(", ");
    }
    printf("]\n\n");

    // Find the Largest Element of an Array

    max = array[0];
    for (i = 1; i < number_of_elements; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            max_index = i;
        }
    }

    // Print the Result

    printf("The Largest Element of the Array : %lld\n", max);
    printf("The Largest Element's Position   : %lld\n", (max_index + 1));

    return 0;
}