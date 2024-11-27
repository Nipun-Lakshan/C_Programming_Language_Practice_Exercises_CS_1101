#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    puts("\nEnter First Number  :- ");
    scanf("%d", &num1);
    // scanf("%d", num1); -> Behaviour is unexpected!
    puts("Enter Second Number :- ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("\n%d is greater than %d.\n", num1, num2);
        if (num1 > 20)
        {
            printf("%d is greater than 20.\n", num1);
        }
        else if (num1 == 20)
        {
            printf("The first number is equal to 20.\n");
        }
        else
        {
            printf("%d is less than 20.\n", num1);
        }
    }
    else if (num1 == num2)
    {
        printf("\nFirst Number and Second Number is equal.\n");
    }
    else
    {
        printf("\n%d is greater than %d.\n", num2, num1);
    }
}