#include <stdio.h>
#include <limits.h> // For INT_MIN

// Function to find the maximum product of two elements
int maxProduct(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements to form a product
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    // Find the two largest numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    return max1 * max2; // Maximum product of two numbers
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

    // Find and print the maximum product
    printf("%d\n", maxProduct(arr, n));

    return 0;
}
