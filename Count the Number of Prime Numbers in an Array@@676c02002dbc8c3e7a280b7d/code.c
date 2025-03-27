#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to count prime numbers in an array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
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

    // Count and print the number of prime numbers
    printf("%d\n", countPrimes(arr, n));

    return 0;
}
