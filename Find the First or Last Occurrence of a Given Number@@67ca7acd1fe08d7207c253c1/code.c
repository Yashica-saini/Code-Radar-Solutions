#include <stdio.h>

// Function to find the first occurrence using Binary Search
int firstoccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            result = mid; // Store result and move left
            right = mid - 1;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence using Binary Search
int lastoccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            result = mid; // Store result and move right
            left = mid + 1;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
