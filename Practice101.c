// CS1101 - Day 05 - Exercise 05

#include <stdio.h>

int main()

{
    // Variable Declaration

    int n, i;
    int user_input;
    int search_element = 0; // 1 -> Found , 0 -> Not Found
    int position;

    // Array Declaration

    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};

    // Calculate Array Size

    n = sizeof(myArray) / sizeof(myArray[0]);

    // Print the Array

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", myArray[i]);
    }
    printf("\b\b \n");

    // Request a Input from User

    printf("Enter the value you want to search in the array : ");
    scanf("%d", &user_input);

    // Search an Element

    for (i = 0; i < n; i++)
    {
        if (user_input == myArray[i])
        {
            search_element = 1;
            position = i;
            break;
        }
    }

    // Print the Search Element

    if (search_element == 1)
    {
        printf("Value %d is available at the position %d.\n", user_input, (position + 1));
    }
    else
    {
        printf("Value %d is not available in the array.\n", user_input);
    }

    return 0;
}