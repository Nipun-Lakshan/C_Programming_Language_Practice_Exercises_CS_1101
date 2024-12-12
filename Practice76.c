// CS1101 - Day 04 - Exercise 09

#include <stdio.h>
#include <math.h>

int main()
{

    printf("\n");
    printf("===============================================");
    printf("\n");
    printf("Mean and Standard Deviation of a Set of Numbers");
    printf("\n");
    printf("===============================================");
    printf("\n");

    long long length = 0;
    printf("\n");
    printf("Enter the total number of elements in the set of numbers : ");
    scanf("%lld", &length);
    printf("\n");

    long long numbers[length];

    for (long long j = 0; j < length; j++)
    {
        printf("Enter Number %lld : ", (j + 1));
        scanf("%lld", &numbers[j]);
    }

    printf("\n");
    printf("========================================");
    printf("\n");
    printf("Calculate the Mean of the Set of Numbers");
    printf("\n");
    printf("========================================");
    printf("\n");
    printf("\n");

    long long sum = 0;

    for (long long i = 0; i < length; i++)

    {
        sum += numbers[i];
    }

    double mean = (double)sum / (double)length;
    printf("The Mean of the Set of Numbers :- %.2lf\n", mean);

    printf("\n");
    printf("======================================================");
    printf("\n");
    printf("Calculate the Standard Deviation of the Set of Numbers");
    printf("\n");
    printf("======================================================");
    printf("\n");
    printf("\n");

    double standard_deviation_01 = 0;

    for (long long k = 0; k < length; k++)

    {
        standard_deviation_01 += ((double)numbers[k] - mean) * ((double)numbers[k] - mean);
    }

    double standard_deviation_02 = standard_deviation_01 / (double)length;

    double standard_deviation = sqrt(standard_deviation_02);
    printf("The Standard Deviation of the Set of Numbers :- %.2lf\n", standard_deviation);

    return 0;
}