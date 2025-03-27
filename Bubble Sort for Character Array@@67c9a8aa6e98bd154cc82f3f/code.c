#include <stdio.h>
#include <string.h>

// Function to perform Bubble Sort on character array
void bubbleSort(char arr[]) {
    int n = strlen(arr); // Get the length of the string
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap characters if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}