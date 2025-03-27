#include <stdio.h>
#include <stdlib.h>  // Include this for abs()

int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]); // Use abs() correctly
        if (arr[index] < 0) {
            return index; // Duplicate found
        }
        arr[index] = -arr[index]; // Mark the element as visited
    }
    return -1; // No duplicate found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findDuplicate(arr, n));

    return 0;
}
