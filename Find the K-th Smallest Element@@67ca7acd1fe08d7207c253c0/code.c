#include <stdio.h>

// Partition function used in QuickSelect
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot to its correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// QuickSelect function to find Kth smallest element
int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);

        if (pi == k - 1)  // Found the Kth smallest element
            return arr[pi];

        if (k - 1 < pi)  // Search in the left subarray
            return quickSelect(arr, low, pi - 1, k);

        return quickSelect(arr, pi + 1, high, k);  // Search in the right subarray
    }
    return -1; // This case should not happen for valid input
}

// Function to find the Kth smallest element
int kthSmallest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, k);
}
