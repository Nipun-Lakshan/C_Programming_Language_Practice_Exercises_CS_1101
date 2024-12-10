// Grade Calculation

#include <stdio.h>

int main()

{
    // Variable Declaration

    float mark;

    // Request Mark from the User

    printf("\nEnter your mark : ");
    scanf("%f", &mark);

    // Calculate the Grade

    if (mark < 40)
    {
        printf("Your Grade      : F");
    }

    else if (mark < 60)
    {
        printf("Your Grade      : C");
    }

    else if (mark < 80)
    {
        printf("Your Grade      : B");
    }

    else if (mark <= 100)
    {
        printf("Your Grade      : A");
    }

    printf("\n");

    return 0;
}