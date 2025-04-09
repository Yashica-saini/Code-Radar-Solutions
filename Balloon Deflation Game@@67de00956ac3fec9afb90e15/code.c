#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int min = 1000000000;
        int count = 0;

        // Count how many balloons still have air and find min > 0
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min) {
                    min = air[i];
                }
            }
        }

        // If all are deflated, stop
        if (count == 0)
            break;

        // Print count before this round
        printf("%d\n", n);  // print total number of balloons, as you requested

        // Deflate the balloons that have air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}

