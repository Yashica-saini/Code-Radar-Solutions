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
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    else{
        printf("No prime numbers");
    }
    printf("\n");
}