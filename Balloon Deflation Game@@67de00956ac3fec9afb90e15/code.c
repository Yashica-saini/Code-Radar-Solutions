#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int count = 0;
        int min = 1000000; // Take a large value for comparison

        // Count balloons with air and find minimum air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min) {
                    min = air[i];
                }
            }
        }

        // If all are deflated, stop
        if (count == 0) {
            break;
        }

        // Print count of balloons with air
        printf("%d\n", count);

        // Deflate balloons having air by minimum value
        for (int i = 0; i < n; i++) {
            if (air[i] >= 0) {
                air[i] -= min;
            }
        }
    }
}
