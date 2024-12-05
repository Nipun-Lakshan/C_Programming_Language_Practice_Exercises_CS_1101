// CS1101 - Day 03 - Exercise 07

#include <stdio.h>

#include <math.h>

int main()

{
    printf("\n======================\n");

    float mark = 0;
    printf("Enter your mark: - ");
    scanf("%f", &mark);

    if (mark < 40)
    {
        printf("Your Grade is F!");
    }
    else if (mark < 60)
    {
        printf("Your Grade is C!");
    }
    else if (mark < 80)
    {
        printf("Your Grade is B!");
    }
    else
    {
        printf("Your Grade is A!");
    }

    printf("\n======================\n");

    return 0;
}