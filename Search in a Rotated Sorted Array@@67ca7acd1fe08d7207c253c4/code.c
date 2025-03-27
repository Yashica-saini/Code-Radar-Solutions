#include <stdio.h>

// Function to search in a rotated sorted array
int searchRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the middle element is the target, return its index
        if (arr[mid] == target) {
            return mid;
        }

        // Check which half is sorted
        if (arr[left] <= arr[mid]) { // Left half is sorted
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1; // Search in the left half
            } else {
                left = mid + 1; // Search in the right half
            }
        } else { // Right half is sorted
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
    }

    return -1; // Target not found
}