#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the smallest missing positive integer
int findMissingPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Swap elements to their correct position if they are in range (1 to n)
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first missing positive
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1; // If all elements are in place, return next number
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

    // Find and print the smallest missing positive integer
    printf("%d\n", findMissingPositive(arr, n));

    return 0;
}
