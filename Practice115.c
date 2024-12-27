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

// Function to heapify a subtree rooted at index `i`
void heapify(int array[], int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && array[left] > array[largest])
    {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < n && array[right] > array[largest])
    {
        largest = right;
    }

    // If largest is not root
    if (largest != i)
    {
        swap(&array[i], &array[largest]); // Pass by reference to swap elements
        // Recursively heapify the affected subtree
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

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        swap(&array[0], &array[i]); // Pass by reference to swap elements

        // Call max heapify on the reduced heap
        heapify(array, i, 0);

        // Print the array after each swap
        printf("Swapped Array  : ");
        print_array(n, array);
    }
}

int main()
{
    // Array Declaration
    int array[] = {3, 8, 5, 12, 4, 17, 22, 12, 16};
    int n = sizeof(array) / sizeof(array[0]);

    // Print the original array
    printf("\nOriginal Array : ");
    print_array(n, array);
    printf("\n");

    // Perform heap sort
    heap_sort(n, array);

    // Print the sorted array
    printf("\nSorted Array   : ");
    print_array(n, array);

    return 0;
}
