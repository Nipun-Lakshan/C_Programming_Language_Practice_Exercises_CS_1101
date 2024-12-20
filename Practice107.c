/* Star Pattern Printing - Extra Exercise */

#include <stdio.h>

int main()

{

    // Header String Printing

    printf("\n========================================");
    printf("\nHollow Square Star Pattern with Diagonal");
    printf("\n========================================\n\n");

    // Variable Declaration

    long long number_of_rows;
    long long i;
    long long k;
    long long m;
    long long j = 1;
    long long temp;  // To Store Number of Rows
    int is_even = 0; // 1 -> Even, 0 -> Odd
    long long half_rows;
    long long temp3 = 3;
    int series = 0;

    // Array Initialization

    int series_array[100];

    // Array Declaration

    for (i = 5; i < 100; i += 2)
    {
        series_array[i + 2] = series;
        series += 2;
    }

    // Request Data From User

label1:
    printf("Enter the odd number of rows you want to print for the star pattern (Between 7 - 99): ");
    scanf("%lld", &number_of_rows);

    // Validation the Input

    if (number_of_rows < 7 || number_of_rows > 99)
    {
        printf("Invalid input! Please enter a value within the range.\n\n");
        goto label1;
    }

    if (number_of_rows % 2 == 0)
    {
        printf("Invalid input! Please enter a odd value within the range.\n\n");
        goto label1;
    }
    printf("\n");

    // Check Whether Number is Even or Odd

    if (number_of_rows % 2 == 0)
    {
        is_even = 1;
    }
    else
    {
        temp = number_of_rows + series_array[number_of_rows];
    }

    // Step 01 - First Row Star Printing Logic

    for (i = 0; i < number_of_rows; i++)
    {
        printf("* ");
    }
    printf("\n");

    // Step 02 - First Half Star Printing Logic

    half_rows = (number_of_rows - 2) / 2;

    for (i = 0; i < half_rows; i++)
    {
        printf("*");
        for (k = 0; k < j; k++)
        {
            printf(" ");
        }
        printf("*");
        for (m = 0; m < temp; m++)
        {
            printf(" ");
        }
        printf("*");
        for (k = 0; k < j; k++)
        {
            printf(" ");
        }
        printf("*\n");
        j += 2;
        temp -= 4;
    }
    j -= 2;

    // Step 03 - Middle Row Star Printing Logic

    printf("*");
    for (i = 0; i < (number_of_rows - 2); i++)
    {
        printf(" ");
    }
    printf("*");
    for (i = 0; i < (number_of_rows - 2); i++)
    {
        printf(" ");
    }
    printf("*\n");

    // Step 04 - Second Half Star Printing Logic

    for (i = 0; i < half_rows; i++)
    {
        printf("*");
        for (k = 0; k < j; k++)
        {
            printf(" ");
        }
        printf("*");
        for (m = 0; m < temp3; m++)
        {
            printf(" ");
        }
        printf("*");
        for (k = 0; k < j; k++)
        {
            printf(" ");
        }
        printf("*\n");
        j -= 2;
        temp3 += 4;
    }

    // Step 05 - Last Row Star Printing Logic

    for (i = 0; i < number_of_rows; i++)
    {
        printf("* ");
    }
    printf("\n");

    return 0;
}
