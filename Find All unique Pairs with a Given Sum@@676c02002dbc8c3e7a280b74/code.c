#include <stdio.h>

void findPairs(int arr[], int n, int targetSum) {
   
    
    for (int i = 0; i < n - 1; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("%d %d\n", arr[i], arr[j]);
                break; 
            }
        }
    }
}

int main() {
    int n, targetSum;
    
    
    
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &targetSum);
    
    findPairs(arr, n, targetSum);
    return 0;
}
