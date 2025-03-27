#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

// Function to find the maximum product of two elements
int maxProduct(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements to form a product
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    // Find the two largest and two smallest numbers
    for (int i = 0; i < n; i++) {
        // Update max1 and max2
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        // Update min1 and min2
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    // Compute the maximum product considering both positive and negative cases
    int product1 = max1 * max2;
    int product2 = min1 * min2;

    return (product1 > product2) ? product1 : product2;
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

