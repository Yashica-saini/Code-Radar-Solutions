#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    if (num < 0) return 0; // Negative numbers are not palindromes

    int original = num, reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return (original == reversed); // Check if reversed number matches original
}

// Function to count palindromic numbers in the array
int countPalindromes(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    return count;
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

    // Print the count of palindromic numbers
    printf("%d\n", countPalindromes(arr, n));

    return 0;
}
