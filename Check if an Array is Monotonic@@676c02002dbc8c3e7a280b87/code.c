#include <stdio.h>

// Function to check if an array is monotonic
int isMonotonic(int arr[], int n) {
    int increasing = 1, decreasing = 1; // Flags for monotonicity

    // Check increasing and decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            increasing = 0; // Not increasing
        }
        if (arr[i] < arr[i + 1]) {
            decreasing = 0; // Not decreasing
        }
    }

    return increasing || decreasing; // True if either condition holds
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

    // Check if the array is monotonic
    if (isMonotonic(arr, n)) {
        printf("Monotonic\n");
    } else {
        printf("Not Monotonic\n");
    }

    return 0;
}
