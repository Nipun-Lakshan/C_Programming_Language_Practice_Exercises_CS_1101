#include <stdio.h>

int main()

{

    int x, y;
    x = 20;
    printf("\nx -> %d\n", x); // 20
    y = ++x;
    printf("x -> %d\n", x); // 21
    printf("y -> %d\n", y); // 21

    x = 20;
    printf("\nx -> %d\n", x); // 20
    y = x++;
    printf("x -> %d\n", x); // 21
    printf("y -> %d\n", y); // 20

    x = 20;
    printf("\nx -> %d\n", x); // 20
    y = x--;
    printf("x -> %d\n", x); // 19
    printf("y -> %d\n", y); // 20

    x = 20;
    printf("\nx -> %d\n", x); // 20
    y = --x;
    printf("x -> %d\n", x); // 19
    printf("y -> %d\n", y); // 19

    return 0;
}