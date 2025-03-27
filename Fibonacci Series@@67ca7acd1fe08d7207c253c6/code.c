#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    // Print the first two terms
    printf("%d %d ", first, second);

    // Generate and print the remaining terms
    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}