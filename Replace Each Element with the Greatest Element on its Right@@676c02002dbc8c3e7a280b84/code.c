#include <stdio.h>

// Function to replace each element with the greatest element on its right
void replaceWithGreatest(int arr[], int n) {
    int maxRight = -1; // Start with -1 for the last element

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];  // Store the current element
        arr[i] = maxRight;  // Replace with maxRight
        if (temp > maxRight) {
            maxRight = temp; // Update maxRight if current element is greater
        }
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

    // Replace elements with greatest on the right
    replaceWithGreatest(arr, n);

    // Print the modified array
    printArray(arr, n);

    return 0;
}
