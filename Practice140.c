// CS 1101 - Standard Library Functions

#include <stdio.h> // Library Of Header File with printf() and scanf()
#include <math.h>  // Library Of Header File with sqrt(), pow() and cbrt()
#include <ctype.h> // Library Of Header File with toupper() & tolower()

// Main Function
int main()
{
    // Variable Declarations
    int num1 = 25;
    int num2 = 27;
    int a = 5;
    int b = 2;
    char alpha = 'e';
    char beta = 'A';

    // Header String Formatting
    printf("\n===============================");
    printf("\nHeader File Library - <stdio.h>");
    printf("\n===============================\n\n");

    // Printf() Function
    printf("Hello World!\n");

    // Sub String Formatting - 01
    printf("\n==============================");
    printf("\nHeader File Library - <math.h>");
    printf("\n==============================\n\n");

    // sqrt() Function
    printf("Square Root of %d : 0%.2lf\n", num1, sqrt((double)num1));

    // cbrt() Function
    printf("Cube Root of %d   : 0%.2lf\n", num2, cbrt(num2));

    // pow() Function
    printf("%d to the Power %d  : %.2lf\n", a, b, pow(a, b));

    // Sub String Formatting - 02
    printf("\n===============================");
    printf("\nHeader File Library - <ctype.h>");
    printf("\n===============================\n\n");

    // toupper() Function
    printf("Upper Case of %c : %c\n", alpha, toupper(alpha));
    printf("Lower Case of %c : %c\n", beta, tolower(beta));

    return 0;
}