// CS 1101 - Day 05 - Exercises - Use Heap Sort Algorithm for Sorting and Plotted the Array Using Stars

#include <stdio.h>

// Function to print an array
void print_array(int n, int array[])
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");
}

// Function to swap two elements
void swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

// Function to heapify a subtree rooted at index "i"
void heapify(int array[], int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    // Check if the left child is larger than the root
    if (left < n && array[left] > array[largest])
    {
        largest = left;
    }

    // Check if the right child is larger than the current largest
    if (right < n && array[right] > array[largest])
    {
        largest = right;
    }

    // If the largest element is not the root, swap and recursively heapify
    if (largest != i)
    {
        swap(&array[i], &array[largest]);
        heapify(array, n, largest);
    }
}

// Function to perform heap sort
void heap_sort(int n, int array[])
{
    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(array, n, i);
    }

    // Extract elements one by one from the heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move the current root to the end
        swap(&array[0], &array[i]);

        // Call max heapify on the reduced heap
        heapify(array, i, 0);
    }
}

int main()
{
    // Array & Variable Declaration
    int array[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};
    int n = sizeof(array) / sizeof(array[0]);
    int i;
    int j;

    // Header String Formatting

    printf("\n===================");
    printf("\nHeap Sort Algorithm");
    printf("\n===================\n\n");

    // Print the original array
    printf("Original Array : ");
    print_array(n, array);
    printf("\n");

    // Sub Header String Formatting
    printf("========================");
    printf("\nPlotted Array with Stars");
    printf("\n========================\n\n");

    // Print Stars
    for (i = 0; i < n; i++)
    {
        if (array[i] < 10)
        {
            printf(" %d : ", array[i]);
        }
        else if (array[i] < 100)
        {
            printf("%d : ", array[i]);
        }

        for (j = 0; j < array[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Perform heap sort
    heap_sort(n, array);

    // Print the sorted array
    printf("Sorted Array   : ");
    print_array(n, array);

    // Sub Header String Formatting
    printf("\n========================");
    printf("\nPlotted Array with Stars");
    printf("\n========================\n\n");

    // Print Stars
    for (i = 0; i < n; i++)
    {
        if (array[i] < 10)
        {
            printf(" %d : ", array[i]);
        }
        else if (array[i] < 100)
        {
            printf("%d : ", array[i]);
        }

        for (j = 0; j < array[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
