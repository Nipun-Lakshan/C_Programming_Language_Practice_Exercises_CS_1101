#include <stdio.h>

int main()
{
    int x = 5;
    float y;
    y = x / 2;
    printf("\n5/2   -> %1.2f\n", y); // 2.00

    y = x / 3;
    printf("5/3   -> %1.2f\n", y); // 1.00

    y = x / 4;
    printf("5/4   -> %1.2f\n", y); // 1.00

    y = x / 2.0;
    printf("5/2.0 -> %1.2f\n", y); // 2.50
    printf("\a");

    return 0;
}