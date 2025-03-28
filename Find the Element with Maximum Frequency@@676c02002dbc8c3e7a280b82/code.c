#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n], index = 0;
    int maxRight = arr[n - 1]; // Rightmost element is always a leader
    leaders[index++] = maxRight;
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) { // Include equal values as leaders
            maxRight = arr[i];
            leaders[index++] = maxRight;
        }
    }
    
    
    
    for (int i = index - 1; i >= 0; i--) {
        
    }
   
}

void findMaxFrequencyElement(int arr[], int n) {
    int maxElement = arr[0], maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("%d\n", maxElement, maxCount);
}

int main() {
    int n;
    
   
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findLeaders(arr, n);
    findMaxFrequencyElement(arr, n);
    return 0;
}
