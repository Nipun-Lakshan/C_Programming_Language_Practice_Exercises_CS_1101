#include <stdio.h>
int main()
{
    printf("\n======================================\nEnter any Integer: ");
    int number = 0;
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is an even number!", number);
    }
    else
    {
        printf("%d is an odd number!", number);
    }
    printf("\n======================================\n");
    return 0;
}