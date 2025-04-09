#include <stdio.h>

void deflateBalloons(int air[], int n) {
    int remaining = n;

    while (1) {
        int min = 1000000000;
        int count = 0;

        // Find the minimum positive air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < min) {
                min = air[i];
            }
        }

        // If all are zero, break
        if (min == 1000000000)
            break;

        // Deflate and count
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
                count++;
            }
        }

        printf("%d\n", count);
    }
}

