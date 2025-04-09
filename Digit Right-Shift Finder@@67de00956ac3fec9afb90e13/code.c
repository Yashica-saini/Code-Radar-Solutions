#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to perform right shift of digits
int digitRightShift(int N) {
    char str[20];
    sprintf(str, "%d", N);  // Convert number to string

    int len = strlen(str);

    // If it has only 1 digit, shifting doesn't change it
    if (len == 1) {
        return N;
    }

    // Perform right shift
    char temp = str[len - 1];
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }
    str[0] = temp;

    int shiftedNumber = atoi(str);  // Convert string back to integer
    return shiftedNumber;
}