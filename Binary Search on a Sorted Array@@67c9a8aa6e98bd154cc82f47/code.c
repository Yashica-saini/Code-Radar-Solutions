#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids integer overflow

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid; // Return index of the key

        // If key is greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;
        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }

    return -1; // Key not found
}