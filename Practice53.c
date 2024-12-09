// About Char Data Type

#include <stdio.h>

int main()

{
    // Learning Basics

    char ch1 = 'A';
    char ch2 = '8';
    char ch3 = '!';
    char ch4 = 70;
    char ch5 = 65;

    printf("\n");

    printf("%c ", ch1);
    printf("%c ", ch2);
    printf("%c ", ch3);
    printf("%c ", ch4);
    printf("%c ", ch5);

    printf("\n\n");

    // Print ASCII Table

    for (int character = 0; character <= 255; character++)
    {
        printf("%d ---> %c\t", character, character);
    }

    printf("\n");

    ch4 = ch4 + 5;
    printf("%c\n", ch4);
    char symbol = 234;
    printf("The resistance is 25.8%c.\n", symbol);

    return 0;

    return 0;
}
