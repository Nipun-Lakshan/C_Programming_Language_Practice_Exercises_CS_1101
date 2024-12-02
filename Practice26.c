// Print Sum of Two Numbers
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("\nEnter the First  Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("\nThe Sum of %d and %d    : %d\n", num1, num2, sum);
    return 0;
}