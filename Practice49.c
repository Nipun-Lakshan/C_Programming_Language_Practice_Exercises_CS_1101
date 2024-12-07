// Week 04 - CS1101 - Practice Exercise 01

#include <stdio.h>

int main()

{

    // Method 01:- Print Numbers from 1 to 5.

    printf("\n=====================================\n");
    printf("Method 01:- Print Numbers from 1 to 5\n");
    printf("=====================================\n\n");

    printf("%d ", 1);
    printf("%d ", 2);
    printf("%d ", 3);
    printf("%d ", 4);
    printf("%d \n", 5);

    // Method 02:- Print Numbers from 1 to 5.

    printf("\n=====================================\n");
    printf("Method 02:- Print Numbers from 1 to 5\n");
    printf("=====================================\n\n");

    int num = 1;

    while (num <= 5)
    {
        printf("%d ", num);
        num++;
    }

    printf("\n");

    // Method 03:- Print Numbers from 1 to 100.

    printf("\n=======================================\n");
    printf("Method 03:- Print Numbers from 1 to 100\n");
    printf("=======================================\n\n");

    int temp = 1;

    while (temp <= 100)
    {

        if (temp < 10)
        {
            printf("0%d ", temp);
        }

        else if (temp == 10)
        {
            printf("%d ", temp);
        }

        else
        {
            printf("%d ", temp);
        }

        temp++;

        ((temp - 1) % 10 == 0) ? printf("\n") : printf("");
    }

    // Method 04:- Print Numbers from 1 to 10.

    printf("\n======================================\n");
    printf("Method 04:- Print Numbers from 1 to 10\n");
    printf("======================================\n\n");

    for (int i = 1; i <= 10; i++)

    {

        if (i <= 9)
        {
            printf("0%d ", i);
        }

        if (i == 10)
        {
            printf("%d ", i);
        }

        if (i == 5)
        {
            printf("\n");
        }
    }

    printf("\n\n");

    // Method 05:- Print Numbers from 1 to 10.

    printf("======================================\n");
    printf("Method 05:- Print Numbers from 1 to 10\n");
    printf("======================================\n\n");

    for (int i = 0; i < 10; i += 2)

    {

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}