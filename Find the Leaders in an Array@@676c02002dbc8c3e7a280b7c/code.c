#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n], index = 0;
    int maxRight = arr[n - 1]; 
    leaders[index++] = maxRight;
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders[index++] = maxRight;
        }
    }
    
    // Print leaders in correct order
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;
    

    scanf("%d", &n);
    int arr[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findLeaders(arr, n);
    return 0;
}
