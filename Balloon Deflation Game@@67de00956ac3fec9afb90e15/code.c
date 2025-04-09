#include <stdio.h>

void deflateBalloons(int air[], int n) {
    int remaining = n;

    while (1) {
        int min = 1000000000;
        int count = 0;

        // Find the minimum non-zero air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < min) {
                min = air[i];
            }
        }

        // If all balloons are deflated, stop
        if (min == 1000000000) {
            break;
        }

        // Deflate and count how many were affected
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
                count++;
            }
        }

        // Print number of balloons deflated in this round
        printf("%d\n", count);
    }
}
