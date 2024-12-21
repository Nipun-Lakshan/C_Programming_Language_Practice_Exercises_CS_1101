/* Linear Search - Finding the Largest Element in a Given Integer Array */

#include <stdio.h>

int main()

{

    // Variable Declaration

    

    // Header String Formatting

    printf("\n====================================================");
    printf("\n");
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

    //

    return 0;
}