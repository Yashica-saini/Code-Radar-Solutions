#include <stdio.h>

// Function to calculate total likes after n days
int totalLikes(int n) {
    int shared = 5;    // Initial people invited
    int liked = 0;     // Total likes

    for(int i = 1; i <= n; i++) {
        int currentLikes = shared / 2; // Floor division
        liked += currentLikes;
        shared = currentLikes * 3; // Each like sends to 3 friends
    }

    return liked;
}