#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  
            j--;
        }
        arr[j + 1] = key;  
    }
}

// Function to print array in correct order
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // Print in normal order
        printf("%d ", arr[i]);
    }
    printf("\n");  
}
