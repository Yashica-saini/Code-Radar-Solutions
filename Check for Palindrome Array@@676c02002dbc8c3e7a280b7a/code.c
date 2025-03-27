#include <stdio.h>

// Function to check if an array is a palindrome
int isPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
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

    // Check if the array is a palindrome and print result
    if (isPalindrome(arr, n)) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
