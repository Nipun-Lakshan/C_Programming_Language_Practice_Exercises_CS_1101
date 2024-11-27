#include <stdio.h>
int main()
{
    int x = 6, y;
    y = x % 3;
    printf("\n6 %% 3 -> %d\n", y);
    y = x % 4;
    printf("\n6 %% 4 -> %d\n", y);
    y = x % 5;
    printf("\n6 %% 5 -> %d\n", y);
    return 0;
}