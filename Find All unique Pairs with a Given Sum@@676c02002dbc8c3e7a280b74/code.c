#include <stdio.h>

void findPairs(int arr[], int n, int targetSum) {
    printf("Unique pairs with sum %d are:\n", targetSum);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                // Check for duplicate pairs before printing
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) || (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("(%d, %d)\n", arr[i], arr[j]);
                }
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 6;
    
    findPairs(arr, n, targetSum);
    return 0;
}
