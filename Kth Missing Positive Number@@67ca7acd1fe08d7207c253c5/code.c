#include <stdio.h>

// Function to find the Kth missing positive number
int findKthMissing(int arr[], int n, int k) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int missingCount = arr[mid] - (mid + 1); // Missing numbers till index mid

        if (missingCount < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left + k; // Compute the Kth missing number
}