#include <stdio.h>

void deflateBalloons(int balloons[], int n, int result[]) {
    int score = 0;

    // Mark balloons as "popped" by setting to -1
    for (int i = 0; i < n; i++) {
        // Find the largest unpopped balloon
        int maxIdx = -1;
        for (int j = 0; j < n; j++) {
            if (balloons[j] != -1 && (maxIdx == -1 || balloons[j] > balloons[maxIdx])) {
                maxIdx = j;
            }
        }

        if (maxIdx != -1) {
            score += balloons[maxIdx];
            result[i] = score;
            balloons[maxIdx] = -1; // pop the balloon
        }
    }
}
