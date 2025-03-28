#include <stdio.h>

void findLeaders(int arr[], int n) {
    
    int maxRight = arr[n - 1]; // Rightmost element is always a leader
    printf("%d ", maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d", maxRight);
        }
    }
}

int main() {
    int n;
    
    // Taking input
    
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findLeaders(arr, n);
    return 0;
}
