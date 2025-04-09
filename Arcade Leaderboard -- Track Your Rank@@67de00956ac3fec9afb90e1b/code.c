#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int unique[200000], size = 0;

    // Step 1: Create a unique ranked list (dense ranking)
    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            unique[size++] = ranked[i];
        }
    }

    // Step 2: Compare player scores from the end of unique[] (since it's descending)
    int i = size - 1;
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= unique[i]) {
            i--;
        }
        result[j] = i + 2; // i+1 is rank, +1 because array index starts at 0
    }
}
