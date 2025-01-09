// CS 1101 - Day 07 - Exercise 03

#include <stdio.h>

// Function Declarations
void displayUser1(void);
void displayUser2(void);

int main()
{
    // Calling the Functions
    displayUser1();
    displayUser2();
    return 0;
}

// Function Declaration 01
void displayUser1(void)
{
    printf("\nName    : W.M.M.A. Vikum Bandara");
    printf("\nEmail   : vikumbandara@gmail.com");
    printf("\nAddress : No. 23, Maharagama, Nugegoda\n");
}

// Function Declaration 02
void displayUser2(void)
{
    printf("\nName    : Hiran Jayaweera");
    printf("\nEmail   : hiran@phys.cmb.ac.lk");
    printf("\nAddress : Department of Phyics - UOC\n");
}