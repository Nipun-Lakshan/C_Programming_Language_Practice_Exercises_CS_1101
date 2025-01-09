// CS 1101 - Day 07 - Exercise 04

#include <stdio.h>

// Function Declaration
void displayUser(int userNo);

int main(void)
{
    // Calling the Functions
    displayUser(1);
    displayUser(2);
    return 0;
}

// Function Declaration with Body
void displayUser(int userNo)
{
    if (userNo == 1)
    {
        printf("\nName    : W.M.M.A. Vikum Bandara");
        printf("\nEmail   : vikumbandara@gmail.com");
        printf("\nAddress : No. 23, Maharagama, Nugegoda\n");
    }
    else if (userNo == 2)
    {
        printf("\nName    : Hiran Jayaweera");
        printf("\nEmail   : hiran@phys.cmb.ac.lk");
        printf("\nAddress : Department of Phyics - UOC\n");
    }
    else
    {
        printf("\nInvalid User Number! Try again.\n");
    }
}