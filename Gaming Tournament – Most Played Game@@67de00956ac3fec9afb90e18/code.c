#include <stdio.h>

// Function to find the most played game
int mostPlayedGame(int arr[],int n ) {
    int freq[101] = {0}; // Assuming Game IDs are between 1 to 100

    // Count frequency of each game
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, gameID = 0;

    for (int i = 1; i <= 100; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            gameID = i;
        }
    }

    return gameID;
}