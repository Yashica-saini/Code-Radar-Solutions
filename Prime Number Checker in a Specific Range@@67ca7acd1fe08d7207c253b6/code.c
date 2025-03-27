#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    bool found = false; // Flag to check if at least one prime exists

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = true; // Set flag to true when a prime is found
        }
    }

    if (!found) {
        printf("No prime numbers");
    }
    
    printf("\n");
}

// Main function
int main() {
    int start, end;
    
    // Input range
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    // Print prime numbers in the range
    printf("Prime numbers in the range [%d, %d]: ", start, end);
    printPrimesInRange(start, end);

    return 0;
}
