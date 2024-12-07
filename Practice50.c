// Week 04 - CS1101 - Practice Exercise 02

#include <stdio.h>

int main()

{

    int age[5];

    int i = 1;

    printf("\n");

    while (i <= 5)

    {

        printf("Enter the age 0%d:- ", i);
        scanf("%d", &age[i]);
        i++;
    }

    printf("\nEntered Ages:- ");

    for (int j = 1; j <= 5; j++)
    {
        printf("%d ", age[j]);
    }

    printf("\n");

    return 0;
}