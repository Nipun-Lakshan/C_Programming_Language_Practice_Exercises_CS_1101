#include <stdio.h>
int main()
{
    printf("\nEnter any positive integer: ");
    int number = 0;
    scanf("%d", &number);
    if (number > 0)
    {
        int temp = number;
        long long sum = 0;
        while (number != 0)
        {
            sum += number;
            number--;
        }
        printf("The sum of natural numbers up to %d: %lld\n", temp, sum);
    }
    else
    {
        printf("Wrong Input!");
    }
    return 0;
}