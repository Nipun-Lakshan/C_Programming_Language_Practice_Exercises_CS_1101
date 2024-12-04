#include <stdio.h>
int main()
{
    printf("\n");
    printf("==========================================\n");
    printf("Multiply Two Numbers via Repeated Addition\n");
    printf("==========================================\n\n");

    printf("Enter the First  Number :- ");
    int num1 = 0;
    scanf("%d", &num1);

    printf("Enter the Second Number :- ");
    int num2 = 0;
    scanf("%d", &num2);

    printf("\n");

    long long sum = 0;

    for (int i = 1; i <= num2; i++)
    {
        sum += num1;
    }

    printf("The Multiplication of %d x %d :- %lld\n", num1, num2, sum);

    return 0;
}