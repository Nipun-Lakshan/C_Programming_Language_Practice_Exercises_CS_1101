// Sum of Digits of a Number

#include <stdio.h>

int main()

{

    printf("\n");
    printf("=========================");
    printf("\n");
    printf("Sum of Digits of a Number");
    printf("\n");
    printf("=========================");
    printf("\n");
    printf("\n");

    printf("Enter an Integer :- ");
    long long number = 0;
    scanf("%lld", &number);

    long long temp = 0;
    long long sum = 0;

    if (number < 0)
    {
        temp = -number;
    }

    else
    {
        temp = number;
    }

    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    printf("\nSum of Digits of %lld :- %lld\n", number, sum);

    return 0;
}