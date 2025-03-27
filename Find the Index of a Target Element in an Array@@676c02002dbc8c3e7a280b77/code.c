#include <stdio.h>

// Function to find the index of the target element
int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index of first occurrence
        }
    }
    return -1; // Target not found
}

int main() {
    int n, target;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element
    scanf("%d", &target);

    // Find and print the index of the target element
    int index = findIndex(arr, n, target);
    printf("%d\n", index);

    return 0;
}
