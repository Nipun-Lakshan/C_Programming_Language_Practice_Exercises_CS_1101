// Discount Calculator

#include <stdio.h>

int main()
{

    // Variable Declaration

    float total_amount_before_discount;
    float discount_rate;
    float total_amount_after_discount;

    // Header String Formatting

    printf("\n===================");
    printf("\nDiscount Calculator");
    printf("\n===================\n\n");

    // Request Input from the User

    printf("Enter the total bill value before discount    : Rs. ");
    scanf("%f", &total_amount_before_discount);

    // Calculate the Discount Rate

    if (total_amount_before_discount <= 2000)
    {
        discount_rate = 1;
    }

    else if (total_amount_before_discount <= 3000)
    {
        discount_rate = 0.05;
    }

    else if (total_amount_before_discount > 3000)
    {
        discount_rate = 0.1;
    }

    // Calculate the Total Bill Value After Discount

    total_amount_after_discount = (total_amount_before_discount - (total_amount_before_discount * discount_rate));

    // Print the Result

    printf("The received discount rate for the bill       : %.2f%%\n", discount_rate == 1 ? 0.00 : (discount_rate * 100));
    printf("The received discount amount for the bill     : Rs. %.2f\n", total_amount_after_discount == 0 ? 0.00 : (total_amount_before_discount * discount_rate));
    printf("The total bill value after the discount       : Rs. %.2f\n\n", total_amount_after_discount == 0 ? total_amount_before_discount : total_amount_after_discount);

    // Footer String Formatting

    printf("================================================================\n");

    return 0;
}