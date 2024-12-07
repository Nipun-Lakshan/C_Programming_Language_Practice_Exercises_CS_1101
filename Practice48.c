// CS1101 - Day 03 - Exercise 10

#include <stdio.h>  // Provides functions for input & output operations.
#include <time.h>   // Provides functions for handling and manipulating dates and times.
#include <stdlib.h> // Provides general utility functions such as abs() for absolute values.

int main()

{
    // String Formating

    printf("\n==================================================\n");
    printf("Domestic Electricity Tariff Calculator - Sri Lanka\n");
    printf("==================================================\n\n");

    // Declaring the Variables

    int last_month_meter_reading = 0;
    int this_month_meter_reading = 0;
    int no_of_units_consumed_per_month = 0;
    int consumption_category = 0; // 0 -> 0KWH - 60KWH; 1 -> Above 60KWH
    int bill = 0;
    float tax = 0;

    struct tm date1 = {0};
    struct tm date2 = {0};
    time_t time1;
    time_t time2;
    double difference_of_dates_in_seconds;
    int difference_of_days;

    int year1;
    int year2;
    int month1;
    int month2;
    int day1;
    int day2;

    int prorated_slab_30;
    int prorated_slab_60;
    int prorated_slab_90;
    int prorated_slab_120;
    int prorated_slab_180;

    float fixed_charge_for_the_month;
    float total_bill;

    // Requesting Meter Reading from Users with Reading Dates

    printf("Enter the Meter Reading for This month           :- ");
    scanf("%d", &this_month_meter_reading);
    printf("Enter Date (YYYY/MM/DD) for This Month's Reading :- ");
    scanf("%d/%d/%d", &year1, &month1, &day1);
    printf("Enter the Meter Reading for Last Month           :- ");
    scanf("%d", &last_month_meter_reading);
    printf("Enter Date (YYYY/MM/DD) for Last Month's Reading :- ");
    scanf("%d/%d/%d", &year2, &month2, &day2);
    printf("\n");

    // Calculate the Difference of Dates

    /* Set the First Date. */

    date1.tm_year = year1 - 1900; // tm_year is years since 1900
    date1.tm_mon = month1 - 1;    // tm_mon is 0-based (0 = January)
    date1.tm_mday = day1;

    /* Set the Second Date. */

    date2.tm_year = year2 - 1900;
    date2.tm_mon = month2 - 1;
    date2.tm_mday = day2;

    /* Convert Both Dates to time_t */

    time1 = mktime(&date1);
    time2 = mktime(&date2);

    /* Calculate the difference in seconds */
    difference_of_dates_in_seconds = difftime(time1, time2);

    /* Convert Difference into Days */
    difference_of_days = abs(difference_of_dates_in_seconds / (60 * 60 * 24));

    // Calculate the Consumption Category & No of Units

    no_of_units_consumed_per_month = this_month_meter_reading - last_month_meter_reading;

    if (difference_of_days < 30 && no_of_units_consumed_per_month > (60 * difference_of_days / 30))
    {
        consumption_category = 1;
    }

    else if (difference_of_days < 30 && no_of_units_consumed_per_month <= (60 * difference_of_days / 30))
    {
        consumption_category = 0;
    }

    else if (difference_of_days > 30 && no_of_units_consumed_per_month > (60 * difference_of_days / 30))
    {
        consumption_category = 1;
    }

    else if (difference_of_days > 30 && no_of_units_consumed_per_month <= (60 * difference_of_days / 30))
    {
        consumption_category = 0;
    }

    else if (difference_of_days == 30 && no_of_units_consumed_per_month > 60)
    {
        consumption_category = 1;
    }

    else if (difference_of_days == 30 && no_of_units_consumed_per_month <= 60)
    {
        consumption_category = 0;
    }

    printf("Total Units Consumed This Month                  :- %d\n", no_of_units_consumed_per_month);
    printf("The Domestic Category for the CEB Bill           :- ");

    if (consumption_category == 1)
    {
        printf("Category 02\n\n");
    }

    else
    {
        printf("Category 01\n\n");
    }

    // Calculate the Tariff for Category 01 & Category 02 when difference of Days is 30 & Fixed Charge.

    if (consumption_category == 1 && difference_of_days == 30)
    {
        if (no_of_units_consumed_per_month <= 90)
        {
            bill = 60 * 15;
            no_of_units_consumed_per_month -= 60;
            bill = bill + (no_of_units_consumed_per_month * 18);
            fixed_charge_for_the_month = 400;
        }

        else if (no_of_units_consumed_per_month <= 120)
        {
            bill = (60 * 15) + (30 * 18);
            no_of_units_consumed_per_month -= 90;
            bill = bill + (no_of_units_consumed_per_month * 30);
            fixed_charge_for_the_month = 1000;
        }

        else if (no_of_units_consumed_per_month <= 180)
        {
            bill = (60 * 15) + (30 * 18) + (30 * 30);
            no_of_units_consumed_per_month -= 120;
            bill = bill + (no_of_units_consumed_per_month * 42);
            fixed_charge_for_the_month = 1500;
        }

        else
        {
            bill = (60 * 15) + (30 * 18) + (30 * 30) + (60 * 42);
            no_of_units_consumed_per_month -= 180;
            bill = bill + (no_of_units_consumed_per_month * 65);
            fixed_charge_for_the_month = 2000;
        }
    }

    else if (consumption_category == 0 && difference_of_days == 30)
    {
        if (no_of_units_consumed_per_month <= 30)
        {
            bill = (no_of_units_consumed_per_month * 6);
            fixed_charge_for_the_month = 100;
        }

        else
        {
            bill = (30 * 6);
            no_of_units_consumed_per_month -= 30;
            bill = bill + (no_of_units_consumed_per_month * 9);
            fixed_charge_for_the_month = 250;
        }
    }

    // Calculate the Tariff for Category 01 & Category 02 when difference of Days is less than 30 or more than 30

    if (difference_of_days != 30)

    {

        prorated_slab_60 = (60 * difference_of_days) / 30;
        prorated_slab_90 = (90 * difference_of_days) / 30;
        prorated_slab_120 = (120 * difference_of_days) / 30;
        prorated_slab_180 = (180 * difference_of_days) / 30;

        if (consumption_category == 1)
        {

            if (no_of_units_consumed_per_month <= prorated_slab_90)
            {
                bill = prorated_slab_60 * 15;
                no_of_units_consumed_per_month -= prorated_slab_60;
                bill += (no_of_units_consumed_per_month * 18);
                fixed_charge_for_the_month = 400;
            }
            else if (no_of_units_consumed_per_month <= prorated_slab_120)
            {
                bill = (prorated_slab_60 * 15) + ((prorated_slab_90 - prorated_slab_60) * 18);
                no_of_units_consumed_per_month -= prorated_slab_90;
                bill += (no_of_units_consumed_per_month * 30);
                fixed_charge_for_the_month = 1000;
            }
            else if (no_of_units_consumed_per_month <= prorated_slab_180)
            {
                bill = (prorated_slab_60 * 15) + ((prorated_slab_90 - prorated_slab_60) * 18) +
                       ((prorated_slab_120 - prorated_slab_90) * 30);
                no_of_units_consumed_per_month -= prorated_slab_120;
                bill += (no_of_units_consumed_per_month * 42);
                fixed_charge_for_the_month = 1500;
            }
            else
            {
                bill = (prorated_slab_60 * 15) + ((prorated_slab_90 - prorated_slab_60) * 18) +
                       ((prorated_slab_120 - prorated_slab_90) * 30) +
                       ((prorated_slab_180 - prorated_slab_120) * 42);
                no_of_units_consumed_per_month -= prorated_slab_180;
                bill += (no_of_units_consumed_per_month * 65);
                fixed_charge_for_the_month = 2000;
            }
        }

        else if (consumption_category == 0)
        {

            prorated_slab_30 = (30 * 30) / difference_of_days;

            if (no_of_units_consumed_per_month <= prorated_slab_30)
            {
                bill = no_of_units_consumed_per_month * 6;
                fixed_charge_for_the_month = 100;
            }
            else
            {
                bill = (prorated_slab_30 * 6);
                no_of_units_consumed_per_month -= prorated_slab_30;
                bill += (no_of_units_consumed_per_month * 9);
                fixed_charge_for_the_month = 250;
            }
        }
    }

    // Calculate the Fixed Charge when Billing Days are over or equal to 54.

    if (difference_of_days >= 54)
    {
        fixed_charge_for_the_month *= ((float)difference_of_days / (float)30);
    }

    // Print the Bill Amount for the Month

    printf("The Bill Amount for This Month                   :- Rs. %d.00\n", bill);

    // Print the Fixed Charge for the Month

    printf("The Fixed Charge Amount for This Month           :- Rs. %.2f\n", fixed_charge_for_the_month);

    // Calculate the Tax Amount

    tax = (float)(bill + fixed_charge_for_the_month) * 0.025641;
    printf("The Tax Amount for This Month                    :- Rs. %.2f\n\n", tax);

    // Calculate the Total Bill Amount

    total_bill = (float)bill + (float)fixed_charge_for_the_month + tax;
    printf("The Total Bill Amount for This Month             :- Rs. %.2f\n", total_bill);

    return 0;
}