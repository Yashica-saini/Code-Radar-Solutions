#include <stdio.h>
#include <limits.h>

// Function to find the second smallest element
int findSecondSmallest(int arr[], int n) {
    if (n < 2) return -1; // If array has less than 2 elements, return -1

    int firstMin = INT_MAX, secondMin = INT_MAX;

    // Find the smallest and second smallest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] > firstMin && arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    return (secondMin == INT_MAX) ? -1 : secondMin;
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

    // Find and print the second smallest element
    printf("%d\n", findSecondSmallest(arr, n));

    return 0;
}
