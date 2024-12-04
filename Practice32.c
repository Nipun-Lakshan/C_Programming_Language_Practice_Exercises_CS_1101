#include <stdio.h>

int main()

{

    printf("\n==============================");
    printf("\nFind the Factorial of a Number");
    printf("\n==============================\n");

    printf("\nEnter a Positive Integer (including Zero)  : ");
    int number = 0;
    scanf("%d", &number);
    long long sum = 1;
    int temp = number;
    if (number >= 0)
    {
        while (number != 0)
        {
            sum *= number;
            number--;
        }
        printf("The factorial of %d                        : %lld\n", temp, sum);
    }
    else
    {
        printf("Wrong Input! Please try again.\n");
    }
    printf("====================================================\n");
    return 0;
}