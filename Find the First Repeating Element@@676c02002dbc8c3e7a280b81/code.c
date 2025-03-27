#include <stdio.h>
#include <limits.h>

#define MAX 100000 // Define a large enough size for hashing

// Function to find the first repeating element
int firstRepeatingElement(int arr[], int n) {
    int hash[MAX]; // Hash table to store index of first occurrence
    for (int i = 0; i < MAX; i++) hash[i] = -1; // Initialize with -1

    int minIndex = INT_MAX; // Store the smallest index of a repeating element

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] != -1) { 
            // If element already exists, update minIndex
            if (hash[arr[i]] < minIndex) {
                minIndex = hash[arr[i]];
            }
        } else {
            hash[arr[i]] = i; // Store the first occurrence index
        }
    }

    // If minIndex remains INT_MAX, no repeating element was found
    return (minIndex == INT_MAX) ? -1 : arr[minIndex];
}

int main() {
    int n;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the first repeating element
    printf("%d\n", firstRepeatingElement(arr, n));

    return 0;
}
