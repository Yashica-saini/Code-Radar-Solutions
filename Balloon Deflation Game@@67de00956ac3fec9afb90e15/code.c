#include <stdio.h>

void deflateBalloons(int air[], int n) {
    int remaining = n;

    while (remaining > 0) {
        int min = 1000000000;

        // Find the minimum non-zero air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < min) {
                min = air[i];
            }
        }

        // Deflate balloons and count how many got deflated this round
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
                count++;
            }
        }

        // Print number of balloons deflated this round
        if (count > 0) {
            printf("%d\n", count);
        }

        remaining -= count;
    }
}
