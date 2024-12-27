// CS 1101 - Day 05 - Exercises - Frequency of Each Element in an Array

#include <stdio.h>

int main()
{
    // Variable Declaration
    int i;     // Outer Loop Index
    int j;     // Inner Loop Index
    int N;     // Array Size
    int count; // Counting the Occurrences

    // Header String Formatting
    printf("\n=====================================");
    printf("\nFrequency of Each Element in an Array");
    printf("\n=====================================\n\n");

    // Array Declaration
    int array[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size
    N = sizeof(array) / sizeof(array[0]);

    // Print Array
    printf("Original Array : [");
    for (i = 0; i < N; i++)
    {
        printf("%d", array[i]);
        (N - 1 != i) ? printf(", ") : printf("");
    }
    printf("]\n\n");

    // Array to track visited elements
    int visited[N];
    for (i = 0; i < N; i++)
    {
        visited[i] = 0; // Initialize all elements as not visited
    }

    // Calculate the frequency of each element
    for (i = 0; i < N; i++)
    {
        if (visited[i] == 1) // Skip already counted elements
            continue;
        count = 1; // Count the current element
        for (j = i + 1; j < N; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                visited[j] = 1; // Mark duplicates as visited
            }
        }

        // Print it
        
        if (array[i] < 10)
        {
            printf("         %d : %d\n", array[i], count);
        }
        else if (array[i] < 100)
        {
            printf("        %d : %d\n", array[i], count);
        }
        else if (array[i] < 1000)
        {
            printf("       %d : %d\n", array[i], count);
        }
        else if (array[i] < 10000)
        {
            printf("      %d : %d\n", array[i], count);
        }
        else if (array[i] < 100000)
        {
            printf("     %d : %d\n", array[i], count);
        }
        else if (array[i] < 1000000)
        {
            printf("    %d : %d\n", array[i], count);
        }
        else if (array[i] < 10000000)
        {
            printf("   %d : %d\n", array[i], count);
        }
        else if (array[i] < 100000000)
        {
            printf("  %d : %d\n", array[i], count);
        }
        else if (array[i] < 100000000)
        {
            printf("%d : %d\n", array[i], count);
        }
    }
    return 0;
}