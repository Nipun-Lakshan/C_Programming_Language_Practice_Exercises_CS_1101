// CS 1101 - Day 05 - Exercises - Counting Occurrences of an Element in an Array

#include <stdio.h>

int main()

{

    // Variable Declaration

    int n, i, user_input;
    int count = 0;

    // Array Declaration

    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size

    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print the Array

    printf("\nArray Elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", myArray[i]);
        ((n - 1) != i) ? printf(", ") : printf("");
    }
    printf("\n\n");

    // Request a Input from User

    printf("Enter a value to count its occurrences in the array : ");
    scanf("%d", &user_input);

    // Search an Element

    for (i = 0; i < n; i++)
    {
        if (user_input == myArray[i])
        {
            count++;
            printf("Value %d is available at the position %d.\n", user_input, (i + 1));
        }
    }

    // Print the Search Element

    if (count > 0)
    {
        printf("Value %d occurs %d times in the array.\n", user_input, count);
    }
    else
    {
        printf("Value %d is not available in the array.\n", user_input);
    }

    return 0;
}