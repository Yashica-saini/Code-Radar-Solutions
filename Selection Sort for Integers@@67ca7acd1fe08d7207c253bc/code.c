void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the first element is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update index of the minimum element
            }
        }
        // Swap only if needed
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {  // Corrected loop to prevent out-of-bounds access
        printf("%d ", arr[i]);
    }
    printf("\n");  // Newline for proper formatting
}
