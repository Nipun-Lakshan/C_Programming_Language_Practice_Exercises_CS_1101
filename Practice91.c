// CS1101 - Day 04 - Exercise 20

#include <stdio.h>
#include <math.h>

int main()
{

    // Header String Formatting

    printf("\n===============================================");
    printf("\nMean and Standard Deviation of a Set of Numbers");
    printf("\n===============================================\n\n");

    // Declaration of Variables

    long long length;
    long long j;
    long long sum = 0;
    double mean;
    double standard_deviation_01;
    long long k;
    double standard_deviation_02;
    double standard_deviation;

    // Request Data From User

    printf("Enter the total number of elements in the set of numbers : ");
    scanf("%lld", &length);
    printf("\n");

    // Declaration of an Array

    long long numbers[length];

    // Request Data From User for the Array

    for (j = 0; j < length; j++)
    {
        if (j < 9)
        {
            printf("Enter Number 0%lld : ", (j + 1));
        }
        else if (j < 99)
        {
            printf("Enter Number %lld : ", (j + 1));
        }
        scanf("%lld", &numbers[j]);
    }

    // Sub Header String Formatting

    printf("\n========================================");
    printf("\nCalculate the Mean of the Set of Numbers");
    printf("\n========================================\n\n");

    // Calculate the Mean Value

    for (long long i = 0; i < length; i++)

    {
        sum += numbers[i];
    }

    mean = (double)sum / (double)length;
    printf("The Mean of the Set of Numbers :- %.2lf\n", mean);

    printf("\n======================================================");
    printf("\nCalculate the Standard Deviation of the Set of Numbers");
    printf("\n======================================================\n\n");

    for (k = 0; k < length; k++)
    {
        standard_deviation_01 += ((double)numbers[k] - mean) * ((double)numbers[k] - mean);
    }

    standard_deviation_02 = standard_deviation_01 / (double)length;

    standard_deviation = sqrt(standard_deviation_02);
    printf("The Standard Deviation of the Set of Numbers :- %.2lf\n", standard_deviation);

    return 0;
}