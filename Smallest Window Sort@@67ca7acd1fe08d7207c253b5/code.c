#include <stdio.h>

// Function to find the length of the shortest unsorted subarray
int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element from the left which is out of order
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the array is already sorted, return 0
    if (left == n - 1) {
        return 0;
    }

    // Find the first element from the right which is out of order
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find the min and max in the unsorted subarray
    int min_val = arr[left], max_val = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Extend the left boundary
    while (left > 0 && arr[left - 1] > min_val) {
        left--;
    }

    // Extend the right boundary
    while (right < n - 1 && arr[right + 1] < max_val) {
        right++;
    }

    // Return the length of the unsorted subarray
    return right - left + 1;
}
