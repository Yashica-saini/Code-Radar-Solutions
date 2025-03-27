#include <stdio.h>

// Function to reverse an array from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by k positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Ensure k is within array bounds

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }
   
}

int main() {
    int n, k;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of k
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    printArray(arr, n);

    return 0;
}
