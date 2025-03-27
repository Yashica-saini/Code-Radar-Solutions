#include <stdio.h>

// Function to count frequency of each element
void findFrequency(int arr[], int n) {
    int freq[1001] = {0}; // Assuming elements are in the range 0-1000

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d -> %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0; // Avoid duplicate printing
        }
    }
}

int main() {
    int n;

    // Read size of array
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print frequency
    findFrequency(arr, n);

    return 0;
}
