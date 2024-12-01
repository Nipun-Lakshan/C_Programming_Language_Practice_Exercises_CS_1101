#include <stdio.h>

int main()
{
    printf("\nEnter any number : ");
    int number = 0;
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is positive number!\n", number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number!\n", number);
    }
    else
    {
        printf("The entered number is zero!\n");
    }
    return 0;
}