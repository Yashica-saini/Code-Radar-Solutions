#include <stdio.h>

// Function to calculate the running sum
void runningSum(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1]; // Add previous sum to the current element
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    // Compute the running sum
    runningSum(arr, n);

    // Print the modified array
    printArray(arr, n);

    return 0;
}
