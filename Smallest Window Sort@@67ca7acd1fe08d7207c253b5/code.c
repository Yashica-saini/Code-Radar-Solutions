void smallestWindowSortChars(char arr[], int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        char key = arr[i];
        int j = i - 1;

        
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
