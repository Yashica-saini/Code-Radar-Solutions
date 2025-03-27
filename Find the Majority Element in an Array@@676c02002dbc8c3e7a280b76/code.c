#include <stdio.h>

// Function to find the majority element using Boyer-Moore Voting Algorithm
int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find the candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1; // Return -1 if no majority element
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

    // Find and print the majority element
    int majority = findMajorityElement(arr, n);
    printf("%d\n", majority);

    return 0;
}
