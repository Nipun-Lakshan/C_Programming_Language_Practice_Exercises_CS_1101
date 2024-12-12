// CS1101 - Day 04 - Exercise 01

#include <stdio.h>

int main() {

    // Declaring and Initializing Variable and Integer

    int year, dayOfYear, rest, gender = 1, month = 0, day;
    int daysInMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Header String Formatting

    printf("\n=========================================");
    printf("\nExtracting DOB and Gender from NIC Number");
    printf("\n=========================================");

    // Request Data From the User

    printf("\n\nEnter your NIC number : ");
    scanf("%4d%3d%5d", &year, &dayOfYear, &rest);

    // Check the Gender

    if (dayOfYear > 500) {
        gender = 0;
        dayOfYear -= 500;
    }

    // Find Month and Date

    for (int i = 0; i < 12; i++) {
        if (dayOfYear <= daysInMonth[i]) {
            month = i + 1;
            day = dayOfYear;
            break;
        }
        dayOfYear -= daysInMonth[i];
    }

    // Print the result
    
    printf("Gender                : %s\n", gender ? "Male" : "Female");
    printf("DOB                   : %d/%d/%d\n", year, month, day);
    printf("\n=========================================");

    return 0;
}