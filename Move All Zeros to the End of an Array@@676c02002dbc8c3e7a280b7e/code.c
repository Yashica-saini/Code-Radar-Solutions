#include <stdio.h>

// Function to move all zeroes to the end
void moveZeroesToEnd(int arr[], int n) {
    int j = 0; // Pointer to track position for non-zero elements

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++; // Move the non-zero pointer
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

    // Move zeroes to the end
    moveZeroesToEnd(arr, n);

    // Print the modified array
    printArray(arr, n);

    return 0;
}
