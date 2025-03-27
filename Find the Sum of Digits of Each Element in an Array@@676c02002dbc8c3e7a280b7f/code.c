#include <stdio.h>

// Function to compute the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Extract last digit and add to sum
        num /= 10;       // Remove last digit
    }
    return sum;
}

// Function to compute and print the sum of digits for each array element
void sumOfDigitsArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", sumOfDigits(arr[i]));
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

    // Compute and print sum of digits for each element
    sumOfDigitsArray(arr, n);

    return 0;
}
