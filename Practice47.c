// CS1101 - Day 03 - Exercise 09

#include <stdio.h>

int main()

{

    printf("\n");
    printf("=========================================\n");
    printf("Extracting DOB and Gender from NIC Number\n");
    printf("=========================================\n");
    printf("\n");

    int year = 0;      // First 4 digits of NIC
    int dayOfYear = 0; // Next 3 digits of NIC
    int rest = 0;      // Rest 7 digits
    int leap_year = 0; // Leap Year = 1, Not a Leap Year = 0
    int gender = 1;    // 0 - Female, 1 - Male
    int month = 0;     // 1 - 12 for January to December
    int day = 0;       // Date of the Month

    printf("Enter your NIC number :- "); // Take 12 Digits of the NIC
    scanf("%4d%3d%5d", &year, &dayOfYear, &rest);

    // Check Leap Year or Not

    if (year % 4 == 0 && year % 100 != 0)
    {
        leap_year = 1;
    }

    else if (year % 400 == 0)
    {
        leap_year = 1;
    }

    // Check Gender

    if (dayOfYear > 500)
    {
        gender = 0;
        dayOfYear -= 500;
    };

    if (dayOfYear <= 31)
    {
        month = 1;
        day = dayOfYear;
    }
    else if (dayOfYear <= 60)
    {
        month = 2;
        day = dayOfYear - 31;
    }
    else if (dayOfYear <= 91)
    {
        month = 3;
        day = dayOfYear - 60;
    }
    else if (dayOfYear <= 121)
    {
        month = 4;
        day = dayOfYear - 91;
    }
    else if (dayOfYear <= 152)
    {
        month = 5;
        day = dayOfYear - 121;
    }
    else if (dayOfYear <= 182)
    {
        month = 6;
        day = dayOfYear - 152;
    }
    else if (dayOfYear <= 213)
    {
        month = 7;
        day = dayOfYear - 182;
    }
    else if (dayOfYear <= 244)
    {
        month = 8;
        day = dayOfYear - 213;
    }
    else if (dayOfYear <= 274)
    {
        month = 9;
        day = dayOfYear - 244;
    }
    else if (dayOfYear <= 305)
    {
        month = 10;
        day = dayOfYear - 274;
    }
    else if (dayOfYear <= 335)
    {
        month = 11;
        day = dayOfYear - 305;
    }
    else
    {
        month = 12;
        day = dayOfYear - 335;
    }

    if (gender == 1)
    {
        printf("Gender                :- Male\n");
    }

    else if (gender == 0)
    {
        printf("Gender                :- Female\n");
    }

    printf("DOB                   :- %d/%d/%d\n", year, month, day);

    printf("=========================================\n");

    return 0;
}
