// CS 1101 - Day 05 - Exercises - Sorting an Array with Bubble Sort

#include <stdio.h>

void ascending_order(long long array[], long long N)
{
    // Variable Declaration
    long long i;
    long long j;
    long long temp;
    int swapped;

    // Sort the Array - Ascending Order
    for (i = (N - 1); i >= 0; i--)
    {
        swapped = 0;
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void descending_order(long long array[], long long N)
{
    // Variable Declaration
    long long i;
    long long j;
    long long temp;
    int swapped;

    // Sort the Array - Descending Order
    for (i = (N - 1); i >= 0; i--)
    {
        swapped = 0;
        for (j = 0; j < i; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    // Variable Declaration
    long long i;     // Outer Loop Index
    long long j;     // Inner Loop Index
    long long N;     // Array Size
    long long count; // Counting the Occurrences

    // Header String Formatting
    printf("\n==============================");
    printf("\nSorting an Array - Bubble Sort");
    printf("\n==============================\n\n");

    // Array Declaration
    long long array[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size
    N = sizeof(array) / sizeof(array[0]);

    // Print Array
    printf("Original Array     : [");
    for (i = 0; i < N; i++)
    {
        printf("%d", array[i]);
        (N - 1 != i) ? printf(", ") : printf("");
    }
    printf("]\n\n");

    // Sort Array According to Ascending Order
    ascending_order(array, N);

    // Print Array
    printf("Ascending Ordered  : [");
    for (i = 0; i < N; i++)
    {
        printf("%lld", array[i]);
        (i == (N - 1)) ? printf("") : printf(", ");
    }
    printf("]\n\n");

    // Sort Array According to Descending Order
    descending_order(array, N);

    // Print Array
    printf("Descending Ordered : [");
    for (i = 0; i < N; i++)
    {
        printf("%lld", array[i]);
        (i == (N - 1)) ? printf("") : printf(", ");
    }
    printf("]\n");

    return 0;
}