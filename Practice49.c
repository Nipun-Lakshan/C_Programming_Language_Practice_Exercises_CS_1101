#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    struct tm date1 = {0}, date2 = {0};
    time_t time1, time2;
    double seconds_diff;

    int year1, month1, day1, year2, month2, day2;

    // Read the first date
    printf("Enter the first date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &year1, &month1, &day1);

    // Read the second date
    printf("Enter the second date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &year2, &month2, &day2);

    // Set the first date
    date1.tm_year = year1 - 1900; // tm_year is years since 1900
    date1.tm_mon = month1 - 1;    // tm_mon is 0-based (0 = January)
    date1.tm_mday = day1;

    // Set the second date
    date2.tm_year = year2 - 1900;
    date2.tm_mon = month2 - 1;
    date2.tm_mday = day2;

    // Convert both dates to time_t
    time1 = mktime(&date1);
    time2 = mktime(&date2);

    // Calculate the difference in seconds
    seconds_diff = difftime(time1, time2);

    // Convert seconds difference to days
    int days_diff = seconds_diff / (60 * 60 * 24);

    // Output the result
    printf("Difference in days: %d\n", abs(days_diff));

    return 0;
}
