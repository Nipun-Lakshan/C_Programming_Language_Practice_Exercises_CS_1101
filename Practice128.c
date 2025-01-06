// CS 1101 - Day 07 - Exercise 01

#include <stdio.h>
#include <unistd.h> // For usleep() on Unix

void arrayBar(int a[], int size);
int getMaxIndex(int a[], int len);
void swap(int a[], int x, int y);
int main(void)
{
    int n, i;
    int myArray[] = {3, 8, 5, 12, 4, 17, 22, 12, 16, 25, 19, 10, 9, 6, 1};
    n = sizeof(myArray) / sizeof(myArray[0]);

    printf("\n[");
    for (i = 0; i < n; i++)
    {
        printf("%d", myArray[i]);
        if (i != (n - 1))
        {
            printf(", ");
        }
        else
        {
            printf("]\n");
        }
    }

    return 0;
}
