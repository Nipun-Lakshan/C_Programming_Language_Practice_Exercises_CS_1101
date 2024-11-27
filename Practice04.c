#include <stdio.h>
int main()
{
    float c = 2000.00; // Capital Amount
    float r = 8.5;     // Rate of Interest per year
    int t = 2;         // Time in Years
    float interest = (c * r * t) / 100;
    printf("\n====================");
    printf("\nInterest Calculation");
    printf("\n====================\n");
    printf("\nCapital Amount          :- %4.2f", c);
    printf("\nRate of Interest        :-    %1.2f", r);
    printf("\nTime in Years           :-       %d\n", t);
    printf("\nCalculation of Interest :-  %5.2f", interest);
    printf("\n\n==================================");
    return 0;
}