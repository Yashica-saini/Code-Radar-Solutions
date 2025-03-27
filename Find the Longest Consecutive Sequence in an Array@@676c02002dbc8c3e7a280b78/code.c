#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the longest consecutive sequence in an array
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    // Step 1: Sort the array
    qsort(arr, n, sizeof(int), compare);

    int longestStreak = 1, currentStreak = 1;

    // Step 2: Traverse sorted array to count longest sequence
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) { // Ignore duplicates
            if (arr[i] == arr[i - 1] + 1) {
                currentStreak++;
            } else {
                longestStreak = (currentStreak > longestStreak) ? currentStreak : longestStreak;
                currentStreak = 1; // Reset streak
            }
        }
    }

    return (currentStreak > longestStreak) ? currentStreak : longestStreak;
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

    // Find and print the longest consecutive sequence length
    printf("%d\n", longestConsecutive(arr, n));

    return 0;
}
