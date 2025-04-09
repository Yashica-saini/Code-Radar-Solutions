#include <stdio.h>

int nextPrimeDigit(int digit) {
    if (digit < 2) return 2;
    if (digit < 3) return 3;
    if (digit < 5) return 5;
    if (digit < 7) return 7;
    return 2;  // Wrap around after 7
}

int incrementToPrimeDigits(int N) {
    int result = 0, place = 1;

    while (N > 0) {
        int digit = N % 10;
        int primeDigit = nextPrimeDigit(digit);

        result = result + primeDigit * place;

        place = place * 10;
        N = N / 10;
    }

    return result;
}


