#include <stdio.h>
int main()
{
    printf("\n");
    printf("=============================");
    printf("\n");
    printf("Pass / Fail Grade Calculation");
    printf("\n");
    printf("=============================");
    printf("\n\n");
    printf("Enter the marks for Assignment 01     :- ");
    float mark01 = 0;
    scanf("%f", &mark01);
    printf("Enter the marks for Assignment 02     :- ");
    float mark02 = 0;
    scanf("%f", &mark02);
    printf("Enter the marks for Assignment 03     :- ");
    float mark03 = 0;
    scanf("%f", &mark03);
    printf("Enter the marks for Assignment 04     :- ");
    float mark04 = 0;
    scanf("%f", &mark04);
    printf("\n");
    float average = (mark01 + mark02 + mark03 + mark04) / 4;
    printf("Average Mark for the Four Assignments :- %.2f", average);
    printf("\n\n");
    if (average >= 40)
    {
        printf("Result :- Pass");
    }
    else
    {
        printf("Result :- Fail");
    }
    printf("\n==============================================\n");
    return 0;
}