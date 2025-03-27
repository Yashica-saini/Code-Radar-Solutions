#include <stdio.h>

void selectionSort(int arr[10], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current index is the minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {  // Find the minimum element
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[10], int n) {
    for (int i = 0; i < n; i++) {  // Print in ascending order
        printf("%d ", arr[i]);
    }
    printf("\n");  // New line for better formatting
}

