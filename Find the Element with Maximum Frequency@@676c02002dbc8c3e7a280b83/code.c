#include <stdio.h>
#include <limits.h>

#define MAX 100000 // Define a large enough size for hashing

// Function to find the element with the highest frequency
int maxFrequencyElement(int arr[], int n) {
    int hash[MAX] = {0}; // Hash table to store frequencies

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int maxFreq = 0, maxElement = arr[0];

    // Traverse again to find the element with the highest frequency
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] > maxFreq) {
            maxFreq = hash[arr[i]];
            maxElement = arr[i];
        }
    }

    return maxElement;
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

    // Find and print the element with the maximum frequency
    printf("%d\n", maxFrequencyElement(arr, n));

    return 0;
}
